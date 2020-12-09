using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace bankingproject
{
    public partial class withdraw : Form
    {
        public withdraw()
        {
            InitializeComponent();
            loadcombo();
            loaddata();
        }

        private void loadcombo()
        {
            //throw new NotImplementedException();
            comboBox1.Items.Add("Cash");
            comboBox1.Items.Add("Chque");
        }

        private void loaddata()
        {
            //throw new NotImplementedException();
            datelbl.Text = DateTime.UtcNow.ToString("MM/dd/yyyy");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            decimal b = Convert.ToDecimal(acctxt.Text);
            var item = (from u in dbe.userAccounts where u.Account_No == b select u).FirstOrDefault();
            nametxt.Text = item.Name;
            oldbalancetxt.Text = Convert.ToString(item.Balance);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            newAccount nacc = new newAccount();
            debit dp = new debit();
            dp.Data = datelbl.Text;
            dp.AccountNo = Convert.ToDecimal(acctxt.Text);
            dp.Name = nametxt.Text;
            dp.OldBalance = Convert.ToDecimal(oldbalancetxt.Text);
            dp.Mode = comboBox1.SelectedItem.ToString();
            dp.Debit1 = Convert.ToDecimal(amounttxt.Text);
            dbe.debits.Add(dp);
            //dbe.SaveChanges();
            decimal b = Convert.ToDecimal(acctxt.Text);
            var item = (from u in dbe.userAccounts where u.Account_No == b select u).FirstOrDefault();
            item.Balance = item.Balance - Convert.ToDecimal(amounttxt.Text);
            dbe.SaveChanges();
            MessageBox.Show("Withdraw Money Succesfully!");

        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
