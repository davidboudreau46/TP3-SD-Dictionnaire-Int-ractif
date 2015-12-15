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

            searchBox.SelectedText = string.Empty;
            char msg = (char)interac.returnTest();
            searchBox.Items.Add(msg.ToString());
        }

        private void aboutStripMenuItem_Click(object sender, EventArgs e)
        {
            About about = new About();
            about.Show();
        }

        private void quitterToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form.ActiveForm.Close();
        }

        private void InteractiveDictionary_Load(object sender, EventArgs e)
        {
            // Define the border style of the form to a dialog box.
            this.FormBorderStyle = FormBorderStyle.FixedDialog;

            // Set the MaximizeBox to false to remove the maximize box.
            this.MaximizeBox = false;

            // Set the MinimizeBox to false to remove the minimize box.
            this.MinimizeBox = false;

            // Set the start position of the form to the center of the screen.
            this.StartPosition = FormStartPosition.CenterScreen;
        }

    }
}
