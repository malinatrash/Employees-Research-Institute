//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#pragma hdrstop

#include "AddingEmployee.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
#include <main.h>
TAddingEmployeeForm *AddingEmployeeForm;
int size;
int currentEmployee;

struct Employee {
	AnsiString fullName;
	int academicDegree;
	AnsiString post;
	int age;
	AnsiString nameOfCurrentProject;
};

Employee *employees;
//---------------------------------------------------------------------------
__fastcall TAddingEmployeeForm::TAddingEmployeeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddingEmployeeForm::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------


void __fastcall TAddingEmployeeForm::Button1Click(TObject *Sender)
{
	MainMenuForm->addEmployee();

	Close();
}
//---------------------------------------------------------------------------







void __fastcall TAddingEmployeeForm::Button3Click(TObject *Sender)
{
	MainMenuForm->changeEmployeeData();

	Close();
}
//---------------------------------------------------------------------------

