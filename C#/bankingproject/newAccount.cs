using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bankingproject
{
    public partial class newAccount : Form
    {

        string gender = string.Empty;
        decimal no;
        bankingEntities1 BSE;
        MemoryStream ms;
        
        public newAccount()
        {
            InitializeComponent();
            loaddate();
            loadaccount();
            loadstate();
        }

        private void loadaccount()
        {
            BSE = new bankingEntities1();
            var item = BSE.userAccounts.ToArray();
            no = item.LastOrDefault().Account_No + 1;
            accnotxt.Text = Convert.ToString(no);
        }

        private void loadstate()
        {
            //throw new NotImplementedException();.
            comboBox1.Items.Add("Romania");
        }

        private void loaddate()
        {
            //throw new NotImplementedException();
            datelbl.Text = DateTime.Now.ToString("MM/dd/yyyy");
        }

        private void label11_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog opendl = new OpenFileDialog();
            if(opendl.ShowDialog()==DialogResult.OK)
            {
                Image img = Image.FromFile(opendl.FileName);
                pictureBox1.Image = img;
                ms = new MemoryStream();
                img.Save(ms, img.RawFormat);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(maleradio.Checked)
            {
                gender = "male";
            }else if(femaleradio.Checked)
            {
                gender = "female";
            }

            BSE = new bankingEntities1();
            userAccount acc = new userAccount();
            acc.Account_No = Convert.ToDecimal(accnotxt.Text);
            acc.Name = nametxt.Text;
            acc.DOB = dateTimePicker1.Value.ToString();
            acc.CNP = Convert.ToDecimal(cnptxt.Text);
            acc.Address = addtxt.Text;
            acc.City = citytxt.Text;
            acc.Country = comboBox1.SelectedItem.ToString();
            acc.Gender = gender;
            acc.PhoneNumber = phntxt.Text;
            acc.Email = emailtxt.Text;
            acc.Balance = Convert.ToDecimal(balancetxt.Text);
            acc.Date = datelbl.Text;
            acc.Picture = ms.ToArray();
            BSE.userAccounts.Add(acc);
            BSE.SaveChanges();
            MessageBox.Show("File saved!");


        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
