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
    public partial class Deposit : Form
    {
        public Deposit()
        {
            InitializeComponent();
            loaddate();
            loadmode();
        }

        private void loadmode()
        {
            //throw new NotImplementedException();
            comboBox1.Items.Add("Cash");
            comboBox1.Items.Add("Chque");
        }

        private void loaddate()
        {
            // throw new NotImplementedException();
            datedl.Text = DateTime.UtcNow.ToString("MM/dd/yyyy");
        }

        private void DetailsButton_Click(object sender, EventArgs e)
        {
            bankingEntities1 context = new bankingEntities1();
            decimal b = Convert.ToDecimal(acttxt.Text);
            var item = (from u in context.userAccounts where u.Account_No == b select u).FirstOrDefault();
            nmetxt.Text = item.Name;
            oldbalancetxt.Text = Convert.ToString(item.Balance);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 context = new bankingEntities1();
            newAccount acc = new newAccount();
            DepositAm dp = new DepositAm();
            dp.Date = datedl.Text;
            dp.Account_No = Convert.ToDecimal(acttxt.Text);
            dp.Name = nmetxt.Text;
            dp.OldBalance = Convert.ToDecimal(oldbalancetxt.Text);
            dp.Mode = comboBox1.SelectedItem.ToString();
            dp.DipAmount = Convert.ToDecimal(depamtxt.Text);
            context.DepositAms.Add(dp);
            context.SaveChanges();
            decimal b = Convert.ToDecimal(acttxt.Text);
            var item = (from u in context.userAccounts where u.Account_No == b select u).FirstOrDefault();
            item.Balance = item.Balance + Convert.ToDecimal(depamtxt.Text);
            context.SaveChanges();
            MessageBox.Show("Deposit Money Succesful!");

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
