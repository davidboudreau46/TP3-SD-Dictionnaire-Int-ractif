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
    public partial class InteractiveDictionary: Form
    {
        public InteractiveDictionary()
        {
            InitializeComponent();
            InteractiveDictionaryCLR.InteractiveDictionaryCLR interac = new InteractiveDictionaryCLR.InteractiveDictionaryCLR();

            textBox1.SelectedText = string.Empty;
            char msg = (char)interac.returnTest();
            textBox1.AppendText(msg.ToString());
        }

        private void àProposToolStripMenuItem_Click(object sender, EventArgs e)
        {
            About about = new About();
            about.Show();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
