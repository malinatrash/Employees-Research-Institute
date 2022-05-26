//---------------------------------------------------------------------------

#ifndef SelectActionH
#define SelectActionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TActionChoose : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TActionChoose(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TActionChoose *ActionChoose;
//---------------------------------------------------------------------------
#endif
