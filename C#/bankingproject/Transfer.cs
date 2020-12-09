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
    public partial class Transfer : Form
    {
        public Transfer()
        {
            InitializeComponent();
            loaddata();
        }

        private void loaddata()
        {
            // throw new NotImplementedException();
            datalbl.Text = DateTime.UtcNow.ToString("MM/dd/yyyy");
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            decimal b = Convert.ToDecimal(fromacctxt.Text);
            var item = (from u in dbe.userAccounts where u.Account_No == b select u).FirstOrDefault();
            nametxt.Text = item.Name;
            crtamounttxt.Text = Convert.ToString(item.Balance);


        }

        private void button2_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            decimal b = Convert.ToDecimal(fromacctxt.Text);
            var item = (from u in dbe.userAccounts where u.Account_No == b select u).FirstOrDefault();
            decimal b1 = Convert.ToDecimal(item.Balance);
            decimal totalbal = Convert.ToDecimal(transferamtxt.Text);
            decimal transferacc = Convert.ToDecimal(destaccounttxt.Text);
            if(b1>totalbal)
            {
                var item2 = (from u in dbe.userAccounts where u.Account_No == transferacc select u).FirstOrDefault();
                item2.Balance = item2.Balance + totalbal;
                item.Balance = item.Balance - totalbal;
                //dbe.SaveChanges();
                TransferAm transfer = new TransferAm();
                transfer.Account_No = Convert.ToDecimal(fromacctxt.Text);
                transfer.ToTransfer = Convert.ToDecimal(destaccounttxt.Text);
                transfer.Date = DateTime.UtcNow.ToString();
                transfer.Name = nametxt.Text;
                transfer.balance = Convert.ToDecimal(transferamtxt.Text);

                dbe.TransferAms.Add(transfer);
                dbe.SaveChanges();
                MessageBox.Show("Transfer Money Succesfully!");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
