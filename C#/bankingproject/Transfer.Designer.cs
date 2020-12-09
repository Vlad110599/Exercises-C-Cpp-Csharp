namespace bankingproject
{
    partial class Transfer
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.datalbl = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.fromacctxt = new System.Windows.Forms.TextBox();
            this.nametxt = new System.Windows.Forms.TextBox();
            this.destaccounttxt = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.crtamounttxt = new System.Windows.Forms.TextBox();
            this.transferamtxt = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(272, 41);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(76, 26);
            this.label1.TabIndex = 0;
            this.label1.Text = "Date :";
            // 
            // datalbl
            // 
            this.datalbl.AutoSize = true;
            this.datalbl.Location = new System.Drawing.Point(354, 49);
            this.datalbl.Name = "datalbl";
            this.datalbl.Size = new System.Drawing.Size(0, 17);
            this.datalbl.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(23, 111);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(150, 17);
            this.label2.TabIndex = 2;
            this.label2.Text = "From Acount Number :";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(23, 160);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 17);
            this.label3.TabIndex = 3;
            this.label3.Text = "Name :";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(23, 268);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(142, 17);
            this.label4.TabIndex = 4;
            this.label4.Text = "Destination Account :";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(23, 320);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(64, 17);
            this.label5.TabIndex = 5;
            this.label5.Text = "Amount :";
            this.label5.Click += new System.EventHandler(this.label5_Click);
            // 
            // fromacctxt
            // 
            this.fromacctxt.Location = new System.Drawing.Point(179, 108);
            this.fromacctxt.Name = "fromacctxt";
            this.fromacctxt.Size = new System.Drawing.Size(208, 22);
            this.fromacctxt.TabIndex = 6;
            // 
            // nametxt
            // 
            this.nametxt.Location = new System.Drawing.Point(179, 157);
            this.nametxt.Name = "nametxt";
            this.nametxt.Size = new System.Drawing.Size(208, 22);
            this.nametxt.TabIndex = 7;
            // 
            // destaccounttxt
            // 
            this.destaccounttxt.Location = new System.Drawing.Point(179, 265);
            this.destaccounttxt.Name = "destaccounttxt";
            this.destaccounttxt.Size = new System.Drawing.Size(208, 22);
            this.destaccounttxt.TabIndex = 8;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(26, 212);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(110, 17);
            this.label6.TabIndex = 9;
            this.label6.Text = "Curent Amount :";
            // 
            // crtamounttxt
            // 
            this.crtamounttxt.Location = new System.Drawing.Point(179, 209);
            this.crtamounttxt.Name = "crtamounttxt";
            this.crtamounttxt.Size = new System.Drawing.Size(208, 22);
            this.crtamounttxt.TabIndex = 10;
            // 
            // transferamtxt
            // 
            this.transferamtxt.Location = new System.Drawing.Point(179, 317);
            this.transferamtxt.Name = "transferamtxt";
            this.transferamtxt.Size = new System.Drawing.Size(208, 22);
            this.transferamtxt.TabIndex = 11;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(426, 100);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(108, 39);
            this.button1.TabIndex = 12;
            this.button1.Text = "Show Details";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(179, 388);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(98, 36);
            this.button2.TabIndex = 13;
            this.button2.Text = "Transfer";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(289, 388);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(98, 36);
            this.button3.TabIndex = 14;
            this.button3.Text = "Cancel";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // Transfer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(683, 462);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.transferamtxt);
            this.Controls.Add(this.crtamounttxt);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.destaccounttxt);
            this.Controls.Add(this.nametxt);
            this.Controls.Add(this.fromacctxt);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.datalbl);
            this.Controls.Add(this.label1);
            this.Name = "Transfer";
            this.Text = "Transfer";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label datalbl;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox fromacctxt;
        private System.Windows.Forms.TextBox nametxt;
        private System.Windows.Forms.TextBox destaccounttxt;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox crtamounttxt;
        private System.Windows.Forms.TextBox transferamtxt;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
    }
}