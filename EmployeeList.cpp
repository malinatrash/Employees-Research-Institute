//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EmployeeList.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TListEmployee *ListEmployee;
//---------------------------------------------------------------------------
__fastcall TListEmployee::TListEmployee(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button1Click(TObject *Sender)
{
	Close();
	MainMenuForm->sort(1);
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button8Click(TObject *Sender)
{
	MainMenuForm->calculatePrecentage();
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button6Click(TObject *Sender) {
	ListEmployee->Close();
	MainMenuForm->printListYoungEmployeess();
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button4Click(TObject *Sender)
{
	Close();
	MainMenuForm->sort(4);
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button2Click(TObject *Sender)
{
	Close();
	MainMenuForm->sort(2);

}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button3Click(TObject *Sender)
{
	Close();
	MainMenuForm->sort(3);
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button5Click(TObject *Sender)
{
	Close();
	MainMenuForm->sort(5);
}
//---------------------------------------------------------------------------

void __fastcall TListEmployee::Button7Click(TObject *Sender)
{
    Close();
	MainMenuForm->sort(5);
}
//---------------------------------------------------------------------------

