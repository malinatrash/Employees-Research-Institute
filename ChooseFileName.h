//---------------------------------------------------------------------------

#ifndef ChooseFileNameH
#define ChooseFileNameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TTypeName : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
private:	// User declarations
public:		// User declarations
	__fastcall TTypeName(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTypeName *TypeName;
//---------------------------------------------------------------------------
#endif
