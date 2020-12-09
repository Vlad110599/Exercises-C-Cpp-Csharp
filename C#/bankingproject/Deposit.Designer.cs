namespace bankingproject
{
    partial class Deposit
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
            this.datedl = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.acttxt = new System.Windows.Forms.TextBox();
            this.nmetxt = new System.Windows.Forms.TextBox();
            this.oldbalancetxt = new System.Windows.Forms.TextBox();
            this.depamtxt = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.DetailsButton = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(192, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(131, 26);
            this.label1.TabIndex = 0;
            this.label1.Text = "Curent date:";
            // 
            // datedl
            // 
            this.datedl.AutoSize = true;
            this.datedl.Location = new System.Drawing.Point(330, 61);
            this.datedl.Name = "datedl";
            this.datedl.Size = new System.Drawing.Size(0, 17);
            this.datedl.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 146);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(163, 17);
            this.label2.TabIndex = 2;
            this.label2.Text = "Enter Account Number : ";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(13, 207);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 17);
            this.label3.TabIndex = 3;
            this.label3.Text = "Name :";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(13, 269);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(93, 17);
            this.label4.TabIndex = 4;
            this.label4.Text = "Old Balance :";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(13, 330);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(51, 17);
            this.label5.TabIndex = 5;
            this.label5.Text = "Mode :";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(13, 391);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(116, 17);
            this.label6.TabIndex = 6;
            this.label6.Text = "Deposit Amount :";
            // 
            // acttxt
            // 
            this.acttxt.Location = new System.Drawing.Point(182, 143);
            this.acttxt.Name = "acttxt";
            this.acttxt.Size = new System.Drawing.Size(224, 22);
            this.acttxt.TabIndex = 7;
            // 
            // nmetxt
            // 
            this.nmetxt.Location = new System.Drawing.Point(182, 204);
            this.nmetxt.Name = "nmetxt";
            this.nmetxt.Size = new System.Drawing.Size(224, 22);
            this.nmetxt.TabIndex = 8;
            // 
            // oldbalancetxt
            // 
            this.oldbalancetxt.Location = new System.Drawing.Point(182, 266);
            this.oldbalancetxt.Name = "oldbalancetxt";
            this.oldbalancetxt.Size = new System.Drawing.Size(224, 22);
            this.oldbalancetxt.TabIndex = 9;
            // 
            // depamtxt
            // 
            this.depamtxt.Location = new System.Drawing.Point(182, 388);
            this.depamtxt.Name = "depamtxt";
            this.depamtxt.Size = new System.Drawing.Size(224, 22);
            this.depamtxt.TabIndex = 10;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(182, 327);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(224, 24);
            this.comboBox1.TabIndex = 11;
            // 
            // DetailsButton
            // 
            this.DetailsButton.Location = new System.Drawing.Point(441, 138);
            this.DetailsButton.Name = "DetailsButton";
            this.DetailsButton.Size = new System.Drawing.Size(110, 32);
            this.DetailsButton.TabIndex = 12;
            this.DetailsButton.Text = "Get Detail";
            this.DetailsButton.UseVisualStyleBackColor = true;
            this.DetailsButton.Click += new System.EventHandler(this.DetailsButton_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(197, 473);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(83, 31);
            this.button1.TabIndex = 13;
            this.button1.Text = "Update";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(324, 473);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(82, 31);
            this.button2.TabIndex = 14;
            this.button2.Text = "Close";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Deposit
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(833, 548);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.DetailsButton);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.depamtxt);
            this.Controls.Add(this.oldbalancetxt);
            this.Controls.Add(this.nmetxt);
            this.Controls.Add(this.acttxt);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.datedl);
            this.Controls.Add(this.label1);
            this.Name = "Deposit";
            this.RightToLeftLayout = true;
            this.Text = "Deposit";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label datedl;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox acttxt;
        private System.Windows.Forms.TextBox nmetxt;
        private System.Windows.Forms.TextBox oldbalancetxt;
        private System.Windows.Forms.TextBox depamtxt;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Button DetailsButton;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
    }
}