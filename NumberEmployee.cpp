//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NumberEmployee.h"
#include "EmployeeList.h"
#include "main.h"
#include "AddingEmployee.h"
#include "YouSure.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
TEmployeeNumber *EmployeeNumber;
//---------------------------------------------------------------------------
__fastcall TEmployeeNumber::TEmployeeNumber(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEmployeeNumber::Button1Click(TObject *Sender)
{
	MainMenuForm->EnterNumber();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TEmployeeNumber::Button2Click(TObject *Sender)
{
	AddingEmployeeForm->Name->Text = "Name";
	AddingEmployeeForm->degree->Value = 1;
	AddingEmployeeForm->Post->Text = "Post";
	AddingEmployeeForm->age->Value = 18;
	AddingEmployeeForm->Project->Text = "Project";
	AddingEmployeeForm->Show();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TEmployeeNumber::Button3Click(TObject *Sender)
{
    Sure->Show();
	Close();
}
//---------------------------------------------------------------------------


