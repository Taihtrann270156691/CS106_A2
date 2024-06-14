#pragma once
#include "CreateUser.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>


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
	/// Summary for Sign_in
	/// </summary>
	public ref class Sign_in : public System::Windows::Forms::Form
	{
	public:
		bool _admin;
		Sign_in(void)
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
		~Sign_in()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txt_pass;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ b_login;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ txt_uname;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sign_in::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->b_login = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->txt_uname = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->txt_pass);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->b_login);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->txt_uname);
			this->panel2->Location = System::Drawing::Point(44, 119);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(468, 296);
			this->panel2->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(22, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"New User\? Sign up here.";
			this->label4->Click += gcnew System::EventHandler(this, &Sign_in::label4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(23, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 18);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Username";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->button2->Location = System::Drawing::Point(140, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Sign_in::button2_Click);
			// 
			// txt_pass
			// 
			this->txt_pass->Location = System::Drawing::Point(26, 91);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(200, 26);
			this->txt_pass->TabIndex = 1;
			this->txt_pass->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Location = System::Drawing::Point(160, 134);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(194, 22);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Terms and Conditions";
			// 
			// b_login
			// 
			this->b_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_login->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_login->FlatAppearance->BorderSize = 0;
			this->b_login->ForeColor = System::Drawing::Color::White;
			this->b_login->Location = System::Drawing::Point(26, 180);
			this->b_login->Name = L"b_login";
			this->b_login->Size = System::Drawing::Size(86, 31);
			this->b_login->TabIndex = 2;
			this->b_login->Text = L"Sign in";
			this->b_login->UseVisualStyleBackColor = false;
			this->b_login->Click += gcnew System::EventHandler(this, &Sign_in::b_login_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(23, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 18);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Password";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(26, 134);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(146, 26);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"I agree to the ";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Sign_in::checkBox1_CheckedChanged);
			// 
			// txt_uname
			// 
			this->txt_uname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_uname->Location = System::Drawing::Point(26, 38);
			this->txt_uname->Name = L"txt_uname";
			this->txt_uname->Size = System::Drawing::Size(200, 26);
			this->txt_uname->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(286, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 34);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// Sign_in
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(566, 457);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label10);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Sign_in";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign_in";
			this->Load += gcnew System::EventHandler(this, &Sign_in::On_load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void On_load(System::Object^ sender, System::EventArgs^ e) {
			this->txt_uname->Focus();
		}

		#pragma endregion

		/// <summary>
		/// event caller when check button click - Term and condition
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		/// <returns></returns>
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//Enable login upon checked box
		checkBox1->Checked ? b_login->Enabled = true : b_login->Enabled = false;
	}
		   /// <summary>
		   /// Event caller when exit button click - exit application
		   /// </summary>
		   /// <param name="sender"></param>
		   /// <param name="e"></param>
		   /// <returns></returns>
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); //Exit Application
	}
		   /// <summary>
		   /// Even caller when label click - New User? Sign up here
		   /// </summary>
		   /// <param name="sender"></param>
		   /// <param name="e"></param>
		   /// <returns></returns>
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateUser^ c_user = gcnew CreateUser();
		c_user->ShowDialog();
	}
		   /// <summary>
		   /// Even caller when login button click
		   /// </summary>
		   /// <param name="sender"></param>
		   /// <param name="e"></param>
		   /// <returns></returns>
	private: System::Void b_login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!validateField(this->txt_uname, "Username")) return;
		if (!validateField(this->txt_pass, "Password")) return;
		array<String^>^ credential = File::ReadAllLines("userLogin.txt");
		bool login = false;
		for each (String ^ it in credential) {
			if (it->Contains(txt_uname->Text) && it->Contains(txt_pass->Text)) {
				array<String^>^ token = it->ToString()->Split('-');
				token[2] == "1" ? this->_admin = true : this->_admin = false; //set admin credential
				login = true;
				Close(); //close from
				//proceed to Home Form
				return;
			}
		}
		if (!login) //login fail show error messages
			MessageBox::Show("Invalid username or password, please try again.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		   /// <summary>
		   /// function that return userName
		   /// </summary>
		   /// <returns></returns>
	public: String^ getUserName() {
		return txt_uname->Text;
	}
		  /// <summary>
		  /// function to validate username and password fields
		  /// </summary>
		  /// <param name="textBox"></param>
		  /// <param name="fieldName"></param>
		  /// <returns></returns>
	public: bool validateField(TextBox^ textBox, String^ fieldName) {
		//check textboxes for empty string
		if (String::IsNullOrWhiteSpace(textBox->Text)) {
			MessageBox::Show(fieldName + " is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	}
	};
}