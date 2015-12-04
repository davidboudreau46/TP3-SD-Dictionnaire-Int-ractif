using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace InteractiveDictionary
{
    public partial class InteractiveDictionary : Form
    {
        public InteractiveDictionary()
        {
            InitializeComponent();
            InteractiveDictionary interac = new InteractiveDictionary();
            int test = interac.returnTest();
        }

        private void àProposToolStripMenuItem_Click(object sender, EventArgs e)
        {
            About about = new About();
            about.Show();
        }
    }

}
