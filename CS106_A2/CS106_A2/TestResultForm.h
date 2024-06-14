#pragma once
#include "CreateTestResult.h"
#include "CreateUser.h"
#include "MyHuh.h"
namespace CS106A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for TestResultForm
	/// </summary>
	public ref class TestResultForm : public System::Windows::Forms::Form
	{
	public:
		String^ _userName;
		String^ _testResultStr;//to hold testresult string for deletion
	private: System::Windows::Forms::PictureBox^ deletebt;
	public:
		bool _admin;
		TestResultForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_userName = "";
			_testResultStr = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TestResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ b_cancel;
	private: System::Windows::Forms::Button^ b_NewR;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TestResultForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->deletebt = (gcnew System::Windows::Forms::PictureBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->b_cancel = (gcnew System::Windows::Forms::Button());
			this->b_NewR = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(39, 136);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(330, 400);
			this->listBox1->TabIndex = 33;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TestResultForm::listBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel1->Controls->Add(this->deletebt);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->b_cancel);
			this->panel1->Controls->Add(this->b_NewR);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(206, 136);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 400);
			this->panel1->TabIndex = 34;
			// 
			// deletebt
			// 
			this->deletebt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.Image")));
			this->deletebt->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.InitialImage")));
			this->deletebt->Location = System::Drawing::Point(338, 285);
			this->deletebt->Name = L"deletebt";
			this->deletebt->Size = System::Drawing::Size(31, 31);
			this->deletebt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->deletebt->TabIndex = 41;
			this->deletebt->TabStop = false;
			this->deletebt->Click += gcnew System::EventHandler(this, &TestResultForm::deletebt_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(39, 33);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(330, 220);
			this->listBox2->TabIndex = 34;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &TestResultForm::listBox2_SelectedIndexChanged);
			// 
			// b_cancel
			// 
			this->b_cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->ForeColor = System::Drawing::Color::DarkOrchid;
			this->b_cancel->Location = System::Drawing::Point(90, 285);
			this->b_cancel->Name = L"b_cancel";
			this->b_cancel->Size = System::Drawing::Size(86, 31);
			this->b_cancel->TabIndex = 29;
			this->b_cancel->Text = L"Cancel";
			this->b_cancel->UseVisualStyleBackColor = false;
			this->b_cancel->Click += gcnew System::EventHandler(this, &TestResultForm::b_cancel_Click);
			// 
			// b_NewR
			// 
			this->b_NewR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_NewR->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_NewR->FlatAppearance->BorderSize = 0;
			this->b_NewR->ForeColor = System::Drawing::Color::White;
			this->b_NewR->Location = System::Drawing::Point(182, 285);
			this->b_NewR->Name = L"b_NewR";
			this->b_NewR->Size = System::Drawing::Size(112, 31);
			this->b_NewR->TabIndex = 28;
			this->b_NewR->Text = L"New Result";
			this->b_NewR->UseVisualStyleBackColor = false;
			this->b_NewR->Click += gcnew System::EventHandler(this, &TestResultForm::b_NewR_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(348, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 34);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Test Result";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(287, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(296, 34);
			this->label10->TabIndex = 35;
			this->label10->Text = L"My Covid-19 Record";
			// 
			// TestResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(825, 624);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TestResultForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TestResultForm";
			this->Load += gcnew System::EventHandler(this, &TestResultForm::On_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		/// <summary>
		/// main function call on load
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		void On_load(System::Object^ sender, System::EventArgs^ e) {
			if (this->_admin) { //admin section
				this->panel1->Location = System::Drawing::Point(375, 131);;
				loadListBox();
			}
			else { //none admin section
				this->deletebt->Visible = false;
				this->listBox1->Visible = false;
				this->panel1->Enabled = true;
				loadResultList(this->_userName);
			}
		}
#pragma endregion
	/// <summary>
	/// function to load user detail to list box
	/// </summary>
	public: void loadListBox() {
		this->listBox1->Items->Clear();
		if (!File::Exists("userDetails.txt") || File::ReadAllLines("userDetails.txt")->Length == 0) {
			// Show the message box with Yes and No buttons
			System::Windows::Forms::DialogResult result = MessageBox::Show("Empty User List! Would you like to register new user?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				//create CreateUser form object and display
				CreateUser^ _creatForm = gcnew CreateUser();
				_creatForm->ShowDialog();
				loadListBox();
			}
			else {
				Close();
			}
		}
		else {
			array<String^>^ lines = File::ReadAllLines("userDetails.txt");
			for each (String ^ line in lines)
			{
				array<String^>^ token = line->Split('-');
				this->listBox1->Items->Add(token[0] + " " + token[1] + " username: " + token[5]);
			}
		}
	}
	/// <summary>
	/// Function to load list of result to list box that associated with username
	/// </summary>
	/// <param name="_userName"></param>
	public: void loadResultList(String^ _userName) {
		this->listBox2->Items->Clear();
		if (!File::Exists("testResult.txt")) {
			// Show the message box with Yes and No buttons
			System::Windows::Forms::DialogResult result = MessageBox::Show("Empty Result List! Would you like to add new?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				//create testForm obj and display
				CreateTestResult^ createTstForm = gcnew CreateTestResult();
				array<String^>^ token = this->listBox1->SelectedItem->ToString()->Split(' ');
				createTstForm->_userName = token[3];
				createTstForm->ShowDialog();
				loadListBox(); //load list of test result
			}
			else {
				Close(); //close form
			}
		}
		else {
			array<String^>^ lines = File::ReadAllLines("testResult.txt");
			if (lines->Length == 0) {
				// Show the message box with Yes and No buttons
				System::Windows::Forms::DialogResult result = MessageBox::Show("Empty Result List! Would you like to add new?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				if (result == System::Windows::Forms::DialogResult::Yes) {
					//create testForm obj and display
					CreateTestResult^ createTstForm = gcnew CreateTestResult();
					createTstForm->ShowDialog();
					loadListBox(); //load list of test result
				}
				else {
					Close(); //close form
				}
			}
			else {
				
				for each (String ^ line in lines){
					array<String^>^ token = line->Split('-');
					if (token[2] == _userName) {
						String^ test = token[1] == "P" ? "Test Positive" : "Test Negative"; //check if test is positive or negative
						this->listBox2->Items->Add(token[0] + "-" + test);
					}
				}
			}
		}
	}
	/// <summary>
	/// event caller on click - list box1 selectedIndex
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if an item is selected
		if (listBox1->SelectedItem != nullptr){
			// Fetch the selected item
			array<String^>^ token = this->listBox1->SelectedItem->ToString()->Split(' ');
			loadResultList(token[3]);
			this->panel1->Enabled = true; //enable panel contains all inputs field
			//MessageBox::Show("Selected Name: " + token[3], "Selected Item", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->_userName = token[3];
			
		}
		else{
			this->panel1->Enabled = false; //disable panel contain all inputs field
			MessageBox::Show("No item selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	/// <summary>
	/// Event caller New Result click
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_NewR_Click(System::Object^ sender, System::EventArgs^ e) {
		//create Test result form and display
		CreateTestResult^ ctR_frm = gcnew CreateTestResult();
		ctR_frm->_userName = this->_userName; //pass userName
		ctR_frm->ShowDialog();
		loadResultList(this->_userName); //load result list

	}
	/// <summary>
	/// Event caller on click to close form
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void deletebt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox2->SelectedItem == nullptr) {
			MyHuh^ huhfrm = gcnew MyHuh();
			huhfrm->ShowDialog();
			return;
		}
		// Show warning the message box
		System::Windows::Forms::DialogResult result = MessageBox::Show("Warning! This action is permanent! Do you want to continue?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			try {
				// Read all lines from the file
				array<String^>^ lines = File::ReadAllLines("testResult.txt");
				// de-select lines that contain testResultStr
				List<String^>^ selectUser = gcnew List<String^>();
				for each (String ^ line in lines) {
					if (!line->Contains(_testResultStr)) {
						selectUser->Add(line);
					}
				}
				// Write all lines back to the testResult.txt file
				File::WriteAllLines("testResult.txt", selectUser->ToArray());
				MessageBox::Show("Selected test result has been deleted.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		loadResultList(this->_userName);
	}

	/// <summary>
	/// event caller on click - list box selectedIndex
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox2->SelectedItem != nullptr) {
			try {
				array<String^>^ token = this->listBox2->SelectedItem->ToString()->Split('-');
				token[1] == "Test Positive" ? _testResultStr = token[0] + "-P-" + this->_userName : _testResultStr = token[0] + "-N-" + this->_userName;
				//assign test result line to string obj
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}
