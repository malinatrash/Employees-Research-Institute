//---------------------------------------------------------------------------

#pragma hdrstop

#include "DataBank.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


static class DataBank {
	public static int size = 0;
	public static int currentEmployee = 0;

    public static struct Employee {

	AnsiString fullName;
	int academicDegree;
	AnsiString post;
	int age;
	AnsiString nameOfCurrentProject;
	};

	public static Employee* employees = new Employee[size];
};
