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
    public partial class changePassword : Form
    {
        public changePassword()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bankingEntities1 dbe = new bankingEntities1();
            if(oldpass.Text !=string.Empty || newpass.Text != string.Empty || repass.Text != string.Empty)
            {
                Admin_Table user1 = dbe.Admin_Table.FirstOrDefault(a => a.Username.Equals(usrname.Text));
                if(user1 != null)
                {
                    if(user1.Password.Equals(oldpass.Text))
                    {
                        user1.Password = newpass.Text;
                        dbe.SaveChanges();
                        MessageBox.Show("Password Change Sucessfully!");
                    }
                    else
                    {
                        MessageBox.Show("Password Incorrect!");
                    }
                }
            }
        }
    }
}
