#pragma once
#include "CreateUser.h"
namespace CS106A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ _userName;
	private: System::Windows::Forms::DateTimePicker^ dtp;
	private: System::Windows::Forms::Label^ lblvaxstat;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	public:
		bool admin;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_userName = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtLname;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_uname;
	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_ph;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::TextBox^ txt_fname;
	private: System::Windows::Forms::Button^ b_exit;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ b_save;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ deletebt;
	private: System::Windows::Forms::ListBox^ listBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblvaxstat = (gcnew System::Windows::Forms::Label());
			this->dtp = (gcnew System::Windows::Forms::DateTimePicker());
			this->deletebt = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtLname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_uname = (gcnew System::Windows::Forms::TextBox());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_ph = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->txt_fname = (gcnew System::Windows::Forms::TextBox());
			this->b_exit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->b_save = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->lblvaxstat);
			this->panel1->Controls->Add(this->dtp);
			this->panel1->Controls->Add(this->deletebt);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->txtLname);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->txt_uname);
			this->panel1->Controls->Add(this->txt_email);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txt_ph);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->txt_pass);
			this->panel1->Controls->Add(this->txt_fname);
			this->panel1->Controls->Add(this->b_exit);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->b_save);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(375, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(511, 405);
			this->panel1->TabIndex = 26;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Complete", L"Partial", L"Unvaccinated", L" " });
			this->comboBox1->Location = System::Drawing::Point(272, 168);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 5;
			// 
			// lblvaxstat
			// 
			this->lblvaxstat->AutoSize = true;
			this->lblvaxstat->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvaxstat->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblvaxstat->Location = System::Drawing::Point(269, 144);
			this->lblvaxstat->Name = L"lblvaxstat";
			this->lblvaxstat->Size = System::Drawing::Size(151, 19);
			this->lblvaxstat->TabIndex = 41;
			this->lblvaxstat->Text = L"Vaccination Status";
			// 
			// dtp
			// 
			this->dtp->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp->Location = System::Drawing::Point(40, 165);
			this->dtp->Name = L"dtp";
			this->dtp->Size = System::Drawing::Size(126, 27);
			this->dtp->TabIndex = 4;
			// 
			// deletebt
			// 
			this->deletebt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.Image")));
			this->deletebt->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.InitialImage")));
			this->deletebt->Location = System::Drawing::Point(441, 269);
			this->deletebt->Name = L"deletebt";
			this->deletebt->Size = System::Drawing::Size(31, 31);
			this->deletebt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->deletebt->TabIndex = 40;
			this->deletebt->TabStop = false;
			this->deletebt->Click += gcnew System::EventHandler(this, &MyForm::deletebt_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(37, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 19);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Date of Birth";
			// 
			// txtLname
			// 
			this->txtLname->Location = System::Drawing::Point(272, 35);
			this->txtLname->Name = L"txtLname";
			this->txtLname->Size = System::Drawing::Size(200, 26);
			this->txtLname->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(269, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 19);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Last name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(37, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 19);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Username";
			// 
			// txt_uname
			// 
			this->txt_uname->Enabled = false;
			this->txt_uname->Location = System::Drawing::Point(40, 218);
			this->txt_uname->Name = L"txt_uname";
			this->txt_uname->Size = System::Drawing::Size(200, 26);
			this->txt_uname->TabIndex = 6;
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(272, 97);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(200, 26);
			this->txt_email->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(269, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 19);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Email Address";
			// 
			// txt_ph
			// 
			this->txt_ph->Location = System::Drawing::Point(40, 97);
			this->txt_ph->Name = L"txt_ph";
			this->txt_ph->Size = System::Drawing::Size(200, 26);
			this->txt_ph->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(37, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 19);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Phone Number";
			// 
			// txt_pass
			// 
			this->txt_pass->Location = System::Drawing::Point(272, 218);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(200, 26);
			this->txt_pass->TabIndex = 7;
			// 
			// txt_fname
			// 
			this->txt_fname->Location = System::Drawing::Point(40, 35);
			this->txt_fname->Name = L"txt_fname";
			this->txt_fname->Size = System::Drawing::Size(200, 26);
			this->txt_fname->TabIndex = 0;
			// 
			// b_exit
			// 
			this->b_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_exit->ForeColor = System::Drawing::Color::DarkOrchid;
			this->b_exit->Location = System::Drawing::Point(272, 269);
			this->b_exit->Name = L"b_exit";
			this->b_exit->Size = System::Drawing::Size(86, 31);
			this->b_exit->TabIndex = 9;
			this->b_exit->Text = L"Exit";
			this->b_exit->UseVisualStyleBackColor = false;
			this->b_exit->Click += gcnew System::EventHandler(this, &MyForm::b_exit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(269, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 19);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(37, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 19);
			this->label2->TabIndex = 25;
			this->label2->Text = L"First name";
			// 
			// b_save
			// 
			this->b_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_save->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_save->FlatAppearance->BorderSize = 0;
			this->b_save->ForeColor = System::Drawing::Color::White;
			this->b_save->Location = System::Drawing::Point(40, 269);
			this->b_save->Name = L"b_save";
			this->b_save->Size = System::Drawing::Size(86, 31);
			this->b_save->TabIndex = 8;
			this->b_save->Text = L"Save";
			this->b_save->UseVisualStyleBackColor = false;
			this->b_save->Click += gcnew System::EventHandler(this, &MyForm::b_save_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(280, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 34);
			this->label1->TabIndex = 25;
			this->label1->Text = L"My Details";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(39, 136);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(330, 400);
			this->listBox1->TabIndex = 28;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(938, 594);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::On_load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		/// <summary>
		/// main function call on load for current form
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		void On_load(System::Object^ sender, System::EventArgs^ e) {
			if (this->admin) { //if admin
				loadListBox(); //load list of user to ListBox
			}
			else { //it not admin get rid of list box, delete button, resize form and location
				this->listBox1->Visible = false;
				loadDetails(this->_userName); //load current login user details
				this->panel1->Enabled = true;
				this->deletebt->Visible = false;
				this->comboBox1->Enabled = false; //disable vaccination status combobox
				this->panel1->Location = System::Drawing::Point(112, 131);
				this->Size = System::Drawing::Size(669, 594);
			}	
		}
#pragma endregion
	/// <summary>
	/// Function to load all user and display them in List Box
	/// </summary>
	public: void loadListBox() {
		this->listBox1->Items->Clear();
		//check if file does not exist or it's empty file
		if (!File::Exists("userDetails.txt") || File::ReadAllLines("userDetails.txt")->Length == 0) {
			// Show the message box with Yes and No buttons
			System::Windows::Forms::DialogResult result = MessageBox::Show("Empty User List! Would you like to register new user?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				//create CreateUser form object and display
				CreateUser^ _creatForm = gcnew CreateUser();
				_creatForm->ShowDialog();
				loadListBox(); //load list of user
			}
			else {
				Close(); //close form
			}
		}
		else { //Read all data line, convert to string and load them to ListBox
			array<String^>^ lines = File::ReadAllLines("userDetails.txt");
			for each (String ^ line in lines)
			{
				array<String^>^ token = line->Split('-');
				this->listBox1->Items->Add(token[0] + " " + token[1] + " username: " + token[5]);
			}
		}
		
	}
	/// <summary>
	/// Function to load user details diplay them to appropriate textboxes
	/// </summary>
	/// <param name="username"></param>
	public: void loadDetails(String^ username) {
		array<String^>^ lines = File::ReadAllLines("userDetails.txt");
		for each (String ^ line in lines){
			array<String^>^ token = line->Split('-');
			if (token[5] == username){
				this->txt_fname->Text = token[0];
				this->txtLname->Text = token[1];
				this->txt_ph->Text = token[2];
				this->txt_email->Text = token[3];
				DateTime parsedDate;
				//parse datestring token[4] into datetime object
				DateTime::TryParseExact(token[4], "dd/MM/yyyy", CultureInfo::InvariantCulture, DateTimeStyles::None, parsedDate);
				this->dtp->Value = parsedDate; //assign datetime object to datetime picker value
				this->txt_uname->Text = token[5];
				this->txt_pass->Text = token[6];
			}
		}
		if (!File::Exists("VaxxStatus.txt")) {
			this->admin ? this->comboBox1->Enabled = true : this->comboBox1->Enabled = false;
			return;
		}
		bool userFound = false;
		array<String^>^ vaxLine = File::ReadAllLines("vaxxStatus.txt");
		for each (String ^ line in vaxLine) {
			if (line->Contains(username)) {
				array<String^>^ token = line->Split('-');
				this->comboBox1->SelectedItem = token[1];
				userFound = true;
			}
		}
		if (!userFound) this->comboBox1->SelectedItem = " ";
	}
	/// <summary>
	/// When exit button click
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	/// <summary>
	/// Function on click event to save user details
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_save_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!validateField(txt_fname, "First Name")) return;
		if (!validateField(txtLname, "Last Name")) return;
		if (!validateField(txt_ph, "Contact Number")) return;
		if (!validateField(txt_email, "Email Address")) return;
		if (!validateDateofbirth(dtp)) return;
		if (!validateField(txt_pass, "Password")) return;
		if (this->admin) if (!validComboBoxValue(this->comboBox1)) return;
		
		StreamWriter^ vaxWrite = nullptr; //for vaxx status

		try {
			// Read all lines from the file
			array<String^>^ lines = File::ReadAllLines("userDetails.txt");
			// Fetch the date from the DateTimePicker and format it as a string
			DateTime selectedDate = this->dtp->Value;
			String^ _dobStr = selectedDate.ToString("dd/MM/yyyy"); //NZ date format
			// Get the new data from the TextBox
			String^ newData = this->txt_fname->Text + "-" + this->txtLname->Text + "-" +
				this->txt_ph->Text + "-" + this->txt_email->Text + "-" + _dobStr + "-" +
				this->txt_uname->Text + "-" + this->txt_pass->Text;

			// Modify the lines containing 'user'
			for (int i = 0; i < lines->Length; i++) {
				array<String^>^ token = lines[i]->Split('-');
				if (token[5] == this->txt_uname->Text) {
					lines[i] = newData; // Replace with new data
				}
			}

			// Write the modified lines back to the file
			File::WriteAllLines("userDetails.txt", lines);

			//-----------------------------------------------------------
			newData = ""; //reset new data
			//also modify login file just incase password has been edit
			array<String^>^ __lines = File::ReadAllLines("userLogin.txt");
			for (int i = 0; i < __lines->Length; i++) {
				if (__lines[i]->Contains(this->txt_uname->Text)) {
					array<String^>^ token = __lines[i]->Split('-');
					String^ a = token[0];
					String^ b = this->txt_pass->Text;
					String^ c = token[2];
					newData = a + "-" + b + "-" + c;
					__lines[i] = newData;
				}
			}
			// Write the modified lines back to the file
			File::WriteAllLines("userLogin.txt", __lines);

			//-----------------------------------------------------------
			newData = "";
			if (this->admin) {
				//edit vaxx status from combobox1 value
				if (File::Exists("vaxxStatus.txt") && File::ReadAllLines("vaxxStatus.txt")->Length != 0) {
					bool userFound = false;
					array<String^>^ vaxLine = File::ReadAllLines("vaxxStatus.txt");
					for (int i = 0; i < vaxLine->Length; i++) {
						if (vaxLine[i]->Contains(this->txt_uname->Text)) {
							newData = this->txt_uname->Text + "-" + this->comboBox1->SelectedItem;
							vaxLine[i] = newData;
							userFound = true;
						}
					}
					if (userFound)
						File::WriteAllLines("vaxxStatus.txt", vaxLine);// Write the modified lines back to the file
					else {
						vaxWrite = gcnew StreamWriter("vaxxStatus.txt", true); //Apend mode, when file already exist to add new line of data
						vaxWrite->WriteLine(this->txt_uname->Text + "-" + this->comboBox1->SelectedItem);
					}
				}
				else {
					newData = this->txt_uname->Text + "-" + this->comboBox1->SelectedItem;
					array<String^>^ vaxStatData = gcnew array<String^> {newData};
					File::WriteAllLines("vaxxStatus.txt", vaxStatData); //create vaxxStatus.txt with newData
				}
			}
			


			MessageBox::Show("Lines containing " + this->txt_uname->Text + " have been saved.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (vaxWrite != nullptr)
				vaxWrite->Close();
		}
	}
	/// <summary>
	/// function to validate vaccination status
	/// return boolean
	/// </summary>
	/// <param name="cmbBox"></param>
	/// <returns></returns>
	public: bool validComboBoxValue(ComboBox^ cmbBox) {
		if (this->comboBox1->SelectedItem == nullptr || this->comboBox1->SelectedItem == " ") {
			MessageBox::Show("Vaccination Status is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;
	}
		   /// <summary>
		   /// function to validate user inputs
		   /// return boolean
		   /// </summary>
		   /// <param name="textBox"></param>
		   /// <param name="fieldName"></param>
		   /// <returns></returns>
	public: bool validateField(TextBox^ textBox, String^ fieldName) {
		//check textboxes for empty string
		if (String::IsNullOrWhiteSpace(textBox->Text)) {
			MessageBox::Show(fieldName + " is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox->Focus();
			return false;
		}

		//check first name & last name for letters only
		if (textBox->Name == this->txtLname->Name || textBox->Name == this->txt_fname->Name) {
			String^ letter_pattern = "^[a-zA-Z]+$";
			if (!Regex::IsMatch(textBox->Text, letter_pattern)) {
				MessageBox::Show(fieldName + " must contain only letters.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox->Focus();
				return false;
			}
		}

		//check phone number for the right format
		if (textBox->Name == this->txt_ph->Name) {
			String^ number_pattern = "^\\d{7,11}$";
			if (!Regex::IsMatch(textBox->Text, number_pattern)) {
				MessageBox::Show("Contact Number must be between 7, 11 digits.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox->Focus();
				return false;
			}
		}

		//check email address
		if (textBox->Name == this->txt_email->Name) {
			String^ emailPattern = "^\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*$";
			if (!Regex::IsMatch(textBox->Text, emailPattern)) {
				MessageBox::Show("Invalid" + fieldName + ".", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox->Focus();
				return false;
			}
			return true;
		}

		//validate password
		if (textBox->Name == this->txt_pass->Name) {
			String^ passPattern = "^[^-]+$"; //not allow "-"
			if (!Regex::IsMatch(textBox->Text, passPattern)) {
				MessageBox::Show("Password cannot contain the '-' character.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox->Focus();
				return false;
			}
		}
	}

		  /// <summary>
		  /// function to validate date time picker - date of birth
		  /// return boolean
		  /// </summary>
		  /// <param name="datePick"></param>
		  /// <returns></returns>
	public: bool validateDateofbirth(DateTimePicker^ datePick) {
		DateTime today = DateTime::Now;
		TimeSpan age = today - datePick->Value;
		int years = age.Days / 365;

		if (years < 10 || years > 100) {
			MessageBox::Show("Age must be between 10 and 100 years.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;
	}
	/// <summary>
	/// on click event to delete selected user
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void deletebt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->SelectedItem == nullptr) return;
		// Show warning the message box
		System::Windows::Forms::DialogResult result = MessageBox::Show("Warning! This action is permanent! Do you want to continue?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			try {
				// Read all lines from the file
				array<String^>^ lines = File::ReadAllLines("userDetails.txt");
				// de-select lines that contain userName
				List<String^>^ selectUser = gcnew List<String^>();
				for each (String ^ line in lines) {
					array<String^>^ token = line->Split('-');
					if (token[5] != this->txt_uname->Text) {
						selectUser->Add(line);
					}
				}

				//delete user login associated with deleted user
				array<String^>^ _lines = File::ReadAllLines("userLogin.txt");
				// de-select lines that contain userName
				 List<String^>^ _selectUser = gcnew List<String^>();
				for each (String ^ line in _lines) {
					if (!line->Contains(this->txt_uname->Text)) {
						_selectUser->Add(line);
					}
				}

				//delete all test result associated with deleted user
				if (File::Exists("testResult.txt")) {
				// Read all lines from the file
					array<String^>^ __lines = File::ReadAllLines("testResult.txt");
					// de-select lines that contain testResultStr
					List<String^>^ __selectUser = gcnew List<String^>();
					for each (String ^ line in __lines) {
						if (!line->Contains(this->txt_uname->Text)) {
							__selectUser->Add(line);
						}
					}
					// Write all lines back to the testResult.txt file
					File::WriteAllLines("testResult.txt", __selectUser->ToArray());
				}

				//delete certificate associated with user
				String^ imageFilePath = Application::StartupPath + "\\Images\\VaxxCertificate.txt";
				if (File::Exists(imageFilePath)) {	
					array<String^>^ ___lines = File::ReadAllLines(imageFilePath);
					List<String^>^ updatedLines = gcnew List<String^>();
					bool userFound = false;

					for each (String ^ line in ___lines) { //loop through and find user's certificate
						if (line->StartsWith(this->txt_uname->Text + "^")) { //found
							array<String^>^ parts = line->Split('^'); //split string
							if (parts->Length > 1) {
								String^ imagePath = parts[1];//fetch file's path
								if (File::Exists(imagePath)) {
									File::Delete(imagePath);//delete image
								}
							}
							userFound = true;
						}
						else updatedLines->Add(line);
					}

					if (userFound) File::WriteAllLines(imageFilePath, updatedLines->ToArray()); //update VaxxCertificate.txt file
				}

				if (File::Exists("vaxxStatus.txt")) {
					array<String^>^ vaxLine = File::ReadAllLines("vaxxStatus.txt");
					List<String^>^ updateVaxLine = gcnew List<String^>();
					for each(String^ line in vaxLine) {
						if (!line->Contains(this->txt_uname->Text)) {
							updateVaxLine->Add(line);
						}
					}
					// Write the modified lines back to the file
					File::WriteAllLines("vaxxStatus.txt", updateVaxLine->ToArray());
				}


				// Write all lines back to the userDetails.txt file
				File::WriteAllLines("userDetails.txt", selectUser->ToArray());
				// Write all lines back to the userLogin.txt file
				File::WriteAllLines("userLogin.txt", _selectUser->ToArray());
				
				MessageBox::Show("Selected user and all its association has been deleted.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//loadListBox(); //reload list box
		//enableFields(false);
		Close();
	}
	/// <summary>
	/// list box selected index even caller function
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if user is selected
		if (listBox1->SelectedItem != nullptr){ //a user has been selected from list box
			//Split & Fetch the selected user details
			array<String^>^ token = listBox1->SelectedItem->ToString()->Split(' '); 
			loadDetails(token[3]); //fetch userName to loadDetails()
			//enableFields(true); //enable all fields
			this->panel1->Enabled = true;
		}
		else{
			//enableFields(false); //disable all inputs field
			this->panel1->Enabled = false;
			MessageBox::Show("No item selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	/// <summary>
	/// function to enable or disbale fields
	/// </summary>
	/// <param name="enable"></param>
	public: void enableFields(bool enable) {
		this->txtLname->Enabled = enable;
		this->txt_fname->Enabled = enable;
		this->txt_ph->Enabled = enable;
		this->txt_email->Enabled = enable;
		this->txt_pass->Enabled = enable;
		this->txt_uname->Enabled = enable;
		this->dtp->Enabled = enable;
		this->b_save->Enabled = enable;
		this->deletebt->Enabled = enable;
	}
};
}
