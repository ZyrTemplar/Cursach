#include <string>
#include <fstream>
#include <iostream>
#include <streambuf>
#pragma once

namespace Project1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFile1;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::OpenFileDialog^  openFile2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  формаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  іноформаціяToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститиФормуToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ToolStripMenuItem^  інструкціяToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->openFile1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFile2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->формаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->іноформаціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інструкціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->очиститиФормуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFile1
			// 
			this->openFile1->FileName = L"openFileDialog1";
			this->openFile1->Filter = L"(*.txt)|*.txt";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Зашифрувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFile2
			// 
			this->openFile2->FileName = L"openFileDialog1";
			this->openFile2->Filter = L"(*.txt)|*.txt";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 190);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(423, 72);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Оберіть мову";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(312, 32);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(84, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Українська";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(171, 32);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Російська";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(26, 32);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Англійська";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(377, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(377, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(395, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(26, 20);
			this->button2->TabIndex = 4;
			this->button2->Text = L"...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(395, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 20);
			this->button3->TabIndex = 5;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Файл для шифрування";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Файл для зашифрованаго тексту";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(255, 282);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 61);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Зсув";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->формаToolStripMenuItem,
					this->іноформаціяToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(451, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// формаToolStripMenuItem
			// 
			this->формаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->очиститиToolStripMenuItem });
			this->формаToolStripMenuItem->Name = L"формаToolStripMenuItem";
			this->формаToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->формаToolStripMenuItem->Text = L"Форма";
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->очиститиToolStripMenuItem->Text = L"Очистити форму";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem_Click);
			// 
			// іноформаціяToolStripMenuItem
			// 
			this->іноформаціяToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->інструкціяToolStripMenuItem });
			this->іноформаціяToolStripMenuItem->Name = L"іноформаціяToolStripMenuItem";
			this->іноформаціяToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->іноформаціяToolStripMenuItem->Text = L"Інформація";
			// 
			// інструкціяToolStripMenuItem
			// 
			this->інструкціяToolStripMenuItem->Name = L"інструкціяToolStripMenuItem";
			this->інструкціяToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->інструкціяToolStripMenuItem->Text = L"Інструкція";
			this->інструкціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::інструкціяToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->очиститиФормуToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(169, 26);
			// 
			// очиститиФормуToolStripMenuItem
			// 
			this->очиститиФормуToolStripMenuItem->Name = L"очиститиФормуToolStripMenuItem";
			this->очиститиФормуToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->очиститиФормуToolStripMenuItem->Text = L"Очистити форму";
			this->очиститиФормуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиФормуToolStripMenuItem_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(12, 148);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 369);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->ControlBox = false;
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Шифр Цезаря";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		string SystemToStr(String ^s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return string(ptr);
		}

		void CaesarOut(int k, string r, string w)
		{
			ifstream input(r, std::ifstream::in | std::ifstream::binary);
			ofstream output(w, std::ifstream::out | std::ifstream::binary);
			char buff;
			int iter;
			char RU[] =
			{ 'А','Б','В','Г','Д','Е','Ё','Ж','З','И',
			  'Й','К','Л','М','Н','О','П','Р','С',
			  'Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ',
			  'Ы','Ь','Э','Ю','Я' };
			char ru[] =
			{ 'а','б','в','г','д','е','ё','ж','з','и',
			'й','к','л','м','н','о','п','р','с',
			'т','у','ф','x','ц','ч','ш','щ','ъ',
			'ы','ь','э','ю','я' };
			char UA[] =
			{ 'А','Б','В','Г','Ґ','Д','Е','Є','Ж','З','И',
			'І','Ї','Й','К','Л','М','Н','О','П','Р','С',
			'Т','У','Ф','Х','Ц','Ч','Ш','Щ',
			'Ь','Ю','Я' };
			char ua[]
			{ 'а','б','в','г','ґ','д','е','є','ж','з','и',
			'і','ї','й','к','л','м','н','о','п','р','с',
			'т','у','ф','х','ц','ч','ш','щ','ь','ю','я' };
			char ENG[] =
			{ 'A','B','C','D','E','F',
			'G','H','I','J','K','L',
			'M','N','O','P','Q','R',
			'S','T','U','V','W','X',
			'Y','Z' };
			char eng[] =
			{ 'a','b','c','d','e','f',
			'g','h','i','j','k','l',
			'm','n','o','p','q','r',
			's','t','u','v','w','x',
			'y','z' };
			while (input.eof() == false) {
				buff = input.get();
				if (buff == ' ')
					output << ' ';
				if (buff == '\n')
					output << '\n';
				if (buff == '?')
					output << '?';
				if (buff == '.')
					output << '.';
				if (buff == '!')
					output << '!';
				if (buff == ',')
					output << ',';
				if (radioButton1->Checked == true)
				{
					for (int i = 0; i < 26; i++)
					{
						if (buff == ENG[i])
						{
							if (i + k >= 26)
							{
								buff = ENG[i - (26 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = ENG[i + k];
								output << buff;
								break;
							}
						}
						if (buff == eng[i])
						{
							if (i + k >= 26)
							{
								buff = eng[i - (26 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = eng[i + k];
								output << buff;
								break;
							}
						}
					}
				}
				if (radioButton2->Checked == true)
				{
					setlocale(LC_ALL, "Russian");
					for (int i = 0; i < 33; i++)
					{
						if (buff == RU[i])
						{
							if (i + k >= 33)
							{
								buff = RU[i - (33 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = RU[i + k];
								output << buff;
								break;
							}
						}
						if (buff == ru[i])
						{
							if (i + k >= 33)
							{
								buff = ru[i - (33 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = ru[i + k];
								output << buff;
								break;
							}
						}
					}
				}
				if (radioButton3->Checked == true)
				{
					setlocale(LC_ALL, "Ukrainian");
					for (int i = 0; i < 33; i++)
					{
						if (buff == UA[i])
						{
							if (i + k >= 33)
							{
								buff = UA[i - (33 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = UA[i + k];
								output << buff;
								break;
							}
						}
						if (buff == ua[i])
						{
							if (i + k >= 33)
							{
								buff = ua[i - (33 - k)];
								output << buff;
								break;
							}
							else
							{
								buff = ua[i + k];
								output << buff;
								break;
							}
						}
					}
				}
			}
			input.close();
			output.close();
		}

#pragma endregion
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int move;
		string read, write;
		read = SystemToStr(openFile1->FileName);
		write = SystemToStr(openFile2->FileName);
		if (numericUpDown1->Text == "0")
		{
			MessageBox::Show("Введіть зсув", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			move = Convert::ToInt64(numericUpDown1->Text);
		}
		if (radioButton1->Checked == false && radioButton2->Checked == false && radioButton3->Checked == false)
		{
			MessageBox::Show("Оберіть мову", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (textBox1->Text == "" || textBox2->Text == "")
		{
			MessageBox::Show("Оберіть файли", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		CaesarOut(move, read, write);
	}
	public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show("Оберіть файл з текстом для шифрування", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		openFile1->ShowDialog();
		if (openFile1->FileName == "openFileDialog1")
		{
			MessageBox::Show("Файл не було обрано", " Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			openFile1->ShowDialog();
		}
		else
		{
			textBox1->Text = openFile1->FileName;
		}
	}
	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show("Оберіть файл в який потрібно записати текст", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		openFile2->ShowDialog();
		if (openFile2->FileName == "openFileDialog1")
		{
			MessageBox::Show("Файл не було обрано", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			openFile2->ShowDialog();
		}
		else
		{
			textBox2->Text = openFile2->FileName;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Application::Exit();
	}
	private: System::Void розробникиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void очиститиФормуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Text = "0";
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		numericUpDown1->Enabled = false;
	}
	private: System::Void очиститиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Text = "0";
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		numericUpDown1->Enabled = false;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown1->Text = "0";
		if (radioButton1->Checked == true)
		{
			numericUpDown1->Maximum = 25;
			this->numericUpDown1->Enabled = true;
		}
		else
		{
			if (radioButton2->Checked == true || radioButton2->Checked == true)
			{
				numericUpDown1->Maximum = 32;
				this->numericUpDown1->Enabled = true;
			}
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown1->Text = "0";
		if (radioButton1->Checked == true)
		{
			numericUpDown1->Maximum = 25;
			this->numericUpDown1->Enabled = true;
		}
		else
		{
			if (radioButton2->Checked == true)
			{
				numericUpDown1->Maximum = 32;
				this->numericUpDown1->Enabled = true;
			}
			else
			{
				if (radioButton3->Checked == true)
				{
					numericUpDown1->Maximum = 32;
					this->numericUpDown1->Enabled = true;
				}
			}
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		numericUpDown1->Text = "0";
		if (radioButton1->Checked == true)
		{
			numericUpDown1->Maximum = 25;
			this->numericUpDown1->Enabled = true;
		}
		else
		{
			if (radioButton2->Checked == true)
			{
				numericUpDown1->Maximum = 32;
				this->numericUpDown1->Enabled = true;
			}
			else
			{
				if (radioButton3->Checked == true)
				{
					numericUpDown1->Maximum = 32;
					this->numericUpDown1->Enabled = true;
				}
			}
		}

	};


	private: System::Void інструкціяToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Help::ShowHelp(this,"Help/NewProject.chm");
	}
};
}