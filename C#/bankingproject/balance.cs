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
    public partial class balance : Form
    {
        //BindingList<userAccount> bi;
        public balance()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            BindingList<debit> bi = new BindingList<debit>();
            BindingList<DepositAm> bi1 = new BindingList<DepositAm>();
            BindingList<TransferAm> bi2 = new BindingList<TransferAm>();
            decimal b = Convert.ToDecimal(textBox1.Text);
            var item = dbe.debits.Where(a => a.AccountNo == b);
            foreach(var u in item)
            {
                bi.Add(u);

            }
            dataGridView1.DataSource = bi;

            var item1 = dbe.DepositAms.Where(a => a.Account_No == b);
            foreach (var u in item1)
            {
                bi1.Add(u);

            }
            dataGridView2.DataSource = bi1;

            var item2 = dbe.TransferAms.Where(a => a.Account_No == b);
            foreach (var u in item2)
            {
                bi2.Add(u);

            }
            dataGridView3.DataSource = bi2;

        }
    }
}
