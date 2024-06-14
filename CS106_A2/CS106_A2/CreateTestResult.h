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
	/// Summary for CreateTestResult
	/// </summary>
	public ref class CreateTestResult : public System::Windows::Forms::Form
	{
	public:
		String^ _userName;
		CreateTestResult(void)
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
		~CreateTestResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtp_1;
	protected:

	private: System::Windows::Forms::Button^ b_cancel;
	private: System::Windows::Forms::Button^ b_upload;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::CheckBox^ chk_N;
	private: System::Windows::Forms::CheckBox^ chk_P;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateTestResult::typeid));
			this->dtp_1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->b_cancel = (gcnew System::Windows::Forms::Button());
			this->b_upload = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chk_N = (gcnew System::Windows::Forms::CheckBox());
			this->chk_P = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dtp_1
			// 
			this->dtp_1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp_1->Location = System::Drawing::Point(96, 65);
			this->dtp_1->Name = L"dtp_1";
			this->dtp_1->Size = System::Drawing::Size(123, 26);
			this->dtp_1->TabIndex = 0;
			// 
			// b_cancel
			// 
			this->b_cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->ForeColor = System::Drawing::Color::DarkOrchid;
			this->b_cancel->Location = System::Drawing::Point(86, 250);
			this->b_cancel->Name = L"b_cancel";
			this->b_cancel->Size = System::Drawing::Size(86, 31);
			this->b_cancel->TabIndex = 31;
			this->b_cancel->Text = L"Cancel";
			this->b_cancel->UseVisualStyleBackColor = false;
			this->b_cancel->Click += gcnew System::EventHandler(this, &CreateTestResult::b_cancel_Click);
			// 
			// b_upload
			// 
			this->b_upload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_upload->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_upload->FlatAppearance->BorderSize = 0;
			this->b_upload->ForeColor = System::Drawing::Color::White;
			this->b_upload->Location = System::Drawing::Point(178, 250);
			this->b_upload->Name = L"b_upload";
			this->b_upload->Size = System::Drawing::Size(108, 31);
			this->b_upload->TabIndex = 30;
			this->b_upload->Text = L"Upload";
			this->b_upload->UseVisualStyleBackColor = false;
			this->b_upload->Click += gcnew System::EventHandler(this, &CreateTestResult::b_upload_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel1->Controls->Add(this->chk_N);
			this->panel1->Controls->Add(this->chk_P);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->b_cancel);
			this->panel1->Controls->Add(this->b_upload);
			this->panel1->Controls->Add(this->dtp_1);
			this->panel1->Location = System::Drawing::Point(137, 141);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(440, 319);
			this->panel1->TabIndex = 32;
			// 
			// chk_N
			// 
			this->chk_N->AutoSize = true;
			this->chk_N->Location = System::Drawing::Point(231, 102);
			this->chk_N->Name = L"chk_N";
			this->chk_N->Size = System::Drawing::Size(89, 22);
			this->chk_N->TabIndex = 33;
			this->chk_N->Text = L"Negative";
			this->chk_N->UseVisualStyleBackColor = true;
			this->chk_N->CheckedChanged += gcnew System::EventHandler(this, &CreateTestResult::chk_N_CheckedChanged);
			// 
			// chk_P
			// 
			this->chk_P->AutoSize = true;
			this->chk_P->Checked = true;
			this->chk_P->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chk_P->Location = System::Drawing::Point(231, 65);
			this->chk_P->Name = L"chk_P";
			this->chk_P->Size = System::Drawing::Size(83, 22);
			this->chk_P->TabIndex = 32;
			this->chk_P->Text = L"Positive";
			this->chk_P->UseVisualStyleBackColor = true;
			this->chk_P->CheckedChanged += gcnew System::EventHandler(this, &CreateTestResult::chk_P_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(91, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Select Tested Date";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(309, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 34);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Test Result";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(248, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(296, 34);
			this->label10->TabIndex = 37;
			this->label10->Text = L"My Covid-19 Record";
			// 
			// CreateTestResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(640, 605);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CreateTestResult";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateTestResult";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void b_upload_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!validatedtp()) return;
		// Fetch the date from the DateTimePicker and format it as a string
		DateTime selectedDate = this->dtp_1->Value;
		String^ date = selectedDate.ToString("dd/MM/yyyy"); //NZ date format

		String^ test = this->chk_P->Checked ? "P" : "N";

		String^ testResult = date + "-" + test + "-" + this->_userName;
		StreamWriter^ writer_uDetails = nullptr; //object to write for userDetails.txt

		if (!File::Exists("testResult.txt")) { //if userDetails.txt does not exist, create one and write
			try {
				//write to userDetails.txt
				array<String^>^ testData = gcnew array<String^> {testResult};
				File::WriteAllLines("testResult.txt", testData);

				Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {}
		}
		else { //write user details in append mode
			try {

				//write to userDetails.txt
				writer_uDetails = gcnew StreamWriter("testResult.txt", true); // Append mode
				writer_uDetails->WriteLine(testResult);

				Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (writer_uDetails != nullptr) {
					writer_uDetails->Close();
				}
			}
		}
	}
	private: System::Void chk_P_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->chk_P->Checked ? this->chk_N->Checked = false : this->chk_N->Checked = true;
	}
	private: System::Void b_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void chk_N_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->chk_N->Checked ? this->chk_P->Checked = false : this->chk_P->Checked = true;
	}
	/// <summary>
	/// function to validate date time picker value
	/// </summary>
	/// <param name="datePick"></param>
	/// <returns></returns>
	public: bool validatedtp() {
		DateTime selectedDate = this->dtp_1->Value.Date;
		DateTime today = DateTime::Now.Date;

		if (selectedDate > today) {
			MessageBox::Show("Invalid Date Time Picker's Value.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;
	}
};
}
