#pragma once
#include "CreateUser.h"
#include "MyHuh.h"
namespace CS106A2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for VaccineCert
	/// </summary>
	public ref class VaccineCert : public System::Windows::Forms::Form
	{
	public:
		

	private: System::Windows::Forms::PictureBox^ deletebt;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public:
		String^ _userName;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		String^ filePath;
		bool _admin;
		VaccineCert(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			_userName = "";
			filePath = "";
			openFileDialog1->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp"; //shown only following image file
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VaccineCert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ b_cancel;
	private: System::Windows::Forms::Button^ b_upload;
	private: System::Windows::Forms::Button^ b_browse;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VaccineCert::typeid));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->deletebt = (gcnew System::Windows::Forms::PictureBox());
			this->b_browse = (gcnew System::Windows::Forms::Button());
			this->b_cancel = (gcnew System::Windows::Forms::Button());
			this->b_upload = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(283, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(326, 34);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Vaccination Certificate";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->deletebt);
			this->panel1->Controls->Add(this->b_browse);
			this->panel1->Controls->Add(this->b_cancel);
			this->panel1->Controls->Add(this->b_upload);
			this->panel1->Location = System::Drawing::Point(375, 125);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 341);
			this->panel1->TabIndex = 38;
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Location = System::Drawing::Point(71, 40);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(227, 95);
			this->textBox1->TabIndex = 44;
			// 
			// deletebt
			// 
			this->deletebt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.Image")));
			this->deletebt->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletebt.InitialImage")));
			this->deletebt->Location = System::Drawing::Point(168, 285);
			this->deletebt->Name = L"deletebt";
			this->deletebt->Size = System::Drawing::Size(31, 31);
			this->deletebt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->deletebt->TabIndex = 42;
			this->deletebt->TabStop = false;
			this->deletebt->Click += gcnew System::EventHandler(this, &VaccineCert::deletebt_Click);
			// 
			// b_browse
			// 
			this->b_browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_browse->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_browse->FlatAppearance->BorderSize = 0;
			this->b_browse->ForeColor = System::Drawing::Color::White;
			this->b_browse->Location = System::Drawing::Point(145, 183);
			this->b_browse->Name = L"b_browse";
			this->b_browse->Size = System::Drawing::Size(86, 31);
			this->b_browse->TabIndex = 41;
			this->b_browse->Text = L"Browse";
			this->b_browse->UseVisualStyleBackColor = false;
			this->b_browse->Click += gcnew System::EventHandler(this, &VaccineCert::b_browse_Click);
			// 
			// b_cancel
			// 
			this->b_cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_cancel->ForeColor = System::Drawing::Color::DarkOrchid;
			this->b_cancel->Location = System::Drawing::Point(71, 240);
			this->b_cancel->Name = L"b_cancel";
			this->b_cancel->Size = System::Drawing::Size(86, 31);
			this->b_cancel->TabIndex = 27;
			this->b_cancel->Text = L"Cancel";
			this->b_cancel->UseVisualStyleBackColor = false;
			this->b_cancel->Click += gcnew System::EventHandler(this, &VaccineCert::b_cancel_Click);
			// 
			// b_upload
			// 
			this->b_upload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_upload->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->b_upload->FlatAppearance->BorderSize = 0;
			this->b_upload->ForeColor = System::Drawing::Color::White;
			this->b_upload->Location = System::Drawing::Point(212, 240);
			this->b_upload->Name = L"b_upload";
			this->b_upload->Size = System::Drawing::Size(86, 31);
			this->b_upload->TabIndex = 24;
			this->b_upload->Text = L"Upload";
			this->b_upload->UseVisualStyleBackColor = false;
			this->b_upload->Click += gcnew System::EventHandler(this, &VaccineCert::b_upload_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(39, 125);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(330, 346);
			this->listBox1->TabIndex = 40;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &VaccineCert::listBox1_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(766, 125);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(315, 341);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 75);
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			// 
			// VaccineCert
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->ClientSize = System::Drawing::Size(1135, 495);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label10);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"VaccineCert";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VaccineCert";
			this->Load += gcnew System::EventHandler(this, &VaccineCert::main_load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deletebt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		/// <summary>
		/// A main function call when loads
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		void main_load(System::Object^ sender, System::EventArgs^ e) {
			if (this->_admin) { //load list of user for admin
				loadListBox();
			}
			else { //if not admin readjusting form 
				this->listBox1->Visible = false;
				this->pictureBox2->Visible = false;
				this->deletebt->Visible = false;
				this->Size = System::Drawing::Size(799, 534);
				this->panel1->Location = System::Drawing::Point(245, 125);
				this->panel1->Enabled = true;
			}
		}

		/// <summary>
		/// Function to save image on call
		/// </summary>
		void SaveImage() {
			String^ savePath = Application::StartupPath + "\\Images\\" + this->_userName + "\\"; 
			if (!Directory::Exists(savePath)) { //create Images folder and unique username folder to store image if not exist
				Directory::CreateDirectory(savePath);
			}

			//getting new image ready to write text file
			String^ fileName = Path::GetFileName(filePath);
			String^ destinationPath = Path::Combine(savePath, fileName);
			if (filePath == destinationPath) {
				MessageBox::Show("You have one job! WHY!?", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; //exit function
			}
			String^ imageFilePath = Application::StartupPath + "\\Images\\VaxxCertificate.txt"; // where the image's path stored
			//Read all line if VaxxCertificate.txt exist
			if (File::Exists(imageFilePath)) {
				array<String^>^ lines = File::ReadAllLines(imageFilePath);
				List<String^>^ updatedLines = gcnew List<String^>();
				bool userFound = false;

				for each (String ^ line in lines) { //to find out if there is image associated with user
					array<String^>^ token = line->Split('-');
					if (token[0] == this->_userName) {
						userFound = true;
					}
				}

				if (userFound) { //if there is existing image, confirm if user want to continue
					System::Windows::Forms::DialogResult result = MessageBox::Show("This action will over-write previouse certificate. Would you like to continue?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (result == System::Windows::Forms::DialogResult::No) { //if user does not want to continue
						return; //exit function
					}
				}

				//delete previouse image
				for each (String ^ line in lines) {
					array<String^>^ token = line->Split('^');
					if (token[0] == this->_userName) {
						array<String^>^ parts = line->Split('^');
						if (parts->Length > 1) {
							String^ imagePath = parts[1];
							if (File::Exists(imagePath)) {
								File::Delete(imagePath); //delete image
							}
						}
					}
					else {//keep all lines does not associated with user
						updatedLines->Add(line);
					}
				}
				//write kept lines back to text file
				File::WriteAllLines(imageFilePath, updatedLines->ToArray());
			}
			
			
			File::Copy(filePath, destinationPath, true); //copy selected image to destination path

			// Save userName and image path to .txt file apend mode
			String^ logFilePath = Application::StartupPath + "\\Images\\VaxxCertificate.txt";
			StreamWriter^ writer = gcnew StreamWriter(logFilePath, true);
			writer->WriteLine(this->_userName + "^" + destinationPath);
			writer->Close();
			filePath = destinationPath; //swap filePath to actual copied directory
			this->textBox1->Text = filePath;
			MessageBox::Show("Image saved to " + destinationPath + "\nUserName and image path saved to VaxxCertificate.txt file.");
		}

#pragma endregion
	/// <summary>
	/// function to load list of user to list box
	/// </summary>
	public: void loadListBox() {
		if (!File::Exists("userDetails.txt") || File::ReadAllLines("userDetails.txt")->Length == 0) {
			// Show the message box with Yes and No buttons
			System::Windows::Forms::DialogResult result = MessageBox::Show("Empty User List! Would you like to register new user?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
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
			for each (String ^ line in lines){
				array<String^>^ token = line->Split('-');
				this->listBox1->Items->Add(token[0] + " " + token[1] + " username: " + token[5]);
			}
		}
	}
	/// <summary>
	/// event caller on click upload
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_upload_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->textBox1->Text)) {
			MyHuh^ huhfrm = gcnew MyHuh();
			huhfrm->ShowDialog();
			return;
		}
		SaveImage(); //call saveimage()
	}
	/// <summary>
	/// Event caller on click Browse button - to browse image
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_browse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBox1->SelectedItem == nullptr) {
			MyHuh^ huhfrm = gcnew MyHuh();
			huhfrm->ShowDialog();
			return;
		}
		//open browse dialog
		openFileDialog1->ShowDialog();
		if (openFileDialog1->FileName == "openFileDialog1") return;
		filePath = openFileDialog1->FileName; //fetch image's path to filePath
		this->textBox1->Text = filePath; //Set textbox to file path
		if (this->_admin) //if admin load and display image
			loadImage(filePath);
	}
	/// <summary>
	/// Event caller on click listBox - select user
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if user is selected
		if (listBox1->SelectedItem != nullptr){
			if (this->pictureBox2->Image != nullptr)
				this->pictureBox2->Image = nullptr;//clear pictureBox
			this->textBox1->Clear();
			//Fetch the selected user
			array<String^>^ token = listBox1->SelectedItem->ToString()->Split(' ');
			this->_userName = token[3];
			this->panel1->Enabled = true; //enable panel contains all inputs field
			String^ imageFilePath = Application::StartupPath + "\\Images\\VaxxCertificate.txt"; //path where the image's path stored

			if (!File::Exists(imageFilePath) || File::ReadAllLines(imageFilePath)->Length == 0) { //if file not exist or empty
				MessageBox::Show("User has not yet upload any certificate.");
				return; //exit function
			}

			array<String^>^ lines = File::ReadAllLines(imageFilePath);
			//loot through array and find image's path associated with userName
			for each (String ^ line in lines) {
				if (line->Contains(this->_userName)) {
					array<String^>^ parts = line->Split('^');
					if (parts->Length > 1) {
						String^ imagePath = parts[1];
						if (File::Exists(imagePath)) {
							loadImage(imagePath);//load image
							this->textBox1->Text = imagePath;
							filePath = imagePath;
						}		
					}
				}
			}
		}
		else{ //nothing is selected
			//this->panel1->Enabled = false; //disable panel contain all inputs field
			MessageBox::Show("No item selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	/// <summary>
	/// function to load image to pictureBox
	/// </summary>
	/// <param name="_imagePath"></param>
	public: void loadImage(String^ _imagePath) {
            FileStream^ fs = nullptr;
            try {
                fs = gcnew FileStream(_imagePath, FileMode::Open, FileAccess::Read); //load image of the path to filestream
                MemoryStream^ ms = gcnew MemoryStream();
                fs->CopyTo(ms);//copy image in file stream to memory stream
                ms->Position = 0;
                this->pictureBox2->Image = Image::FromStream(ms); //upload image in memory stream to picturebox2
                fs->Close(); //close file stream to stop image from being used
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error loading image: " + ex->Message);
                if (fs != nullptr) {
                    fs->Close(); //making sure file stream is disposed of
                }
            }
    }
	/// <summary>
	/// event caller on click delete button - delete image
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void deletebt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->textBox1->Text)) {
			MyHuh^ huhfrm = gcnew MyHuh();
			huhfrm->ShowDialog();
			return;
		}
		deleteImage();
	}
	/// <summary>
	/// Function to delete selected user's image/certificate
	/// </summary>
	/// <returns></returns>
	public: System::Void deleteImage() {
		String^ imageFilePath = Application::StartupPath + "\\Images\\VaxxCertificate.txt";
		if (!File::Exists(imageFilePath)) {
			MessageBox::Show("File not found.");
			return;
		}

		array<String^>^ lines = File::ReadAllLines(imageFilePath);
		List<String^>^ updatedLines = gcnew List<String^>();
		bool userFound = false;

		for each (String ^ line in lines) { //loop through and find user's certificate
			if (line->StartsWith(this->_userName + "^")) { //found
				array<String^>^ parts = line->Split('^'); //split string
				if (parts->Length > 1) { 
					String^ imagePath = parts[1];//fetch file's path
					if (File::Exists(imagePath)) {
						this->pictureBox2->Image = nullptr; //clear pictureBox
						File::Delete(imagePath);//delete image
					}
				}
				userFound = true;
			}
			else { 
				updatedLines->Add(line);
			}
		}

		if (userFound) {
			File::WriteAllLines(imageFilePath, updatedLines->ToArray()); //update VaxxCertificate.txt file
			MessageBox::Show("UserName and associated certificate deleted successfully.");
		}
		else {
			MessageBox::Show("UserName not found.");
		}
		Close();
	}
	/// <summary>
	/// event caller on click to close form - cancel
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void b_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
