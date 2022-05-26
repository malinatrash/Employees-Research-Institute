//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ChooseFileName.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTypeName *TypeName;
//---------------------------------------------------------------------------
__fastcall TTypeName::TTypeName(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
