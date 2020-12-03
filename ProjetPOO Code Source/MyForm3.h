#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		MyForm3(Form ^obj3)
		{
			obj = obj3;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(178, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Adresse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(181, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prenom";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(313, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(181, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(316, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(55, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(181, 155);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(49, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(247, 32);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Gestion personnel";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 56);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Créer un profil d\'un personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(258, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 56);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modifier le profil d\'un personnel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(55, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 56);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Afficher les profils des personnels";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(258, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 56);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Effacer un profil d\'un personnel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(55, 380);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(361, 56);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(452, 77);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(877, 368);
			this->dataGridView1->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(316, 155);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(313, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id Supérieur";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(446, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(275, 32);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Panneau d\'affichage";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 503);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"Panneau de gestion | Personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		/*int id = Int32::Parse(textBox1->Text);*/
		int idsup = Int32::Parse(textBox6->Text);
		String^ adresse = textBox2->Text;
		String^ Date = textBox3->Text;
		String^ nom = textBox4->Text;
		String^ prenom = textBox5->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into personnel (adresse_mail,date_embauche,nomp,prenomp,idsup) values('" + adresse + "','" + Date + "','" + nom + "','" + prenom + "','" + idsup + "')", con);
		cmd->ExecuteReader();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textBox1->Text);
		int idsup = Int32::Parse(textBox6->Text);
		String^ adresse = textBox2->Text;
		String^ Date = textBox3->Text;
		String^ nom = textBox4->Text;
		String^ prenom = textBox5->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("update personnel set adresse_mail='" + adresse + "',date_embauche='" + Date + "',nomp='" + nom + "',prenomp='" + prenom + "',idsup='"+ id +"' where idperso='"+id+"'", con);
		cmd->ExecuteReader();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from personnel", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();
		int id = Int32::Parse(textBox1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from personnel where idperso ='" + id + "'", con);
		cmd->ExecuteReader();
		con->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
};
}
