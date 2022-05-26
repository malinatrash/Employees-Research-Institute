//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>


//---------------------------------------------------------------------------
USEFORM("main.cpp", MainMenuForm);
USEFORM("NumberEmployee.cpp", EmployeeNumber);
USEFORM("YouSure.cpp", Sure);
USEFORM("AddingEmployee.cpp", AddingEmployeeForm);
USEFORM("EmployeeList.cpp", ListEmployee);
USEFORM("SelectAction.cpp", ActionChoose);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
Application->CreateForm(__classid(TMainMenuForm), &MainMenuForm);
		Application->CreateForm(__classid(TAddingEmployeeForm), &AddingEmployeeForm);
		Application->CreateForm(__classid(TListEmployee), &ListEmployee);
		Application->CreateForm(__classid(TEmployeeNumber), &EmployeeNumber);
		Application->CreateForm(__classid(TSure), &Sure);
		Application->CreateForm(__classid(TActionChoose), &ActionChoose);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}


//---------------------------------------------------------------------------
