//---------------------------------------------------------------------------

#ifndef AddingEmployeeH
#define AddingEmployeeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "cspin.h"
#include "main.h"
//---------------------------------------------------------------------------
class TAddingEmployeeForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Name;
	TEdit *Post;
	TEdit *Project;
	TCSpinEdit *age;
	TCSpinEdit *degree;
	TButton *Button3;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAddingEmployeeForm(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TAddingEmployeeForm *AddingEmployeeForm;
//---------------------------------------------------------------------------
#endif
