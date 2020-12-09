using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bankingproject
{
    public partial class updateAccount : Form
    {
        bankingEntities1 dbe;
        MemoryStream ms;
        BindingList<userAccount> bi;

        public updateAccount()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bi = new BindingList<userAccount>();
            dbe = new bankingEntities1();
            decimal accno = Convert.ToDecimal(acctxt.Text);
            var item = dbe.userAccounts.Where(a => a.Account_No == accno);
            foreach(var item1 in item)
            {
                bi.Add(item1);
            }
            dataGridView1.DataSource = bi;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            bi = new BindingList<userAccount>();
            dbe = new bankingEntities1();
            var item = dbe.userAccounts.Where(a => a.Name == nametxt.Text);
            foreach(var item1 in item)
            {
                bi.Add(item1);
            }
            dataGridView1.DataSource = bi;
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            dbe = new bankingEntities1();
            decimal accno = Convert.ToDecimal(dataGridView1.Rows[e.RowIndex].Cells[0].Value);
            var item = dbe.userAccounts.Where(a => a.Account_No == accno).FirstOrDefault();
            acctxt.Text = item.Account_No.ToString();
            nametxt.Text = item.Name;
            adrstxt.Text = item.Address;
            byte[] img = item.Picture;
            MemoryStream ms = new MemoryStream(img);
            pictureBox1.Image = Image.FromStream(ms);
            ctytxt.Text = item.City;
            if(item.Gender == "male")
            {
                maleradio.Checked = true;
            }
            else if(item.Gender == "female")
            {
                femaleradio.Checked = true;
            }
            contrytxt.Text = item.Country;
            phnotxt.Text = item.PhoneNumber;
            emailtxt.Text = item.Email;

        }

        private void button5_Click(object sender, EventArgs e)
        {
            OpenFileDialog opendlg = new OpenFileDialog();
            
            if(opendlg.ShowDialog() == DialogResult.OK)
            {
                Image img = Image.FromFile(opendlg.FileName);
                pictureBox1.Image = img;
                ms = new MemoryStream();
                img.Save(ms, img.RawFormat);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            bi.RemoveAt(dataGridView1.SelectedRows[0].Index);
            dbe = new bankingEntities1();
            decimal a = Convert.ToDecimal(acctxt.Text);
            userAccount acc = dbe.userAccounts.First(s => s.Account_No.Equals(a));
            dbe.userAccounts.Remove(acc);
            dbe.SaveChanges();

        }

        private void button3_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            decimal accountno = Convert.ToDecimal(acctxt.Text);
            userAccount useracc = dbe.userAccounts.First(s => s.Account_No.Equals(accountno));
            useracc.Account_No = Convert.ToDecimal(acctxt.Text);
            useracc.Name = nametxt.Text;
            useracc.Date = dateTimePicker1.Value.ToString();
            useracc.PhoneNumber = phnotxt.Text;
            if(maleradio.Checked == true)
            {
                useracc.Gender = "male";
            }
            else
            {
                if(femaleradio.Checked == true)
                    useracc.Gender = "female";
            }
            Image img = pictureBox1.Image;
            if(img.RawFormat != null)
            {
                if(ms!=null)
                {
                    img.Save(ms, img.RawFormat);
                    useracc.Picture = ms.ToArray();

                }
            }
            useracc.Address = adrstxt.Text;
            useracc.City = ctytxt.Text;
            useracc.Country = contrytxt.Text;
            useracc.Email = emailtxt.Text;
            dbe.SaveChanges();
            MessageBox.Show("Record Updated!");
        }
    }
}
