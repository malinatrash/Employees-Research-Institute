//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TMainMenuForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Button1;
	TButton *Button3;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TLabel *Label2;
	TToolBar *ToolBar1;
	TButton *Button9;
	TSaveDialog *SaveDialog1;
	TOpenDialog *OpenDialog1;
	TButton *Button2;
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button2Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TMainMenuForm(TComponent* Owner);
	void __fastcall addEmployee();
	void __fastcall EnterNumber();
	void __fastcall changeEmployeeData();
	void __fastcall deleteEmployee();
	void __fastcall uploadFile();
	void __fastcall SaveChanges();
	void __fastcall calculatePrecentage();
	void __fastcall printListYoungEmployeess();
	void __fastcall sort(int type);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainMenuForm *MainMenuForm;
//---------------------------------------------------------------------------
#endif
