//---------------------------------------------------------------------------

#include <vcl.h>
#include <string.h>
#include <iostream.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#pragma hdrstop
AnsiString cb2,cb3;
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
		ComboBox1->Items->Add("�����");
		ComboBox1->Items->Add("�����");
		ComboBox1->Items->Add("��������");
		ComboBox1->Items->Add("��������");
		ComboBox1->Items->Add("������");
		ComboBox1->Items->Add("�������");
		ComboBox1->Items->Add("���");
		ComboBox1->Items->Add("�����");
		ComboBox1->Items->Add("�����������");
		ComboBox1->Items->Add("����� ����������");
		ComboBox1->Items->Add("��������");
		ComboBox1->Items->Add("�������� ������");
		ComboBox1->Items->Add("���������");
		ComboBox1->Items->Add("�������");
		ComboBox1->Items->Add("����");
		ComboBox1->Items->Add("������� ����");
		ComboBox1->Items->Add("������� ��������");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Select(TObject *Sender)
{
        AnsiString s;
        s=ComboBox1->Text;
		ComboBox2->Clear();
        ComboBox3->Clear();
		Edit1->Text=0;
        Edit2->Text=0;
        //ShowMessage();
		if(s=="�����")
		{
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("�������� (��)");
				ComboBox2->Items->Add("���� (�)");
				ComboBox2->Items->Add("�������� (��)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("��������� (���)");
				ComboBox2->Items->Add("�������� (��)");
				ComboBox2->Items->Add("�������� (�)");
				ComboBox2->Items->Add("��� � ��������: ");
				ComboBox2->Items->Add("���/���");
				ComboBox2->Items->Add("���� (mi)");
				ComboBox2->Items->Add("�������");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("��� (yd)");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("��� (ft)");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����/����");
				ComboBox2->Items->Add("����/������");
				ComboBox2->Items->Add("����/������");
				ComboBox2->Items->Add("���� (in)");
				ComboBox2->Items->Add("������/�����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("����������");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("���������");
				ComboBox2->Items->Add("������������ �������: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("������� ������");
				ComboBox2->Items->Add("����� ������");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("������� ������");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������� �������: ");
				ComboBox2->Items->Add("������� ����/���");
				ComboBox2->Items->Add("������� ����");
				ComboBox2->Items->Add("���������");
				ComboBox2->Items->Add("�����/������� ������");
				ComboBox2->Items->Add("��������������� �������: ");
				ComboBox2->Items->Add("������� ��������");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�������� ���");
				ComboBox2->Items->Add("��������������� �������");
				ComboBox2->Items->Add("�������� ������");
				ComboBox2->Items->Add("�������� �������");
				ComboBox2->Items->Add("������������ �������: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����� (pt)");
				ComboBox2->Items->Add("������� (px)");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�����");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("�������� (��)");
				ComboBox3->Items->Add("���� (�)");
				ComboBox3->Items->Add("�������� (��)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("��������� (���)");
				ComboBox3->Items->Add("�������� (��)");
				ComboBox3->Items->Add("�������� (�)");
				ComboBox3->Items->Add("��� � ��������: ");
				ComboBox3->Items->Add("���/���");
				ComboBox3->Items->Add("���� (mi)");
				ComboBox3->Items->Add("�������");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("��� (yd)");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("��� (ft)");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����/����");
				ComboBox3->Items->Add("����/������");
				ComboBox3->Items->Add("����/������");
				ComboBox3->Items->Add("���� (in)");
				ComboBox3->Items->Add("������/�����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("����������");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("���������");
				ComboBox3->Items->Add("������������ �������: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("������� ������");
				ComboBox3->Items->Add("����� ������");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("������� ������");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������� �������: ");
				ComboBox3->Items->Add("������� ����/���");
				ComboBox3->Items->Add("������� ����");
				ComboBox3->Items->Add("���������");
				ComboBox3->Items->Add("�����/������� ������");
				ComboBox3->Items->Add("��������������� �������: ");
				ComboBox3->Items->Add("������� ��������");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�������� ���");
				ComboBox3->Items->Add("��������������� �������");
				ComboBox3->Items->Add("�������� ������");
				ComboBox3->Items->Add("�������� �������");
				ComboBox3->Items->Add("������������ �������: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����� (pt)");
				ComboBox3->Items->Add("������� (px)");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�����");
		}

		if(s=="�����")
		{
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("���������� �������� (��^3)");
				ComboBox2->Items->Add("���������� ���� (�^3)");
				ComboBox2->Items->Add("���������� �������� (��^3)");
				ComboBox2->Items->Add("���������� ��������� (��^3)");
				ComboBox2->Items->Add("���������� ��������� (��^3)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("�������� (���)");
				ComboBox2->Items->Add("���� (�)");
				ComboBox2->Items->Add("�������� (��)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("��������� (���)");
				ComboBox2->Items->Add("���������� ����: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������� (�����)");
				ComboBox2->Items->Add("������ (bu)");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("������ (gal)");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("����� (pt)");
				ComboBox2->Items->Add("������ �����");
				ComboBox2->Items->Add("���������� �������: ");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�������� �����");
				ComboBox2->Items->Add("������ �����");
				ComboBox2->Items->Add("���: ");
				ComboBox2->Items->Add("���-���");
				ComboBox2->Items->Add("�������(��������) (bbl)");
				ComboBox2->Items->Add("������ (gal)");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("����� (pt)");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������ �����");
				ComboBox2->Items->Add("������ ������");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("���������� � ������������ �� ������ �����: ");
				ComboBox2->Items->Add("���������� ��� (yd^3)");
				ComboBox2->Items->Add("���������� ��� (ft^3)");
				ComboBox2->Items->Add("���������� ���� (in^3)");
				ComboBox2->Items->Add("������������ ���� ��������: ");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("���� (������)");
				ComboBox2->Items->Add("��������");
				ComboBox2->Items->Add("������ �������");
				ComboBox2->Items->Add("�������� �������");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("������");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("���������� �������� (��^3)");
				ComboBox3->Items->Add("���������� ���� (�^3)");
				ComboBox3->Items->Add("���������� �������� (��^3)");
				ComboBox3->Items->Add("���������� ��������� (��^3)");
				ComboBox3->Items->Add("���������� ��������� (��^3)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("�������� (���)");
				ComboBox3->Items->Add("���� (�)");
				ComboBox3->Items->Add("�������� (��)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("��������� (���)");
				ComboBox3->Items->Add("���������� ����: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������� (�����)");
				ComboBox3->Items->Add("������ (bu)");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("������ (gal)");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("����� (pt)");
				ComboBox3->Items->Add("������ �����");
				ComboBox3->Items->Add("���������� �������: ");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�������� �����");
				ComboBox3->Items->Add("������ �����");
				ComboBox3->Items->Add("���: ");
				ComboBox3->Items->Add("���-���");
				ComboBox3->Items->Add("�������(��������) (bbl)");
				ComboBox3->Items->Add("������ (gal)");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("����� (pt)");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������ �����");
				ComboBox3->Items->Add("������ ������");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("���������� � ������������ �� ������ �����: ");
				ComboBox3->Items->Add("���������� ��� (yd^3)");
				ComboBox3->Items->Add("���������� ��� (ft^3)");
				ComboBox3->Items->Add("���������� ���� (in^3)");
				ComboBox3->Items->Add("������������ ���� ��������: ");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("���� (������)");
				ComboBox3->Items->Add("��������");
				ComboBox3->Items->Add("������ �������");
				ComboBox3->Items->Add("�������� �������");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("������");
		}

		if(s=="��������")
		{
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("����������� (���)");
				ComboBox2->Items->Add("������������ (���)");
				ComboBox2->Items->Add("����������� (���)");
				ComboBox2->Items->Add("�������� (����)");
				ComboBox2->Items->Add("������� (��)");
				ComboBox2->Items->Add("��������� ���� �� ��^2");
				ComboBox2->Items->Add("��������� ���� �� �^2");
				ComboBox2->Items->Add("������ �� �^2");
				ComboBox2->Items->Add("���������� �� �^2");
				ComboBox2->Items->Add("���������� �� �^2");
				ComboBox2->Items->Add("������ �� ��^2");
				ComboBox2->Items->Add("������ �� ��^2");
				ComboBox2->Items->Add("������� �������� ������: ");
				ComboBox2->Items->Add("���� �������� ������");
				ComboBox2->Items->Add("��������� �������� ������");
				ComboBox2->Items->Add("��������� �������� ������");
				ComboBox2->Items->Add("���������� � ������������ �������: ");
				ComboBox2->Items->Add("1000 ������ �� ����^2");
				ComboBox2->Items->Add("���� �� ����^2");
				ComboBox2->Items->Add("���� �� ���^2");
				ComboBox2->Items->Add("����� ���� �� ����^2");
				ComboBox2->Items->Add("����� ���� �� ���^2");
				ComboBox2->Items->Add("���������� ����� �� ����^2");
				ComboBox2->Items->Add("���������� ����� �� ���^2");
				ComboBox2->Items->Add("���������: ");
				ComboBox2->Items->Add("���������� ��������� (���)");
				ComboBox2->Items->Add("����������� ��������� (��)");
				ComboBox2->Items->Add("���� ��� 4�C, 39.2�F: ");
				ComboBox2->Items->Add("���� �������� ������");
				ComboBox2->Items->Add("��������� �������� ������");
				ComboBox2->Items->Add("��������� �������� ������");
				ComboBox2->Items->Add("��� �������� ������");
				ComboBox2->Items->Add("���� �������� ������");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("����������� (���)");
				ComboBox3->Items->Add("������������ (���)");
				ComboBox3->Items->Add("����������� (���)");
				ComboBox3->Items->Add("�������� (����)");
				ComboBox3->Items->Add("������� (��)");
				ComboBox3->Items->Add("��������� ���� �� ��^2");
				ComboBox3->Items->Add("��������� ���� �� �^2");
				ComboBox3->Items->Add("������ �� �^2");
				ComboBox3->Items->Add("���������� �� �^2");
				ComboBox3->Items->Add("���������� �� �^2");
				ComboBox3->Items->Add("������ �� ��^2");
				ComboBox3->Items->Add("������ �� ��^2");
				ComboBox3->Items->Add("������� �������� ������: ");
				ComboBox3->Items->Add("���� �������� ������");
				ComboBox3->Items->Add("��������� �������� ������");
				ComboBox3->Items->Add("��������� �������� ������");
				ComboBox3->Items->Add("���������� � ������������ �������: ");
				ComboBox3->Items->Add("1000 ������ �� ����^2");
				ComboBox3->Items->Add("���� �� ����^2");
				ComboBox3->Items->Add("���� �� ���^2");
				ComboBox3->Items->Add("����� ���� �� ����^2");
				ComboBox3->Items->Add("����� ���� �� ���^2");
				ComboBox3->Items->Add("���������� ����� �� ����^2");
				ComboBox3->Items->Add("���������� ����� �� ���^2");
				ComboBox3->Items->Add("���������: ");
				ComboBox3->Items->Add("���������� ��������� (���)");
				ComboBox3->Items->Add("����������� ��������� (��)");
				ComboBox3->Items->Add("���� ��� 4�C, 39.2�F: ");
				ComboBox3->Items->Add("���� �������� ������");
				ComboBox3->Items->Add("��������� �������� ������");
				ComboBox3->Items->Add("��������� �������� ������");
				ComboBox3->Items->Add("��� �������� ������");
				ComboBox3->Items->Add("���� �������� ������");
        }

		if(s=="��������")
        {
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("�������� � ������� (��/�)");
				ComboBox2->Items->Add("�������� � ������ (��/���)");
				ComboBox2->Items->Add("���� � ������� (�/�)");
				ComboBox2->Items->Add("�������� � ��� (��/�)");
				ComboBox2->Items->Add("���� � ������ (�/���)");
				ComboBox2->Items->Add("���� � ��� (�/���)");
				ComboBox2->Items->Add("������� �������: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������� ���� � ���");
				ComboBox2->Items->Add("������������ � ���������� �������: ");
				ComboBox2->Items->Add("���� � ������� (mps)");
				ComboBox2->Items->Add("���� � ��� (mph)");
				ComboBox2->Items->Add("��� � ������� (ft/s)");
				ComboBox2->Items->Add("��� � ������ (ft/min)");
				ComboBox2->Items->Add("�������� �����: ");
				ComboBox2->Items->Add("�������� � ����� (M)");
				ComboBox2->Items->Add("�������� ����� � �������");
				ComboBox2->Items->Add("�������� ����� � ����");
				ComboBox2->Items->Add("������ ����������� ��������");
				ComboBox2->Items->Add("������ ����������� ��������");
				ComboBox2->Items->Add("�������� ����� � �������");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("�������� � ������� (��/�)");
				ComboBox3->Items->Add("�������� � ������ (��/���)");
				ComboBox3->Items->Add("���� � ������� (�/�)");
				ComboBox3->Items->Add("�������� � ��� (��/�)");
				ComboBox3->Items->Add("���� � ������ (�/���)");
				ComboBox3->Items->Add("���� � ��� (�/���)");
				ComboBox3->Items->Add("������� �������: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������� ���� � ���");
				ComboBox3->Items->Add("������������ � ���������� �������: ");
				ComboBox3->Items->Add("���� � ������� (mps)");
				ComboBox3->Items->Add("���� � ��� (mph)");
				ComboBox3->Items->Add("��� � ������� (ft/s)");
				ComboBox3->Items->Add("��� � ������ (ft/min)");
				ComboBox3->Items->Add("�������� �����: ");
				ComboBox3->Items->Add("�������� � ����� (M)");
				ComboBox3->Items->Add("�������� ����� � �������");
				ComboBox3->Items->Add("�������� ����� � ����");
				ComboBox3->Items->Add("������ ����������� ��������");
				ComboBox3->Items->Add("������ ����������� ��������");
				ComboBox3->Items->Add("�������� ����� � �������");
        }
		if(s=="������")
		{
				ComboBox2->Items->Add("������ ���(USD)");
				ComboBox2->Items->Add("����(EUR)");
				ComboBox2->Items->Add("����������� �����(BYN)");
				ComboBox2->Items->Add("�������� ����(TRY)");
				ComboBox2->Items->Add("���������� ������(UAH)");
				ComboBox2->Items->Add("���� ���������� ������������ �����������(GBP)");
				ComboBox2->Items->Add("���������� �����(RUB)");

				ComboBox3->Items->Add("������ ���(USD)");
				ComboBox3->Items->Add("����(EUR)");
				ComboBox3->Items->Add("����������� �����(BYN)");
				ComboBox3->Items->Add("�������� ����(TRY)");
				ComboBox3->Items->Add("���������� ������(UAH)");
				ComboBox3->Items->Add("���� ���������� ������������ �����������(GBP)");
				ComboBox3->Items->Add("���������� �����(RUB)");
        }
		if(s=="�������")
        {
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("���������� �������� (��^2)");
				ComboBox2->Items->Add("������ (��)");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("�� (�)");
				ComboBox2->Items->Add("���������� ���� (�^2)");
				ComboBox2->Items->Add("���������� �������� (��^2)");
				ComboBox2->Items->Add("���������� ��������� (��^2)");
				ComboBox2->Items->Add("���������� ��������� (��^2)");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������������ �������: ");
				ComboBox2->Items->Add("�������� ��������");
				ComboBox2->Items->Add("�������� �������������");
				ComboBox2->Items->Add("���������� ������");
				ComboBox2->Items->Add("���������� �����");
				ComboBox2->Items->Add("���������� ���");
				ComboBox2->Items->Add("���������� � ������������ �������: ");
				ComboBox2->Items->Add("�������");
				ComboBox2->Items->Add("���������� ���� (mi^2)");
				ComboBox2->Items->Add("�������");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("���������� ���");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("���������� ��� (yd^2)");
				ComboBox2->Items->Add("���������� ��� (ft^2)");
				ComboBox2->Items->Add("���������� ���� (in^2)");
				ComboBox2->Items->Add("������: ");
				ComboBox2->Items->Add("������ � �������");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("���������� �������� (��^2)");
				ComboBox3->Items->Add("������ (��)");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("�� (�)");
				ComboBox3->Items->Add("���������� ���� (�^2)");
				ComboBox3->Items->Add("���������� �������� (��^2)");
				ComboBox3->Items->Add("���������� ��������� (��^2)");
				ComboBox3->Items->Add("���������� ��������� (��^2)");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������������ �������: ");
				ComboBox3->Items->Add("�������� ��������");
				ComboBox3->Items->Add("�������� �������������");
				ComboBox3->Items->Add("���������� ������");
				ComboBox3->Items->Add("���������� �����");
				ComboBox3->Items->Add("���������� ���");
				ComboBox3->Items->Add("���������� � ������������ �������: ");
				ComboBox3->Items->Add("�������");
				ComboBox3->Items->Add("���������� ���� (mi^2)");
				ComboBox3->Items->Add("�������");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("���������� ���");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("���������� ��� (yd^2)");
				ComboBox3->Items->Add("���������� ��� (ft^2)");
				ComboBox3->Items->Add("���������� ���� (in^2)");
				ComboBox3->Items->Add("������: ");
				ComboBox3->Items->Add("������ � �������");
		}
		if(s=="���")
		{
				ComboBox2->Items->Add("����������� �������: ");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("����� (�)");
				ComboBox2->Items->Add("���������� �� ����� (��)");
				ComboBox2->Items->Add("������� (�)");
				ComboBox2->Items->Add("��������� (��)");
				ComboBox2->Items->Add("������ �� ����� (�)");
				ComboBox2->Items->Add("����� (���)");
				ComboBox2->Items->Add("����� (�)");
				ComboBox2->Items->Add("���������� (��)");
				ComboBox2->Items->Add("���������� (��)");
				ComboBox2->Items->Add("���������� (���)");
				ComboBox2->Items->Add("������� ������� ����� (u)");
				ComboBox2->Items->Add("������������ ������� - AVOIRDUPOIS: ");
				ComboBox2->Items->Add("������� �����");
				ComboBox2->Items->Add("�������� �����");
				ComboBox2->Items->Add("������� �������");
				ComboBox2->Items->Add("�������� �������");
				ComboBox2->Items->Add("����� (st)");
				ComboBox2->Items->Add("���� (lb)");
				ComboBox2->Items->Add("����� (oz)");
				ComboBox2->Items->Add("������ (dr)");
				ComboBox2->Items->Add("���� (gr)");
				ComboBox2->Items->Add("�������� �������: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����� (ozt)");
				ComboBox2->Items->Add("���������");
				ComboBox2->Items->Add("���������� �����");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("������������ �������: ");
				ComboBox2->Items->Add("��������");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("��������");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("���������� �������� �������  - APOTHECARIES: ");
				ComboBox2->Items->Add("����");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�������");
				ComboBox2->Items->Add("����");

				ComboBox3->Items->Add("����������� �������: ");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("����� (�)");
				ComboBox3->Items->Add("���������� �� ����� (��)");
				ComboBox3->Items->Add("������� (�)");
				ComboBox3->Items->Add("��������� (��)");
				ComboBox3->Items->Add("������ �� ����� (�)");
				ComboBox3->Items->Add("����� (���)");
				ComboBox3->Items->Add("����� (�)");
				ComboBox3->Items->Add("���������� (��)");
				ComboBox3->Items->Add("���������� (��)");
				ComboBox3->Items->Add("���������� (���)");
				ComboBox3->Items->Add("������� ������� ����� (u)");
				ComboBox3->Items->Add("������������ ������� - AVOIRDUPOIS: ");
				ComboBox3->Items->Add("������� �����");
				ComboBox3->Items->Add("�������� �����");
				ComboBox3->Items->Add("������� �������");
				ComboBox3->Items->Add("�������� �������");
				ComboBox3->Items->Add("����� (st)");
				ComboBox3->Items->Add("���� (lb)");
				ComboBox3->Items->Add("����� (oz)");
				ComboBox3->Items->Add("������ (dr)");
				ComboBox3->Items->Add("���� (gr)");
				ComboBox3->Items->Add("�������� �������: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����� (ozt)");
				ComboBox3->Items->Add("���������");
				ComboBox3->Items->Add("���������� �����");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("������������ �������: ");
				ComboBox3->Items->Add("��������");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("��������");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("���������� �������� �������  - APOTHECARIES: ");
				ComboBox3->Items->Add("����");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�������");
				ComboBox3->Items->Add("����");
        }
		if(s=="�����")
        {
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("��� �������������");
				ComboBox2->Items->Add("��� ���������");
				ComboBox2->Items->Add("��� (365 ����)");
				ComboBox2->Items->Add("��� ����������");
				ComboBox2->Items->Add("����������� �����");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�����");
				ComboBox2->Items->Add("���");
				ComboBox2->Items->Add("������");
				ComboBox2->Items->Add("�������");
				ComboBox2->Items->Add("������������");
				ComboBox2->Items->Add("������������");
				ComboBox2->Items->Add("�����������");

				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("��� �������������");
				ComboBox3->Items->Add("��� ���������");
				ComboBox3->Items->Add("��� (365 ����)");
				ComboBox3->Items->Add("��� ����������");
				ComboBox3->Items->Add("����������� �����");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�����");
				ComboBox3->Items->Add("���");
				ComboBox3->Items->Add("������");
				ComboBox3->Items->Add("�������");
				ComboBox3->Items->Add("������������");
				ComboBox3->Items->Add("������������");
				ComboBox3->Items->Add("�����������");
        }
		if(s=="�����������")
        {
				ComboBox2->Items->Add("������ ������� (�C)");
				ComboBox2->Items->Add("������ ���������� (�F)");
				ComboBox2->Items->Add("������� (K)");
				ComboBox2->Items->Add("������ ������� (�Re)");

				ComboBox3->Items->Add("������ ������� (�C)");
				ComboBox3->Items->Add("������ ���������� (�F)");
				ComboBox3->Items->Add("������� (K)");
				ComboBox3->Items->Add("������ ������� (�Re)");
        }
		if(s=="����� ����������")
		{
				ComboBox2->Items->Add("�����: ");
				ComboBox2->Items->Add("�������� (EB)");
				ComboBox2->Items->Add("�������� (PB)");
				ComboBox2->Items->Add("�������� (TB)");
				ComboBox2->Items->Add("�������� (GB)");
				ComboBox2->Items->Add("�������� (MB)");
				ComboBox2->Items->Add("�������� (KB)");
				ComboBox2->Items->Add("���� (B)");
				ComboBox2->Items->Add("����: ");
				ComboBox2->Items->Add("������� (Ebit)");
				ComboBox2->Items->Add("������� (Pbit)");
				ComboBox2->Items->Add("������� (Tbit)");
				ComboBox2->Items->Add("������� (Gbit)");
				ComboBox2->Items->Add("������� (Mbit)");
				ComboBox2->Items->Add("������� (Kbit)");
				ComboBox2->Items->Add("��� (bit)");

				ComboBox3->Items->Add("�����: ");
				ComboBox3->Items->Add("�������� (EB)");
				ComboBox3->Items->Add("�������� (PB)");
				ComboBox3->Items->Add("�������� (TB)");
				ComboBox3->Items->Add("�������� (GB)");
				ComboBox3->Items->Add("�������� (MB)");
				ComboBox3->Items->Add("�������� (KB)");
				ComboBox3->Items->Add("���� (B)");
				ComboBox3->Items->Add("����: ");
				ComboBox3->Items->Add("������� (Ebit)");
				ComboBox3->Items->Add("������� (Pbit)");
				ComboBox3->Items->Add("������� (Tbit)");
				ComboBox3->Items->Add("������� (Gbit)");
				ComboBox3->Items->Add("������� (Mbit)");
				ComboBox3->Items->Add("������� (Kbit)");
				ComboBox3->Items->Add("��� (bit)");
        }
		if(s=="��������")
		{
				ComboBox2->Items->Add("��� � ������������ �������: ");
				ComboBox2->Items->Add("����������� � �������");
				ComboBox2->Items->Add("����������� � �������");
				ComboBox2->Items->Add("������� � �������");
				ComboBox2->Items->Add("����������� � ���");
				ComboBox2->Items->Add("����������� � ���");
				ComboBox2->Items->Add("������� � ���");
				ComboBox2->Items->Add("����������� ��������� ���� (hpM)");
				ComboBox2->Items->Add("�������� ��������� ���� (hpS)");
				ComboBox2->Items->Add("������������� ��������� ���� (hpE)");
				ComboBox2->Items->Add("�������������� ��������� ����");
				ComboBox2->Items->Add("������������ ��������� ���� (hpI)");
				ComboBox2->Items->Add("���������-���� ���� � ��� (���*�/�)");
				ComboBox2->Items->Add("������ � �������");
				ComboBox2->Items->Add("������ � ���");
				ComboBox2->Items->Add("��� � �������");
				ComboBox2->Items->Add("����������� ����� ����������");
				ComboBox2->Items->Add("������������� ������� ��: ");
				ComboBox2->Items->Add("�������� (���)");
				ComboBox2->Items->Add("�������� (���)");
				ComboBox2->Items->Add("���� (��)");
				ComboBox2->Items->Add("�����-����� (�-�)");

				ComboBox3->Items->Add("��� � ������������ �������: ");
				ComboBox3->Items->Add("����������� � �������");
				ComboBox3->Items->Add("����������� � �������");
				ComboBox3->Items->Add("������� � �������");
				ComboBox3->Items->Add("����������� � ���");
				ComboBox3->Items->Add("����������� � ���");
				ComboBox3->Items->Add("������� � ���");
				ComboBox3->Items->Add("����������� ��������� ���� (hpM)");
				ComboBox3->Items->Add("�������� ��������� ���� (hpS)");
				ComboBox3->Items->Add("������������� ��������� ���� (hpE)");
				ComboBox3->Items->Add("�������������� ��������� ����");
				ComboBox3->Items->Add("������������ ��������� ���� (hpI)");
				ComboBox3->Items->Add("���������-���� ���� � ��� (���*�/�)");
				ComboBox3->Items->Add("������ � �������");
				ComboBox3->Items->Add("������ � ���");
				ComboBox3->Items->Add("��� � �������");
				ComboBox3->Items->Add("����������� ����� ����������");
				ComboBox3->Items->Add("������������� ������� ��: ");
				ComboBox3->Items->Add("�������� (���)");
				ComboBox3->Items->Add("�������� (���)");
				ComboBox3->Items->Add("���� (��)");
				ComboBox3->Items->Add("�����-����� (�-�)");
        }


		if(s=="�������� ������")
		{
			  ComboBox2->Items->Add("������� �� ���� �����: ");
			  ComboBox2->Items->Add("�������� � ������� (TB/s)");
			  ComboBox2->Items->Add("�������� � ������� (GB/s)");
			  ComboBox2->Items->Add("�������� � ������� (MB/s)");
			  ComboBox2->Items->Add("�������� � ������� (KB/s)");
			  ComboBox2->Items->Add("���� � ������� (B/s)");
			  ComboBox2->Items->Add("������� ������� �������� �������� ������: ");
			  ComboBox2->Items->Add("������� � ������� (Tbps)");
			  ComboBox2->Items->Add("������� � ������� (Gbps)");
			  ComboBox2->Items->Add("������� � ������� (Mbps)");
			  ComboBox2->Items->Add("������� � ������� (Kbps)");
			  ComboBox2->Items->Add("��� � ������� (bps)");

			  ComboBox3->Items->Add("������� �� ���� �����: ");
			  ComboBox3->Items->Add("�������� � ������� (TB/s)");
			  ComboBox3->Items->Add("�������� � ������� (GB/s)");
			  ComboBox3->Items->Add("�������� � ������� (MB/s)");
			  ComboBox3->Items->Add("�������� � ������� (KB/s)");
			  ComboBox3->Items->Add("���� � ������� (B/s)");
			  ComboBox3->Items->Add("������� ������� �������� �������� ������: ");
			  ComboBox3->Items->Add("������� � ������� (Tbps)");
			  ComboBox3->Items->Add("������� � ������� (Gbps)");
			  ComboBox3->Items->Add("������� � ������� (Mbps)");
			  ComboBox3->Items->Add("������� � ������� (Kbps)");
			  ComboBox3->Items->Add("��� � ������� (bps)");
		}

		if(s=="���������")
		{
			ComboBox2->Items->Add("����������� �������: ");
			ComboBox2->Items->Add("����� �� �������� (�/�^3)");
			ComboBox2->Items->Add("��������� �� �������� (��/�^3)");
			ComboBox2->Items->Add("����� �� �������� (�/�^3)");
			ComboBox2->Items->Add("���������� �� �������� (��/�^3)");
			ComboBox2->Items->Add("��������� �� ���� (��/�)");
			ComboBox2->Items->Add("����� �� ���� (�/�)");
			ComboBox2->Items->Add("���������� �� ���� (��/�)");
			ComboBox2->Items->Add("��������� �� ���������� ��������� (��/��^3)");
			ComboBox2->Items->Add("����� �� ���������� ��������� (�/��^3)");
			ComboBox2->Items->Add("���������� �� ���������� ��������� (��/��^3)");
			ComboBox2->Items->Add("��������� �� ��������� (��/��)");
			ComboBox2->Items->Add("����� �� ��������� (�/��)");
			ComboBox2->Items->Add("���������� � ������������ �������: ");
			ComboBox2->Items->Add("����� �� ���������� ��� (lb/ft^3)");
			ComboBox2->Items->Add("����� �� ���������� ���� (lb/in^3)");
			ComboBox2->Items->Add("����� �� ������ ��� (lb/gal)");
			ComboBox2->Items->Add("����� �� ���������� ���� (oz/in^3)");
			ComboBox2->Items->Add("����� �� ������ ��� (oz/gal)");

			ComboBox3->Items->Add("����������� �������: ");
			ComboBox3->Items->Add("����� �� �������� (�/�^3)");
			ComboBox3->Items->Add("��������� �� �������� (��/�^3)");
			ComboBox3->Items->Add("����� �� �������� (�/�^3)");
			ComboBox3->Items->Add("���������� �� �������� (��/�^3)");
			ComboBox3->Items->Add("��������� �� ���� (��/�)");
			ComboBox3->Items->Add("����� �� ���� (�/�)");
			ComboBox3->Items->Add("���������� �� ���� (��/�)");
			ComboBox3->Items->Add("��������� �� ���������� ��������� (��/��^3)");
			ComboBox3->Items->Add("����� �� ���������� ��������� (�/��^3)");
			ComboBox3->Items->Add("���������� �� ���������� ��������� (��/��^3)");
			ComboBox3->Items->Add("��������� �� ��������� (��/��)");
			ComboBox3->Items->Add("����� �� ��������� (�/��)");
			ComboBox3->Items->Add("���������� � ������������ �������: ");
			ComboBox3->Items->Add("����� �� ���������� ��� (lb/ft^3)");
			ComboBox3->Items->Add("����� �� ���������� ���� (lb/in^3)");
			ComboBox3->Items->Add("����� �� ������ ��� (lb/gal)");
			ComboBox3->Items->Add("����� �� ���������� ���� (oz/in^3)");
			ComboBox3->Items->Add("����� �� ������ ��� (oz/gal)");
		}

		if(s=="�������")
		{
			 ComboBox2->Items->Add("��� � ������������ �������: ");
			 ComboBox2->Items->Add("����������� (Mcal)");
			 ComboBox2->Items->Add("����������� (����)");
			 ComboBox2->Items->Add("������� (���)");
			 ComboBox2->Items->Add("�������� ��� (���*���)");
			 ComboBox2->Items->Add("���� ��� (��*���)");
			 ComboBox2->Items->Add("���� ������� (��*���)");
			 ComboBox2->Items->Add("���");
			 ComboBox2->Items->Add("������������� (eV)");
			 ComboBox2->Items->Add("������������� ������� ��: ");
			 ComboBox2->Items->Add("���������� (���)");
			 ComboBox2->Items->Add("���������� (���)");
			 ComboBox2->Items->Add("������ (��)");
			 ComboBox2->Items->Add("��������� �������");
			 ComboBox2->Items->Add("��� ��������� ���� (hp*h)");
			 ComboBox2->Items->Add("����-��������� (mkg)");

			 ComboBox3->Items->Add("��� � ������������ �������: ");
			 ComboBox3->Items->Add("����������� (Mcal)");
			 ComboBox3->Items->Add("����������� (����)");
			 ComboBox3->Items->Add("������� (���)");
			 ComboBox3->Items->Add("�������� ��� (���*���)");
			 ComboBox3->Items->Add("���� ��� (��*���)");
			 ComboBox3->Items->Add("���� ������� (��*���)");
			 ComboBox3->Items->Add("���");
			 ComboBox3->Items->Add("������������� (eV)");
			 ComboBox3->Items->Add("������������� ������� ��: ");
			 ComboBox3->Items->Add("���������� (���)");
			 ComboBox3->Items->Add("���������� (���)");
			 ComboBox3->Items->Add("������ (��)");
			 ComboBox3->Items->Add("��������� �������");
			 ComboBox3->Items->Add("��� ��������� ���� (hp*h)");
			 ComboBox3->Items->Add("����-��������� (mkg)");
		}

		if(s=="����")
		{
			 ComboBox2->Items->Add("������� ��: ");
			 ComboBox2->Items->Add("���������� (��)");
			 ComboBox2->Items->Add("���������� (��)");
			 ComboBox2->Items->Add("���������� (��)");
			 ComboBox2->Items->Add("������ (�)");
			 ComboBox2->Items->Add("����������� (��)");
			 ComboBox2->Items->Add("����������� (��)");
			 ComboBox2->Items->Add("���������� ���������� �������: ");
			 ComboBox2->Items->Add("���-���� (kipf)");
			 ComboBox2->Items->Add("�����-���� (tnf)");
			 ComboBox2->Items->Add("����-���� (lbf)");
			 ComboBox2->Items->Add("�����-���� (ozf)");
			 ComboBox2->Items->Add("����������� ������� ������, �����: ");
			 ComboBox2->Items->Add("�����-���� (��)");
			 ComboBox2->Items->Add("�������� (kp)");
			 ComboBox2->Items->Add("���������-���� (���)");
			 ComboBox2->Items->Add("�����-���� (Gf)");
			 ComboBox2->Items->Add("�����-���� (��)");
			 ComboBox2->Items->Add("����������-���� (mGf)");
			 ComboBox2->Items->Add("������-���� (gf)");
			 ComboBox2->Items->Add("����������-���� (���)");

			 ComboBox3->Items->Add("������� ��: ");
			 ComboBox3->Items->Add("���������� (��)");
			 ComboBox3->Items->Add("���������� (��)");
			 ComboBox3->Items->Add("���������� (��)");
			 ComboBox3->Items->Add("������ (�)");
			 ComboBox3->Items->Add("����������� (��)");
			 ComboBox3->Items->Add("����������� (��)");
			 ComboBox3->Items->Add("���������� ���������� �������: ");
			 ComboBox3->Items->Add("���-���� (kipf)");
			 ComboBox3->Items->Add("�����-���� (tnf)");
			 ComboBox3->Items->Add("����-���� (lbf)");
			 ComboBox3->Items->Add("�����-���� (ozf)");
			 ComboBox3->Items->Add("����������� ������� ������, �����: ");
			 ComboBox3->Items->Add("�����-���� (��)");
			 ComboBox3->Items->Add("�������� (kp)");
			 ComboBox3->Items->Add("���������-���� (���)");
			 ComboBox3->Items->Add("�����-���� (Gf)");
			 ComboBox3->Items->Add("�����-���� (��)");
			 ComboBox3->Items->Add("����������-���� (mGf)");
			 ComboBox3->Items->Add("������-���� (gf)");
			 ComboBox3->Items->Add("����������-���� (���)");
		}

		if(s=="������� ����")
		{
			 ComboBox2->Items->Add("����������");
			 ComboBox2->Items->Add("��������");
			 ComboBox2->Items->Add("������ (���)");
			 ComboBox2->Items->Add("������ (�)");
			 ComboBox2->Items->Add("���� (grad)");
			 ComboBox2->Items->Add("������ (')");
			 ComboBox2->Items->Add("������� ('')");
			 ComboBox2->Items->Add("����");

			 ComboBox3->Items->Add("����������");
			 ComboBox3->Items->Add("��������");
			 ComboBox3->Items->Add("������ (���)");
			 ComboBox3->Items->Add("������ (�)");
			 ComboBox3->Items->Add("���� (grad)");
			 ComboBox3->Items->Add("������ (')");
			 ComboBox3->Items->Add("������� ('')");
			 ComboBox3->Items->Add("����");
		}

		if(s=="������� ��������")
		{
			 ComboBox2->Items->Add("�������: ");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �����");
			 ComboBox2->Items->Add("������ � ���");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �������");
			 ComboBox2->Items->Add("�������: ");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �����");
			 ComboBox2->Items->Add("������ � ���");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �������");
			 ComboBox2->Items->Add("�������: ");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �����");
			 ComboBox2->Items->Add("������ � ���");
			 ComboBox2->Items->Add("������ � ������");
			 ComboBox2->Items->Add("������ � �������");

			 ComboBox3->Items->Add("�������: ");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �����");
			 ComboBox3->Items->Add("������ � ���");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �������");
			 ComboBox3->Items->Add("�������: ");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �����");
			 ComboBox3->Items->Add("������ � ���");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �������");
			 ComboBox3->Items->Add("�������: ");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �����");
			 ComboBox3->Items->Add("������ � ���");
			 ComboBox3->Items->Add("������ � ������");
			 ComboBox3->Items->Add("������ � �������");
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox2Select(TObject *Sender)
{
        cb2=ComboBox2->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox3Select(TObject *Sender)
{
        cb3=ComboBox3->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		float a,b;
		a=StrToFloat(Edit1->Text);
		//KM
		if((cb2=="�������� (��)")&&(cb3=="�������� (��)"))
		{
				a=a;
		}
		if((cb2=="�������� (��)")&&(cb3=="���� (�)"))
        {
				a*=1000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�������� (��)"))
        {
				a*=10000;
        }
		if((cb2=="�������� (��)")&&(cb3=="��������� (��)"))
        {
				a*=100000;
        }
		if((cb2=="�������� (��)")&&(cb3=="��������� (��)"))
        {
				a*=1000000;
        }
		if((cb2=="�������� (��)")&&(cb3=="��������� (���)"))
        {
				a*=1000000000;
        }
		if((cb2=="�������� (��)")&&(cb3=="�������� (��)"))
		{
				a*=1000000000000;
        }
		if((cb2=="�������� (��)")&&(cb3=="�������� (�)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���/���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���� (mi)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="��� (yd)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="��� (ft)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����/����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����/������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����/������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���� (in)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������/�����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� ������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����� ������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� ������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� ����/���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� ����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="���������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����/������� ������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� ��������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�������� ���"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="��������������� �������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�������� ������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�������� �������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����� (pt)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������� (px)"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="����"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="������"))
		{
				a*=10000000000000;
		}
		if((cb2=="�������� (��)")&&(cb3=="�����"))
		{
				a*=10000000000000;
		}



        //CM

		if((cb2=="cm")&&(cb3=="�������� (��)"))
        {
                a*=10;
        }
        if((cb2=="cm")&&(cb3=="dm"))
        {
                a/=10;
        }
        if((cb2=="cm")&&(cb3=="m"))
        {
                a/=100;
        }
        if((cb2=="cm")&&(cb3=="km"))
        {
                a/=100000;
        }
		if((cb2=="cm")&&(cb3=="inch"))
		{
				a/=2.54;
		}
		if((cb2=="cm")&&(cb3=="ft"))
		{
				a/=30.48;
		}
		if((cb2=="cm")&&(cb3=="yd"))
		{
				a/=91.44;
		}
		if((cb2=="cm")&&(cb3=="mile"))
		{
                a/=160934.4;
        }

       //DM

		if((cb2=="dm")&&(cb3=="�������� (��)"))
        {
                a*=100;
        }
        if((cb2=="dm")&&(cb3=="cm"))
        {
                a*=10;
        }
        if((cb2=="dm")&&(cb3=="m"))
        {
                a/=10;
        }
        if((cb2=="dm")&&(cb3=="km"))
        {
                a/=10000;
        }
        if((cb2=="dm")&&(cb3=="inch"))
        {
                a/=0.254;
        }
        if((cb2=="dm")&&(cb3=="ft"))
        {
                a/=3.048;
        }
        if((cb2=="dm")&&(cb3=="yd"))
        {
                a/=9.144;
        }
        if((cb2=="dm")&&(cb3=="mile"))
        {
                a/=16093.44;
        }


        //M
		if((cb2=="m")&&(cb3=="�������� (��)"))
        {
                a*=1000;
        }
        if((cb2=="m")&&(cb3=="cm"))
        {
                a*=100;
        }
        if((cb2=="m")&&(cb3=="dm"))
        {
                a*=10;
        }
        if((cb2=="m")&&(cb3=="km"))
        {
                a/=1000;
        }
        if((cb2=="m")&&(cb3=="inch"))
        {
                a*=39.37;
        }
        if((cb2=="m")&&(cb3=="ft"))
        {
                a*=3.281;
        }
        if((cb2=="m")&&(cb3=="yd"))
        {
                a*=1.094;
        }
        if((cb2=="m")&&(cb3=="mile"))
        {
                a/=1609.344;
        }


        //km

		if((cb2=="km")&&(cb3=="�������� (��)"))
        {
                a*=1000000;
        }
        if((cb2=="km")&&(cb3=="cm"))
        {
                a*=100000;
        }
        if((cb2=="km")&&(cb3=="dm"))
        {
                a*=10000;
        }
        if((cb2=="km")&&(cb3=="m"))
        {
                a*=1000;
        }
        if((cb2=="km")&&(cb3=="inch"))
        {
                a*=39370.079;
        }
        if((cb2=="km")&&(cb3=="ft"))
        {
                a*=3280.84;
        }
        if((cb2=="km")&&(cb3=="yd"))
        {
                a*=1093.613;
        }
        if((cb2=="km")&&(cb3=="mile"))
        {
                a/=1.609;
        }


        //inch

		if((cb2=="inch")&&(cb3=="�������� (��)"))
        {
                a*=25.4;
        }
        if((cb2=="inch")&&(cb3=="cm"))
        {
                a*=2.54;
        }
        if((cb2=="inch")&&(cb3=="dm"))
        {
                a*=0.254;
        }
        if((cb2=="inch")&&(cb3=="m"))
        {
                a/=39.37;
        }
        if((cb2=="inch")&&(cb3=="km"))
        {
                a/=39370.079;
        }
        if((cb2=="inch")&&(cb3=="ft"))
        {
                a/=12;
        }
        if((cb2=="icnh")&&(cb3=="yd"))
        {
                a/=36;
        }
        if((cb2=="inch")&&(cb3=="mile"))
        {
                a/=63360;
        }

        //FT


		if((cb2=="ft")&&(cb3=="�������� (��)"))
        {
                a*=304.8;
        }
        if((cb2=="ft")&&(cb3=="cm"))
        {
                a*=30.48;
        }
        if((cb2=="ft")&&(cb3=="dm"))
        {
                a*=3.048;
        }
        if((cb2=="ft")&&(cb3=="m"))
        {
                a/=3.281;
        }
        if((cb2=="ft")&&(cb3=="km"))
        {
                a/=3280.84;
        }
        if((cb2=="ft")&&(cb3=="inch"))
        {
                a*=12;
        }
        if((cb2=="ft")&&(cb3=="yd"))
        {
                a/=3;
        }
        if((cb2=="ft")&&(cb3=="mile"))
        {
                a/=5280;
        }

        //YD


		if((cb2=="yd")&&(cb3=="�������� (��)"))
        {
                a*=914.4;
        }
        if((cb2=="yd")&&(cb3=="cm"))
        {
                a*=91.44;
        }
        if((cb2=="yd")&&(cb3=="dm"))
        {
                a*=9.144;
        }
        if((cb2=="yd")&&(cb3=="m"))
        {
                a/=1.094;
        }
        if((cb2=="yd")&&(cb3=="km"))
        {
                a/=1093.613;
        }
        if((cb2=="yd")&&(cb3=="inch"))
        {
                a*=36;
        }
        if((cb2=="yd")&&(cb3=="ft"))
        {
                a*=3;
        }
        if((cb2=="yd")&&(cb3=="mile"))
        {
                a/=1760;
        }


        //MILE


        if((cb2=="mile")&&(cb3=="�������� (��)"))
        {
                a*=1609344;
        }
        if((cb2=="mile")&&(cb3=="cm"))
        {
                a*=160934.4;
        }
        if((cb2=="mile")&&(cb3=="dm"))
        {
                a*=16093.44;
        }
        if((cb2=="mile")&&(cb3=="m"))
        {
                a*=1609.344;
        }
        if((cb2=="mile")&&(cb3=="km"))
        {
                a*=1.609;
        }
        if((cb2=="mile")&&(cb3=="inch"))
        {
                a*=63360;
        }
        if((cb2=="mile")&&(cb3=="ft"))
        {
                a*=5280;
        }
        if((cb2=="mile")&&(cb3=="yd"))
        {
                a*=1760;
        }

        // SQUARE
        //cm^2

        if((cb2=="cm^2")&&(cb3=="m^2"))
        {
                a/=10000;
        }
        if((cb2=="cm^2")&&(cb3=="km^2"))
        {
                a/=10000000000;
        }
        if((cb2=="cm^2")&&(cb3=="ft^2"))
        {
                a/=929.03;
        }
        if((cb2=="cm^2")&&(cb3=="yd^2"))
        {
                a/=8361.274;
        }

        //m^2

        if((cb2=="m^2")&&(cb3=="cm^2"))
        {
                a*=10000;
        }
        if((cb2=="m^2")&&(cb3=="km^2"))
        {
                a/=1000000;
        }
        if((cb2=="m^2")&&(cb3=="ft^2"))
        {
                a*=10.764;
        }
        if((cb2=="m^2")&&(cb3=="yd^2"))
        {
                a*=1.196;
        }


        //km^2

        if((cb2=="km^2")&&(cb3=="cm^2"))
        {
                a*=10000000000;
        }
        if((cb2=="km^2")&&(cb3=="m^2"))
        {
                a*=1000000;
        }
        if((cb2=="km^2")&&(cb3=="ft^2"))
        {
                a*=10760000;
        }
        if((cb2=="km^2")&&(cb3=="yd^2"))
        {
                a*=1196000;
        }


        //ft^2

        if((cb2=="ft^2")&&(cb3=="cm^2"))
        {
                a*=929.03;
        }
        if((cb2=="ft^2")&&(cb3=="m^2"))
        {
                a/=10.764;
        }
        if((cb2=="ft^2")&&(cb3=="km^2"))
        {
                a/=10760000;
        }
        if((cb2=="ft^2")&&(cb3=="yd^2"))
        {
                a/=9;
        }

        //yd^2

        if((cb2=="yd^2")&&(cb3=="cm^2"))
        {
                a*=8361.274;
        }
        if((cb2=="yd^2")&&(cb3=="m^2"))
        {
                a/=1.196;
        }
        if((cb2=="yd^2")&&(cb3=="km^2"))
        {
                a/=1196000;
        }
        if((cb2=="yd^2")&&(cb3=="ft^2"))
        {
                a*=9;
        }

        //VOLUME

        //ML

        if((cb2=="ml")&&(cb3=="l"))
        {
                a/=1000;
        }
        if((cb2=="ml")&&(cb3=="cm^3"))
        {
                a*=1;
        }
        if((cb2=="ml")&&(cb3=="m^3"))
        {
                a/=1000000;
        }
        if((cb2=="ml")&&(cb3=="ft^3"))
        {
                a/=28316.847;
        }
        if((cb2=="ml")&&(cb3=="yd^3"))
        {
                a/=1310000;
        }



        Edit2->Text=a;
}
//---------------------------------------------------------------------------
