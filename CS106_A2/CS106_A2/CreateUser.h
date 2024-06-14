#pragma once

namespace CS106A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Summary for CreateUser
	/// </summary>
	public ref class CreateUser : public System::Windows::Forms::Form
	{
	public:
		CreateUser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateUser()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_ph;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::TextBox^ txt_fname;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ b_create;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_uname;
	private: System::Windows::Forms::TextBox^ txtLname;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dtp;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateUser::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dtp = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->b_create = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(337, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 34);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Create New Account";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel1->Controls->Add(this->dtp);
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
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->b_create);
			this->panel1->Location = System::Drawing::Point(253, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(519, 405);
			this->panel1->TabIndex = 24;
			// 
			// dtp
			// 
			this->dtp->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dtp->Location = System::Drawing::Point(40, 170);
			this->dtp->Name = L"dtp";
			this->dtp->Size = System::Drawing::Size(126, 27);
			this->dtp->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(37, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 18);
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
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(269, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 18);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Last name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(37, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 18);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Username";
			// 
			// txt_uname
			// 
			this->txt_uname->Location = System::Drawing::Point(40, 218);
			this->txt_uname->Name = L"txt_uname";
			this->txt_uname->Size = System::Drawing::Size(200, 26);
			this->txt_uname->TabIndex = 5;
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
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(269, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 18);
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
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(37, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 18);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Contact Number";
			// 
			// txt_pass
			// 
			this->txt_pass->Location = System::Drawing::Point(272, 218);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(200, 26);
			this->txt_pass->TabIndex = 6;
			this->txt_pass->UseSystemPasswordChar = true;
			// 
			// txt_fname
			// 
			this->txt_fname->Location = System::Drawing::Point(40, 35);
			this->txt_fname->Name = L"txt_fname";
			this->txt_fname->Size = System::Drawing::Size(200, 26);
			this->txt_fname->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->button1->Location = System::Drawing::Point(268, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CreateUser::button1_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(269, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(37, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 18);
			this->label2->TabIndex = 25;
			this->label2->Text = L"First name";
			// 
			// b_create
			// 
			this->b_create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_create->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_create->FlatAppearance->BorderSize = 0;
			this->b_create->ForeColor = System::Drawing::Color::White;
			this->b_create->Location = System::Drawing::Point(154, 267);
			this->b_create->Name = L"b_create";
			this->b_create->Size = System::Drawing::Size(86, 31);
			this->b_create->TabIndex = 7;
			this->b_create->Text = L"Create";
			this->b_create->UseVisualStyleBackColor = false;
			this->b_create->Click += gcnew System::EventHandler(this, &CreateUser::b_create_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// CreateUser
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(938, 594);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkOrchid;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(60, 190);
			this->Name = L"CreateUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &CreateUser::OnLoad);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void OnLoad(System::Object^ sender, System::EventArgs^ e) {

		}

		#pragma endregion
	/// <summary>
	/// event caller on click button 1 - close form
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	/// <summary>
	/// Event caller on click Create - Create New user
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_create_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!validateField(txt_fname, "First Name")) return;
		if (!validateField(txtLname, "Last Name")) return;
		if (!validateField(txt_ph, "Contact Number")) return;
		if (!validateField(txt_email, "Email Address")) return;
		if (!validateDateofbirth(dtp)) return;
		if (!validateField(txt_uname, "Username")) return;
		if (!validateField(txt_pass, "Password")) return;
		if (!uniqueUserName(this->txt_uname->Text)) return;
		// Fetch the date from the DateTimePicker and format it as a string
		DateTime selectedDate = this->dtp->Value;
		String^ _dobStr = selectedDate.ToString("dd/MM/yyyy"); //NZ date format
		//concate user's details into one string userString
		String^ userString = this->txt_fname->Text + "-" + this->txtLname->Text + "-" + 
							 this->txt_ph->Text + "-" + this->txt_email->Text + "-" + _dobStr + "-" +
							 this->txt_uname->Text + "-" + this->txt_pass->Text;
		StreamWriter^ writer_uDetails = nullptr; //object to write for userDetails.txt
		StreamWriter^ writer_uLogins = nullptr; //object to writer for userLogin.txt

		if (!File::Exists("userDetails.txt")) { //if userDetails.txt does not exist, create one and write userdetails in
			try {
				array<String^>^ userData = gcnew array<String^> {userString};
				File::WriteAllLines("userDetails.txt", userData); //Write all user's details to a text file

				//create user login
				//writer to userLogin.txt
				writer_uLogins = gcnew StreamWriter("userLogin.txt", true);
				writer_uLogins->WriteLine(this->txt_uname->Text + "-" + this->txt_pass->Text + "-" + "0"); //none admin user login

				Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (writer_uLogins != nullptr) {
					writer_uLogins->Close(); //close streamwriter
				}
			}
		}
		else { //write user details in append mode
			try {

				//writer to userDetails.txt
				writer_uDetails = gcnew StreamWriter("userDetails.txt", true); // Append mode
				writer_uDetails->WriteLine(userString);

				//writer to userLogin.txt to create a new user login
				writer_uLogins = gcnew StreamWriter("userLogin.txt", true);
				writer_uLogins->WriteLine(this->txt_uname->Text + "-" + this->txt_pass->Text + "-" + "0"); //none admin user login

				Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (writer_uDetails != nullptr || writer_uLogins != nullptr) { //close streamwriter
					writer_uDetails->Close();
					writer_uLogins->Close();
				}		
			}
		}
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
	/// function to check if new userName is not already exist
	/// return boolean
	/// </summary>
	/// <param name="_uName"></param>
	/// <returns></returns>
	public: bool uniqueUserName(String^ _uName) {
		if (!File::Exists("userLogin.txt")) return true;
		array<String^>^ lines = File::ReadAllLines("userLogin.txt");
		for each (String ^ line in lines){
			array<String^>^ token = line->Split('-');
			if (token[0] == _uName){
				MessageBox::Show("Entered username is already exist. Please enter a new one.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}
		return true;
	}
};
}
