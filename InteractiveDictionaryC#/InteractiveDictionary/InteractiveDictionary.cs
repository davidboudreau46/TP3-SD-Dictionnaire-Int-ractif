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

            searchComboBox.SelectedText = string.Empty;
            char msg = (char)interac.returnTest();
            searchComboBox.ValueMember = msg.ToString();
        }

        private void àProposToolStripMenuItem_Click(object sender, EventArgs e)
        {
            About about = new About();
            about.Show();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void quitterToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form.ActiveForm.Close();
        }

        private void searchComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
