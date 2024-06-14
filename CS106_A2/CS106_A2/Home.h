#pragma once
#include "Sign_in.h"
#include "MyForm.h"
#include "TestResultForm.h"
#include "VaccineCert.h"
#include "MyQRCode.h"

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
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		ref struct User {
			String^ _firstName;
			String^ _lastName;
			String^ _phnNumber;
			String^ _email;
			String^ _dob;
			String^ _userName;
			String^ _password;
		};
		User^ _userDetail;
		String^ userName;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	public:
		bool _admin;
		Home(void)
		{
			InitializeComponent();
			_userDetail = gcnew User();
			userName = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ b_details;
	private: System::Windows::Forms::Button^ b_testR;
	private: System::Windows::Forms::Button^ b_vaccine;
	private: System::Windows::Forms::Button^ b_qrcode;




	private: System::Windows::Forms::Label^ lbl_username;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_details = (gcnew System::Windows::Forms::Button());
			this->b_testR = (gcnew System::Windows::Forms::Button());
			this->b_vaccine = (gcnew System::Windows::Forms::Button());
			this->b_qrcode = (gcnew System::Windows::Forms::Button());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(317, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(296, 34);
			this->label10->TabIndex = 32;
			this->label10->Text = L"My Covid-19 Record";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(317, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 34);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Welcome";
			// 
			// b_details
			// 
			this->b_details->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->b_details->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->b_details->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_details->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_details->ForeColor = System::Drawing::Color::White;
			this->b_details->Location = System::Drawing::Point(68, 200);
			this->b_details->Name = L"b_details";
			this->b_details->Size = System::Drawing::Size(185, 172);
			this->b_details->TabIndex = 34;
			this->b_details->Text = L"My Details";
			this->b_details->UseVisualStyleBackColor = false;
			this->b_details->Click += gcnew System::EventHandler(this, &Home::b_details_Click);
			// 
			// b_testR
			// 
			this->b_testR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->b_testR->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->b_testR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_testR->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_testR->ForeColor = System::Drawing::Color::White;
			this->b_testR->Location = System::Drawing::Point(282, 200);
			this->b_testR->Name = L"b_testR";
			this->b_testR->Size = System::Drawing::Size(185, 172);
			this->b_testR->TabIndex = 35;
			this->b_testR->Text = L"Covid-19 Test Result";
			this->b_testR->UseVisualStyleBackColor = false;
			this->b_testR->Click += gcnew System::EventHandler(this, &Home::b_testR_Click);
			// 
			// b_vaccine
			// 
			this->b_vaccine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->b_vaccine->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->b_vaccine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_vaccine->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_vaccine->ForeColor = System::Drawing::Color::White;
			this->b_vaccine->Location = System::Drawing::Point(489, 200);
			this->b_vaccine->Name = L"b_vaccine";
			this->b_vaccine->Size = System::Drawing::Size(185, 172);
			this->b_vaccine->TabIndex = 36;
			this->b_vaccine->Text = L"Vaccine Certificate";
			this->b_vaccine->UseVisualStyleBackColor = false;
			this->b_vaccine->Click += gcnew System::EventHandler(this, &Home::b_vaccine_Click);
			// 
			// b_qrcode
			// 
			this->b_qrcode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->b_qrcode->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->b_qrcode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_qrcode->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_qrcode->ForeColor = System::Drawing::Color::White;
			this->b_qrcode->Location = System::Drawing::Point(699, 200);
			this->b_qrcode->Name = L"b_qrcode";
			this->b_qrcode->Size = System::Drawing::Size(185, 172);
			this->b_qrcode->TabIndex = 37;
			this->b_qrcode->Text = L"QR Code";
			this->b_qrcode->UseVisualStyleBackColor = false;
			this->b_qrcode->Click += gcnew System::EventHandler(this, &Home::b_qrcode_Click);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_username->Location = System::Drawing::Point(464, 89);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(97, 34);
			this->lbl_username->TabIndex = 38;
			this->lbl_username->Text = L"User\?";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(847, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
			// 
			// Home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(938, 594);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->b_qrcode);
			this->Controls->Add(this->b_vaccine);
			this->Controls->Add(this->b_testR);
			this->Controls->Add(this->b_details);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_OnLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		/// <summary>
		/// main loading function 
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		void Home_OnLoad(System::Object^ sender, System::EventArgs^ e) {
			//create and show Sign_in form when Home form load
			Sign_in^ s_form = gcnew Sign_in();
			s_form->ShowDialog();

			this->_admin = s_form->_admin; //set admin credential

			if (this->_admin) {//admin section
				this->lbl_username->Text = s_form->getUserName();
				this->userName = this->lbl_username->Text;
			}
			else { //none-admin section
				this->userName = s_form->getUserName();
				loadUserDetails();
				this->lbl_username->Text = _userDetail->_firstName + " " + _userDetail->_lastName;
			}
		}
#pragma endregion
	/// <summary>
	/// Function call when user click on My User Details
	/// This is an on clik event caller
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_details_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false; //set home form visibility to false while other form runnin

		//create My details form object and display
		MyForm^ _myfm = gcnew MyForm(); 
		_myfm->_userName = this->userName; //pass user name
		_myfm->admin = this->_admin; //pass admin credential
		_myfm->ShowDialog();

		//turn visibility back on once 
		this->Visible = true;
		if (this->_admin) { //set label to Admin
			this->lbl_username->Text = this->userName;
		}
		else { //label to none-admin user
			loadUserDetails();
			this->lbl_username->Text = _userDetail->_firstName + " " + _userDetail->_lastName;
		}
		
	}

	/// <summary>
	/// A public function to load user details
	/// </summary>
	public: void loadUserDetails() {
		//check if UserDetails.txt file already exist
		if (File::Exists("userDetails.txt")) {
			array<String^>^ lines = File::ReadAllLines("userDetails.txt"); //Read all data lines

			//loop through each data lines
			for each (String ^ line in lines){
				if (line->Contains(this->userName)){ //check for one contain userName
					array<String^>^ token = line->Split('-');
					_userDetail->_firstName = token[0]; //first name
					_userDetail->_lastName = token[1]; //last name
					_userDetail->_phnNumber = token[2]; //contact number
					_userDetail->_email = token[3]; //email address
					_userDetail->_dob = token[4]; //date of birth
					_userDetail->_userName = token[5]; //username
					_userDetail->_password = token[6]; //password
				}
			}
		}
	}

	/// <summary>
	/// On click event caller for PictureBox to close Application
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		//create and show Sign_in form when Home form on load
		Close(); //Close application
	}
	
	/// <summary>
	/// On click event caller for Covid-19 Test Result Form
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_testR_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;

		//Create and show Test Result form
		TestResultForm^ tResultFrm = gcnew TestResultForm();
		tResultFrm->_userName = this->userName;
		tResultFrm->_admin = this->_admin;
		tResultFrm->ShowDialog();

		this->Visible = true;
	}

	/// <summary>
	/// On click event caller for Vaccine Certificate Form
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_vaccine_Click(System::Object^ sender, System::EventArgs^ e) {
		VaccineCert^ vaxxFrm = gcnew VaccineCert();
		vaxxFrm->_admin = this->_admin;
		vaxxFrm->_userName = this->userName;
		this->Visible = false; //make the home form disappear
		vaxxFrm->ShowDialog();
		this->Visible = true; //make the home form visible
	}
	private: System::Void b_qrcode_Click(System::Object^ sender, System::EventArgs^ e) {
		MyQRCode^ qrCodefrm = gcnew MyQRCode();
		qrCodefrm->ShowDialog();
	}
};
}
