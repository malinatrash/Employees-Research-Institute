//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SelectAction.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TActionChoose *ActionChoose;
//---------------------------------------------------------------------------
__fastcall TActionChoose::TActionChoose(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TActionChoose::Button2Click(TObject *Sender)
{
	MainMenuForm->uploadFile();
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TActionChoose::Button3Click(TObject *Sender)
{
	MainMenuForm->SaveChanges();
	Close();
}
//---------------------------------------------------------------------------




