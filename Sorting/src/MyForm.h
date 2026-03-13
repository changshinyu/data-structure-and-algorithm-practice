#pragma once
#include <stdlib.h>
#include <time.h>
#define SWAP(x,y,t) (t=x,x=y,y=t)
#define SIZE 100000

int list[SIZE];

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox6;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(335, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(318, 87);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Data Generation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(319, 285);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(364, 436);
			this->listBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(312, 87);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Slection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 24;
			this->listBox2->Location = System::Drawing::Point(734, 285);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(373, 436);
			this->listBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1188, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(325, 88);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 24;
			this->listBox3->Location = System::Drawing::Point(1171, 285);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(365, 436);
			this->listBox3->TabIndex = 6;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(75, 327);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(138, 28);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"n=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"range";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 242);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 36);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(75, 405);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(142, 28);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Self Check";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1632, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(301, 87);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Binary Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 24;
			this->listBox4->Location = System::Drawing::Point(1607, 285);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(355, 436);
			this->listBox4->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1586, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 24);
			this->label3->TabIndex = 15;
			this->label3->Text = L"target";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1671, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 36);
			this->textBox3->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(2077, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(274, 87);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Quick Sort";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 24;
			this->listBox5->Location = System::Drawing::Point(2034, 285);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(367, 436);
			this->listBox5->TabIndex = 18;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(2513, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(265, 86);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Insertion Sort";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 24;
			this->listBox6->Location = System::Drawing::Point(2468, 285);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(375, 436);
			this->listBox6->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2884, 813);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Sort";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void SelectionSort(int data[], int n)
	{
		int i, j;
		int min, temp;
		for (i = 0; i < n; i++) // i<n-1
		{
			min = i;
			for (j = i + 1; j < n; j++)

				if (data[j] < data[min]) min = j;

			temp = data[i];
			data[i] = data[min];
			data[min] = temp;
		}
	}

	void BubbleSort(int list[], int n)
	{
		int t;
		for (int i = n - 1;i > 0;i--)
			for (int j = 1;j <= i;j++)
				if (list[j - 1] > list[j])
					SWAP(list[j - 1], list[j],t);
	}

	void selfcheck(int list[], int n, int x)
	{
		int i;
		for (i = 0;i < n-1;i++)
		{
			if (list[i] > list[i + 1])
				break;
		}
		if (i == n - 1)
		{
			if (x == 2)
				listBox2->Items->Add("Correctly sorted.");
			else if (x == 3)
				listBox3->Items->Add("Correctly sorted.");
			else if (x == 4)
				listBox5->Items->Add("Correctly sorted.");
			else if (x == 5)
				listBox6->Items->Add("Correctly sorted.");
		}
		else
		{
			if(x==2)
				listBox2->Items->Add("Not sorted.");
			else if(x==3)
				listBox3->Items->Add("Not sorted.");
			else if (x == 4)
				listBox5->Items->Add("Not sorted.");
			else if (x == 5)
				listBox6->Items->Add("Not sorted.");
		}
	}

	int binary(int list[], int n, int t)
	{
		int l=0, r=n-1, m;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (list[m] == t)
				return m;
			else if (list[m] < t)
				l = m + 1;
			else
				r = m - 1;
		}
		return -1;
	}

	void QuickSort(int list[], int left, int right) {
		int t;
		if (left < right) {
			int pivot = list[right];  // 以最右邊的元素作為樞軸
			int i = left - 1;

			for (int j = left; j < right; j++) {
				if (list[j] < pivot) {
					i++;
					SWAP(list[i], list[j],t);
				}
			}
			SWAP(list[i + 1], list[right],t);
			int p = i + 1;

			QuickSort(list, left, p - 1);
			QuickSort(list, p + 1, right);
		}
	}

	void InsertionSort(int list[], int n) {
		for (int i = 1; i < n; i++) {
			int key = list[i];
			int j = i - 1;
			while (j >= 0 && list[j] > key) {
				list[j + 1] = list[j];
				j--;
			}
			list[j + 1] = key;
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		int range;
		n = int::Parse(textBox1->Text);
		range = int::Parse(textBox2->Text);
		for (int i = 0;i < n;i++)
		{
			list[i] = rand()%range+1;//產生亂數範圍
		}
		if (checkBox1->Checked)
		{
			for (int i = 0;i < n;i++)
			{
				listBox1->Items->Add(list[i]);
			}
		}
		listBox1->Items->Add(n+" random numbers are generated.");
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	//SelectionSort
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int sorted[SIZE];
		clock_t start, end;
		double duration;
		for (int i = 0;i < n;i++)
			sorted[i] = list[i];
		start = clock();
		SelectionSort(sorted,  n);
		end = clock();
		duration =(double) (end - start) / CLOCKS_PER_SEC;
		if (checkBox1->Checked)
		{
			for (int i = 0;i < n;i++)
			{
				listBox2->Items->Add(sorted[i]);
			}
		}
		if (checkBox2->Checked)
			selfcheck(sorted, n, 2);
		listBox2->Items->Add("n = " + n + " SlectionSort: " + duration.ToString("F3") + " (sec.)");
	}

//bubble sort
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = int::Parse(textBox1->Text);
	int sorted[SIZE];
	clock_t start, end;
	double duration;
	for (int i = 0;i < n;i++)
		sorted[i] = list[i];
	start = clock();
	BubbleSort(sorted, n);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	if (checkBox1->Checked)
	{
		for (int i = 0;i < n;i++)
		{
			listBox3->Items->Add(sorted[i]);
		}
	}
	if (checkBox2->Checked)
		selfcheck(sorted, n, 3);
	listBox3->Items->Add("n = " + n + " BubbleSort: " + duration.ToString("F3") + " (sec.)");
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}

//binary search
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int t= int::Parse(textBox3->Text);
	int n = int::Parse(textBox1->Text);
	// Create a copy of the list and sort it first
	int sorted[SIZE];
	for (int i = 0; i < n; i++)
		sorted[i] = list[i];

	// Sort the array (using any of your sort functions)
	// For example:
	QuickSort(sorted, 0, n - 1);

	// Now perform binary search on the sorted array
	int s = binary(sorted, n, t);
	if(s>=0)
		listBox4->Items->Add(t +" has been found in data.");
	else
		listBox4->Items->Add(t + " has not been found in data.");
}

//quicksort
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = int::Parse(textBox1->Text);
	int sorted[SIZE];
	clock_t start, end;
	double duration;
	for (int i = 0;i < n;i++)
		sorted[i] = list[i];
	start = clock();
	QuickSort(sorted, 0, n - 1); 
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;

	if (checkBox1->Checked) {
		for (int i = 0; i < n; i++) {
			listBox5->Items->Add(sorted[i]);
		}
	}
	if (checkBox2->Checked)
		selfcheck(sorted, n, 4);

	listBox5->Items->Add("n = " + n + " QuickSort: " + duration.ToString("F3") + " (sec.)");
}

//insertion sort
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = int::Parse(textBox1->Text);
	int sorted[SIZE];
	clock_t start, end;
	double duration;
	for (int i = 0;i < n;i++)
		sorted[i] = list[i];
	start = clock();
	InsertionSort(sorted, n);
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;

	if (checkBox1->Checked) {
		for (int i = 0; i < n; i++) {
			listBox5->Items->Add(sorted[i]);
		}
	}
	if (checkBox2->Checked)
		selfcheck(sorted, n, 5);

	listBox6->Items->Add("n = " + n + " InsertionSort: " + duration.ToString("F3") + " (sec.)");
}
};
}
