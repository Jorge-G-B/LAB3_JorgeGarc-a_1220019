#pragma once
#include "Pila.h"
#include "Carta.h"
#include "Nodo.h"
namespace LAB3JorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  rTBPila1;
	private: System::Windows::Forms::RichTextBox^  rTBP2;
	private: System::Windows::Forms::RichTextBox^  rTBP3;
	private: System::Windows::Forms::RichTextBox^  rtBP4;
	private: System::Windows::Forms::RichTextBox^  rTBP5;
	private: System::Windows::Forms::RichTextBox^  rTBP6;
	private: System::Windows::Forms::RichTextBox^  rTBP7;
	private: System::Windows::Forms::Button^  btnMovimiento;
	protected:

	protected:













	private: System::Windows::Forms::Button^  btnIniciar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbMazo;
	private: System::Windows::Forms::ComboBox^  cBTOrigen;
	private: System::Windows::Forms::ComboBox^  cBTDestino;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnCiclar;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rTBPila1 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBP2 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBP3 = (gcnew System::Windows::Forms::RichTextBox());
			this->rtBP4 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBP5 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBP6 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBP7 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnMovimiento = (gcnew System::Windows::Forms::Button());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbMazo = (gcnew System::Windows::Forms::TextBox());
			this->cBTOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->cBTDestino = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCiclar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rTBPila1
			// 
			this->rTBPila1->Enabled = false;
			this->rTBPila1->Location = System::Drawing::Point(239, 25);
			this->rTBPila1->Name = L"rTBPila1";
			this->rTBPila1->Size = System::Drawing::Size(97, 311);
			this->rTBPila1->TabIndex = 0;
			this->rTBPila1->Text = L"";
			// 
			// rTBP2
			// 
			this->rTBP2->Enabled = false;
			this->rTBP2->Location = System::Drawing::Point(342, 25);
			this->rTBP2->Name = L"rTBP2";
			this->rTBP2->Size = System::Drawing::Size(97, 311);
			this->rTBP2->TabIndex = 1;
			this->rTBP2->Text = L"";
			// 
			// rTBP3
			// 
			this->rTBP3->Enabled = false;
			this->rTBP3->Location = System::Drawing::Point(445, 25);
			this->rTBP3->Name = L"rTBP3";
			this->rTBP3->Size = System::Drawing::Size(97, 311);
			this->rTBP3->TabIndex = 2;
			this->rTBP3->Text = L"";
			// 
			// rtBP4
			// 
			this->rtBP4->Enabled = false;
			this->rtBP4->Location = System::Drawing::Point(548, 25);
			this->rtBP4->Name = L"rtBP4";
			this->rtBP4->Size = System::Drawing::Size(97, 311);
			this->rtBP4->TabIndex = 3;
			this->rtBP4->Text = L"";
			this->rtBP4->TextChanged += gcnew System::EventHandler(this, &MyForm::rtBP4_TextChanged);
			// 
			// rTBP5
			// 
			this->rTBP5->Enabled = false;
			this->rTBP5->Location = System::Drawing::Point(651, 25);
			this->rTBP5->Name = L"rTBP5";
			this->rTBP5->Size = System::Drawing::Size(97, 311);
			this->rTBP5->TabIndex = 4;
			this->rTBP5->Text = L"";
			// 
			// rTBP6
			// 
			this->rTBP6->Enabled = false;
			this->rTBP6->Location = System::Drawing::Point(754, 25);
			this->rTBP6->Name = L"rTBP6";
			this->rTBP6->Size = System::Drawing::Size(97, 311);
			this->rTBP6->TabIndex = 5;
			this->rTBP6->Text = L"";
			// 
			// rTBP7
			// 
			this->rTBP7->Enabled = false;
			this->rTBP7->Location = System::Drawing::Point(857, 25);
			this->rTBP7->Name = L"rTBP7";
			this->rTBP7->Size = System::Drawing::Size(97, 311);
			this->rTBP7->TabIndex = 6;
			this->rTBP7->Text = L"";
			// 
			// btnMovimiento
			// 
			this->btnMovimiento->Location = System::Drawing::Point(127, 117);
			this->btnMovimiento->Name = L"btnMovimiento";
			this->btnMovimiento->Size = System::Drawing::Size(75, 20);
			this->btnMovimiento->TabIndex = 7;
			this->btnMovimiento->Text = L"Movimiento";
			this->btnMovimiento->UseVisualStyleBackColor = true;
			this->btnMovimiento->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(94, 66);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(75, 29);
			this->btnIniciar->TabIndex = 14;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm::btnIniciar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(387, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(485, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(593, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(694, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(795, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(897, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(52, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Mazo:";
			// 
			// tbMazo
			// 
			this->tbMazo->Location = System::Drawing::Point(94, 133);
			this->tbMazo->Name = L"tbMazo";
			this->tbMazo->Size = System::Drawing::Size(121, 20);
			this->tbMazo->TabIndex = 23;
			// 
			// cBTOrigen
			// 
			this->cBTOrigen->FormattingEnabled = true;
			this->cBTOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Mazo", L"Torre 1", L"Torre 2", L"Torre 3", L"Torre 4",
					L"Torre 5", L"Torre 6", L"Torre 7"
			});
			this->cBTOrigen->Location = System::Drawing::Point(94, 159);
			this->cBTOrigen->Name = L"cBTOrigen";
			this->cBTOrigen->Size = System::Drawing::Size(121, 21);
			this->cBTOrigen->TabIndex = 24;
			// 
			// cBTDestino
			// 
			this->cBTDestino->FormattingEnabled = true;
			this->cBTDestino->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Torre 1", L"Torre 2", L"Torre 3", L"Torre 4",
					L"Torre 5", L"Torre 6", L"Torre 7"
			});
			this->cBTDestino->Location = System::Drawing::Point(94, 186);
			this->cBTDestino->Name = L"cBTDestino";
			this->cBTDestino->Size = System::Drawing::Size(121, 21);
			this->cBTDestino->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Torre Origen:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 189);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Torre Destino:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnCiclar);
			this->groupBox1->Controls->Add(this->btnMovimiento);
			this->groupBox1->Location = System::Drawing::Point(13, 112);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(220, 143);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			// 
			// btnCiclar
			// 
			this->btnCiclar->Location = System::Drawing::Point(21, 117);
			this->btnCiclar->Name = L"btnCiclar";
			this->btnCiclar->Size = System::Drawing::Size(76, 20);
			this->btnCiclar->TabIndex = 8;
			this->btnCiclar->Text = L"Ciclar Mazo";
			this->btnCiclar->UseVisualStyleBackColor = true;
			this->btnCiclar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 366);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->cBTDestino);
			this->Controls->Add(this->cBTOrigen);
			this->Controls->Add(this->tbMazo);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->rTBP7);
			this->Controls->Add(this->rTBP6);
			this->Controls->Add(this->rTBP5);
			this->Controls->Add(this->rtBP4);
			this->Controls->Add(this->rTBP3);
			this->Controls->Add(this->rTBP2);
			this->Controls->Add(this->rTBPila1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Solitario";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Pila* Mazo = new Pila();
	Pila* Mazo2 = new Pila();
	Pila* P1 = new Pila();
	Pila* P2 = new Pila();
	Pila* P3 = new Pila();
	Pila* P4 = new Pila();
	Pila* P5 = new Pila();
	Pila* P6 = new Pila();
	Pila* P7 = new Pila();
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int TO = Convert::ToInt16(cBTOrigen->SelectedIndex);
		int TD = Convert::ToInt16(cBTDestino->SelectedIndex);
		switch (TO)
		{
		case 0:
			switch (TD)
			{
			case 0:
				if ((Mazo->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((Mazo->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((Mazo->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((Mazo->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((Mazo->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((Mazo->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((Mazo->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (Mazo->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(Mazo->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			}
			break;
		case 1:
			switch (TD)
			{
			case 1:
				if ((P1->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((P1->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P1->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((P1->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P1->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P1->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P1->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P1->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			
			}
			break;
		case 2:
			switch (TD)
			{
			case 0:
				if ((P2->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((P2->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P2->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((P2->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P2->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P2->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P2->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P2->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;
		case 3:
			switch (TD)
			{
			case 0:
				if ((P3->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((P3->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P3->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((P3->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P3->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P3->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P3->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P3->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;
		case 4:
			switch (TD)
			{
			case 0:
				if ((P4->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((P4->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P4->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((P4->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P4->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P4->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P4->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P4->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;
		case 5:
			switch (TD)
			{
			case 0:
				if ((P5->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((P5->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((P5->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P5->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P5->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P5->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P5->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P5->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;
		case 6:
			switch (TD)
			{
			case 0:
				if ((P6->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((P6->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((P6->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P6->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P6->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 6:
				if ((P6->ObtenerCima().Numero < P7->ObtenerCima().Numero) && (P6->ObtenerCima().Color != P7->ObtenerCima().Color)) {
					P7->Apilar(P6->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;
		case 7:
			switch (TD)
			{
			case 0:
				if ((P7->ObtenerCima().Numero < P1->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P1->ObtenerCima().Color)) {
					P1->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 1:
				if ((P7->ObtenerCima().Numero < P2->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P2->ObtenerCima().Color)) {
					P2->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 2:
				if ((P7->ObtenerCima().Numero < P3->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P3->ObtenerCima().Color)) {
					P3->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 3:
				if ((P7->ObtenerCima().Numero < P4->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P4->ObtenerCima().Color)) {
					P4->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 4:
				if ((P7->ObtenerCima().Numero < P5->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P5->ObtenerCima().Color)) {
					P5->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;
			case 5:
				if ((P7->ObtenerCima().Numero < P6->ObtenerCima().Numero) && (P7->ObtenerCima().Color != P6->ObtenerCima().Color)) {
					P6->Apilar(P7->Desapilar());
				}
				else {
					System::Windows::Forms::MessageBox::Show("¡Movimiento incorrecto!");
				}
				break;

			}
			break;

		}
		Actualizar();
	}
private: System::Void btnIniciar_Click(System::Object^  sender, System::EventArgs^  e) {
	Random^ R = gcnew Random();
	for (int i = 0; i < 13; i++)
	{
		Carta* C = new Carta();
			C->Color = 1;
			C->Numero = i+1;
			Mazo->Apilar(*C);
	}
	for (int i = 0; i < 13; i++)
	{
		Carta* C = new Carta();
			C->Color = 0;
			C->Numero = 13-i;
			Mazo->Apilar(*C);
	}
	for (int i = 0; i < 13; i++)
	{
		Carta* C = new Carta();
		C->Color = 1;
		C->Numero = 13-i;
		Mazo->Apilar(*C);
	}
	for (int i = 0; i < 13; i++)
	{
		Carta* C = new Carta();
		C->Color = 0;
		C->Numero = i+1;
		Mazo->Apilar(*C);
	}
			
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	int n7 = 0;
	for (int i = 0; i < 28; i++)
	{
		int random = R->Next(0,7);
		switch (random)
		{
		case 0:
			if (n1 < 1) {
				P1->Apilar(Mazo->Desapilar());
				n1++;
				if (P1->ObtenerCima().Color == 1) {
					rTBPila1->Text += "N" + P1->ObtenerCima().Numero +  " \n";
				}
				else {
					rTBPila1->Text += "R" + P1->ObtenerCima().Numero + " \n";
				}
				
			}
			else {
				i--;
			}
			break;
		case 1:
			if (n2 < 2) {
				P2->Apilar(Mazo->Desapilar());
				n2++;
				if (P2->ObtenerCima().Color == 1) {
					rTBP2->Text += "N" + P2->ObtenerCima().Numero + " \n";
				}
				else {
					rTBP2->Text += "R" + P2->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		case 2:
			if (n3 < 3) {
				P3->Apilar(Mazo->Desapilar());
				n3++;
				if (P3->ObtenerCima().Color == 1) {
					rTBP3->Text += "N" + P3->ObtenerCima().Numero + " \n";
				}
				else {
					rTBP3->Text += "R" + P3->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		case 3:
			if (n4 < 4) {
				P4->Apilar(Mazo->Desapilar());
				n4++;
				if (P4->ObtenerCima().Color == 1) {
					rtBP4->Text += "N" + P4->ObtenerCima().Numero + " \n";
				}
				else {
					rtBP4->Text += "R" + P4->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		case 4:
			if (n5 < 5) {
				P5->Apilar(Mazo->Desapilar());
				n5++;
				if (P5->ObtenerCima().Color == 1) {
					rTBP5->Text += "N" + P5->ObtenerCima().Numero + " \n";
				}
				else {
					rTBP5->Text += "R" + P5->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		case 5:
			if (n6 < 6) {
				P6->Apilar(Mazo->Desapilar());
				n6++;
				if (P6->ObtenerCima().Color == 1) {
					rTBP6->Text += "N" + P6->ObtenerCima().Numero + " \n";
				}
				else {
					rTBP6->Text += "R" + P6->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		case 6:
			if (n7 < 7) {
				P7->Apilar(Mazo->Desapilar());
				n7++;
				if (P7->ObtenerCima().Color == 1) {
					rTBP7->Text += "N" + P7->ObtenerCima().Numero + " \n";
				}
				else {
					rTBP7->Text += "R" + P7->ObtenerCima().Numero + " \n";
				}
			}
			else {
				i--;
			}
			break;
		}
	}
	if (Mazo->ObtenerCima().Color == 1) {
		tbMazo->Text += "N" + Mazo->ObtenerCima().Numero + " \n";
	}
	else {
		tbMazo->Text += "R" + Mazo->ObtenerCima().Numero + " \n";
	}
}
private: System::Void rtBP4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void Actualizar() {
	System::String^ t = "";
	for (int i = 0; i < P7->NElementos; i++)
	{
		if (i < (P7->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P7->ObtenerCima())->Color == 1)
			{
				t += ((&P7->ObtenerCima())->Numero).ToString() + "N";
				rTBP7->Text = t;
			}
			else
			{
				t += ((&P7->ObtenerCima())->Numero).ToString() + "R";
				rTBP7->Text = t;
			}

		}
	}

	if (P7->NElementos == 0)
	{
		rTBP7->Text = t;
	}

	t = "";

	for (int i = 0; i < P6->NElementos; i++)
	{
		if (i < (P6->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P6->ObtenerCima())->Color == 1)
			{
				t += ((&P6->ObtenerCima())->Numero).ToString() + "N";
				rTBP6->Text = t;
			}
			else
			{
				t += ((&P6->ObtenerCima())->Numero).ToString() + "R";
				rTBP6->Text = t;
			}

		}
	}

	if (P6->NElementos == 0)
	{
		rTBP6->Text = t;
	}

	t = "";

	for (int i = 0; i < P5->NElementos; i++)
	{
		if (i < (P5->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P5->ObtenerCima())->Color == 1)
			{
				t += ((&P5->ObtenerCima())->Numero).ToString() + "N";
				rTBP5->Text = t;
			}
			else
			{
				t += ((&P5->ObtenerCima())->Numero).ToString() + "R";
				rTBP5->Text = t;
			}

		}
	}

	if (P5->NElementos == 0)
	{
		rTBP5->Text = t;
	}

	t = "";

	for (int i = 0; i < P4->NElementos; i++)
	{
		if (i < (P4->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P4->ObtenerCima())->Color == 1)
			{
				t += ((&P4->ObtenerCima())->Numero).ToString() + "N";
				rtBP4->Text = t;
			}
			else
			{
				t += ((&P4->ObtenerCima())->Numero).ToString() + "R";
				rtBP4->Text = t;
			}

		}
	}

	if (P4->NElementos == 0)
	{
		rtBP4->Text = t;
	}

	t = "";

	for (int i = 0; i < P3->NElementos; i++)
	{
		if (i < (P3->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P3->ObtenerCima())->Color == 1)
			{
				t += ((&P3->ObtenerCima())->Numero).ToString() + "N";
				rTBP3->Text = t;
			}
			else
			{
				t += ((&P3->ObtenerCima())->Numero).ToString() + "R";
				rTBP3->Text = t;
			}

		}
	}

	if (P3->NElementos == 0)
	{
		rTBP3->Text = t;
	}

	t = "";

	for (int i = 0; i < P2->NElementos; i++)
	{
		if (i < (P2->NElementos - 1))
		{
			t += "-----------\n"; 
		}
		else
		{
			if ((&P2->ObtenerCima())->Color == 1)
			{
				t += ((&P2->ObtenerCima())->Numero).ToString() + "N";
				rTBP2->Text = t;
			}
			else
			{
				t += ((&P6->ObtenerCima())->Numero).ToString() + "R";
				rTBP2->Text = t;
			}

		}
	}

	if (P2->NElementos == 0)
	{
		rTBP2->Text = t;
	}

	t = "";

	for (int i = 0; i < P1->NElementos; i++)
	{
		if (i < (P1->NElementos - 1))
		{
			t += "-----------\n";
		}
		else
		{
			if ((&P1->ObtenerCima())->Color == 1)
			{
				t += ((&P1->ObtenerCima())->Numero).ToString() + "N";
				rTBPila1->Text = t;
			}
			else
			{
				t += ((&P1->ObtenerCima())->Numero).ToString() + "R";
				rTBPila1->Text = t;
			}

		}
	}

	if (P1->NElementos == 0)
	{
		rTBPila1->Text = t;
	}

	t = "";

	if (Mazo->NElementos == 0)
	{
		tbMazo->Text = t;
	}
	else
	{
		if ((&Mazo->ObtenerCima())->Color == 1)
		{
			t += ((&Mazo->ObtenerCima())->Numero).ToString() + "N";
		}
		else
		{
			t += ((&Mazo->ObtenerCima())->Numero).ToString() + "R";
		}

		tbMazo->Text = t;
	}
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	if (Mazo->NElementos>0) 
	{
	Mazo2->Apilar(Mazo->Desapilar());
	}
	else
	{
		while (Mazo2->NElementos > 0)
		{
			Mazo->Apilar(Mazo2->Desapilar());
		}
	}
	Actualizar();
}
};

}
