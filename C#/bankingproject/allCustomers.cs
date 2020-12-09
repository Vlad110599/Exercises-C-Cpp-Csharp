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
    public partial class allCustomers : Form
    {
        public allCustomers()
        {
            InitializeComponent();
            bindgrid();
        }

        private void bindgrid()
        {
            dataGridView1.AutoGenerateColumns = false;
            bankingEntities1 bs = new bankingEntities1();
            var item = bs.userAccounts.ToList();
            dataGridView1.DataSource = item;
            //throw new NotImplementedException();
        }
    }
}
