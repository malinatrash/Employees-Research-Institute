//---------------------------------------------------------------------------

#ifndef NumberEmployeeH
#define NumberEmployeeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cspin.h"
//---------------------------------------------------------------------------
class TEmployeeNumber : public TForm
{
__published:	// IDE-managed Components
	TCSpinEdit *CSpinEdit1;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEmployeeNumber(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEmployeeNumber *EmployeeNumber;
//---------------------------------------------------------------------------
#endif
