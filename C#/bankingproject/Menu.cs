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
    public partial class Menu : Form
    {
        public Menu()
        {
            InitializeComponent();
            this.BackgroundImage = Properties.Resources.How_do_banks_work;
        }

        private void newAccountToolStripMenuItem_Click(object sender, EventArgs e)
        {
            newAccount newacc = new newAccount();
            newacc.MdiParent = this;
            newacc.Show();
        }

        private void updateSearchAccountToolStripMenuItem_Click(object sender, EventArgs e)
        {
            updateAccount upacc = new updateAccount();
            upacc.MdiParent = this;
            upacc.Show();
        }

        private void allCustomersToolStripMenuItem_Click(object sender, EventArgs e)
        {
            allCustomers allacc = new allCustomers();
            allacc.MdiParent = this;
            allacc.Show();
        }

        private void depositToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Deposit dep = new Deposit();
            dep.MdiParent = this;
            dep.Show();
        }

        private void withdrawToolStripMenuItem_Click(object sender, EventArgs e)
        {
            withdraw wtd = new withdraw();
            wtd.MdiParent = this;
            wtd.Show();
        }

        private void transferToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Transfer tran = new Transfer();
            tran.MdiParent = this;
            tran.Show();
        }

        private void balanceSheetToolStripMenuItem_Click(object sender, EventArgs e)
        {
            balance bal = new balance();
            bal.MdiParent = this;
            bal.Show();
        }

        private void logoutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Login log = new Login();
            this.Hide();
            log.ShowDialog();
        }

        private void changePasswordToolStripMenuItem_Click(object sender, EventArgs e)
        {
            changePassword chpass = new changePassword();
            chpass.MdiParent = this;
            chpass.Show();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Menu_Load(object sender, EventArgs e)
        {

        }
    }
}
