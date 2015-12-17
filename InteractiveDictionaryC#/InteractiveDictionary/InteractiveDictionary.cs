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

        private InteractiveDictionaryCLR.InteractiveDictionaryCLR _interac { get ; set; }

        public InteractiveDictionary()
        {
            InitializeComponent();
            _interac = new InteractiveDictionaryCLR.InteractiveDictionaryCLR();

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

        private void searchComboBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            searchComboBox.Items.Clear();
            searchComboBox.SelectedText = string.Empty;
            string msg = _interac.search(searchComboBox.SelectedText);
            searchComboBox.Items.Add(msg);
        }
    }
}
