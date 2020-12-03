#pragma once

namespace Project7{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Description resumee de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		MyForm2(Form ^obj2)
		{
			obj = obj2;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable necessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Methode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette methode avec l'editeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(693, 122);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(660, 339);
			this->dataGridView1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 140);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Date livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(310, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Date d\'envoi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Date récéption";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(180, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ID client";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(310, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"References objets";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(57, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 160);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(313, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(57, 234);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(183, 234);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(313, 234);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(490, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 60);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Creer une commande";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(490, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 60);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Modifier une commande";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(490, 122);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 60);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Afficher les commandes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(490, 366);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 60);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Effacer une commande";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(52, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 32);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Gestion commande";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(57, 366);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(356, 60);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Retour à l\'accueil";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(57, 308);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(54, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 17);
			this->label8->TabIndex = 29;
			this->label8->Text = L"ID personnel";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(687, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(275, 32);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Panneau d\'affichage";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1382, 503);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->Text = L"Panneau de gestion | Commande";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		//int id = Int32::Parse(textBox1->Text);
		int IDperso = Int32::Parse(textBox7->Text);
		String^ Date_L = textBox2->Text;
		String^ Date_E = textBox3->Text;
		String^ Date_R = textBox4->Text;
		String^ Numero = textBox5->Text;
		String^ Reference = textBox6->Text;
		
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into commande (date_livraison,date_emission,date_reglement,numero,reference,idperso) values('" + Date_L + "','" + Date_E + "','" + Date_R + "','" + Numero + "','" + Reference + "','" + IDperso + "')", con);
		cmd->ExecuteReader();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textBox1->Text);
		int IDperso= Int32::Parse(textBox7->Text);
		String^ Date_L = textBox2->Text;
		String^ Date_E = textBox3->Text;
		String^ Date_R = textBox4->Text;
		String^ Numero = textBox5->Text;
		String^ Reference = textBox6->Text;
		con->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("update Commande set Date_Livraison='" + Date_L + "',Date_Emission='" + Date_E + "',Date_Reglement='" + Date_R + "',id='" + id + "', Numero='"+ Numero +"', Reference='"+ Reference +"',idperso='"+ IDperso+"' where ID='" + id + "'", con);
		cmd->ExecuteReader();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from commande", con);
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
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from commande where ID ='" + id + "'", con);
		cmd->ExecuteReader();
		con->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
