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
    public partial class Login : Form
    {
        public Login()
        {
            InitializeComponent();
        }

        private void Login_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            if(usrtxt.Text!= string.Empty || passtxt.Text!= string.Empty)
            {
                var user1 = dbe.Admin_Table.FirstOrDefault(a => a.Username.Equals(usrtxt.Text));
                if(user1!= null)
                {
                    if(user1.Password.Equals(passtxt.Text))
                    {
                        Menu m1 = new Menu();
                        this.Hide();
                        m1.ShowDialog();
                    }
                    else
                    {
                        MessageBox.Show("Password incorect!");
                    }
                }
                else
                {
                    MessageBox.Show("Null value!");
                }     
            }
            else
            {
                MessageBox.Show("Please enter username and password!");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
