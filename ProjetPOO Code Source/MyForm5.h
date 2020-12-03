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
	/// Description résumée de MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

		MyForm5(Form^ obj5)
		{
			obj = obj5;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(505, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(621, 261);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(385, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Panier Moyen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Valeur d\'achat du stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(261, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Valeur commerciale du stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(948, 388);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Produit sous seuil de réapprovisionnement";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(44, 279);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 52);
			this->button6->TabIndex = 6;
			this->button6->Text = L"10 Articles les plus vendus";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(261, 279);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 52);
			this->button7->TabIndex = 7;
			this->button7->Text = L"10 Articles les moins vendus";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm5::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(261, 91);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(168, 52);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Montant total des achats par Client";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm5::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(505, 386);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(168, 52);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Chiffre d\'affaire du mois";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm5::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(800, 386);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 22);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(800, 418);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 22);
			this->textBox2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(701, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Date début";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(701, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Date fin";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Statistiques";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(513, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(275, 32);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Panneau d\'affichage";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(797, 445);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Année-Mois-Jour";
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1159, 515);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->Text = L"Panneaux de gestion | Statistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();
		MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT AVG(PRIX_UNITAIRE*QUANTITE_ARTICLES) AS 'Prix Moyen du panier' FROM tarif, contient, commande", con);
		DataTable^ dt = gcnew DataTable();
		com->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
		con->Close();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT SUM(QUANTITE*PRIX) as 'Valeur du Stock' FROM catalogue", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT SUM((QUANTITE*PRIX)*20/100) as 'Valeur du Stock' FROM catalogue", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}	
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT * FROM `catalogue` WHERE SEUIL_REAP > QUANTITE", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT SUM(QUANTITE_ARTICLES) as 'NB_Article_Vendu', contient.refcata FROM contient GROUP BY REFCATA ORDER BY QUANTITE_ARTICLES DESC LIMIT 10 ", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT SUM(QUANTITE_ARTICLES) as 'NB_Article_Vendu',  contient.refcata FROM contient GROUP BY REFCATA ORDER BY QUANTITE_ARTICLES ASC LIMIT 10 ", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT client.NUMERO, SUM(Total_achat)as 'Total_achat' FROM client,( SELECT client.NUMERO, commande.REFERENCE, SUM(PRIX_UNITAIRE * QUANTITE_ARTICLES) AS 'Total_achat' FROM tarif, commande, client, contient WHERE commande.ID = contient.ID AND tarif.REFCATA = contient.REFCATA AND commande.NUMERO = client.NUMERO GROUP BY commande.REFERENCE) as Total_achat INNER JOIN commande WHERE Total_achat.REFERENCE = commande.REFERENCE AND client.NUMERO = commande.NUMERO GROUP BY client.NUMERO ", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=localhost;Database=projet;Uid=root;Pwd=Toto2001;";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	String^ Date1 = textBox1->Text;
	String^ Date2 = textBox2->Text;
	con->Open();
	MySqlDataAdapter^ com = gcnew MySqlDataAdapter("SELECT SUM(PRIX_UNITAIRE*QUANTITE_ARTICLES) AS 'Chiffre affaire' FROM tarif, contient, commande WHERE '"+ Date1 +"' < commande.DATE_LIVRAISON < '" + Date2 + "' ", con);
	DataTable^ dt = gcnew DataTable();
	com->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	con->Close();
}
};
}
