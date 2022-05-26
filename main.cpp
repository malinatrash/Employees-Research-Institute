//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include <windows.h>
#pragma hdrstop

#include "main.h"
#include "AddingEmployee.h"
#include "EmployeeList.h"
#include "NumberEmployee.h"
#include "YouSure.h"
#include "SelectAction.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainMenuForm *MainMenuForm;
//---------------------------------------------------------------------------
extern int size = 0;
bool saved = false;
extern struct Employee {

	AnsiString fullName;
	int academicDegree;
	AnsiString post;
	int age;
	AnsiString nameOfCurrentProject;

};
extern std::vector<Employee> employeeList(size);

void __fastcall TMainMenuForm::sort(int type) {
	ListEmployee->StringGrid1->Cells[0][0] = "#";
	ListEmployee->StringGrid1->Cells[1][0] = "Full name";
	ListEmployee->StringGrid1->Cells[2][0] = "Academic degree";
	ListEmployee->StringGrid1->Cells[3][0] = "Post";
	ListEmployee->StringGrid1->Cells[4][0] = "Age";
	ListEmployee->StringGrid1->Cells[5][0] = "Name of project";
	ListEmployee->StringGrid1->ColCount = 6;
	ListEmployee->StringGrid1->RowCount = employeeList.size() + 1;

	int counter = 1;

	switch (type) {
		case 1: {
			for (char name = 'A'; name <= 'Z'; ++name) {
				for (int i = 0; i < employeeList.size(); i++) {
					if (employeeList[i].fullName[1] == name) {
                        ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
						ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
						ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
						ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
						ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
						counter += 1;
					}
                }
            }
		}
		case 2: {
			for (int degree = 1; degree < 5; degree++) {
				for (int i = 0; i < employeeList.size(); i++) {
					if (employeeList[i].academicDegree == degree) {
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
						ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
						ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
						ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
						ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
						counter += 1;
					}
				}
			}
		}
		case 3: {
			for (char post = 'a'; post <= 'z'; ++post) {
				for (int i = 0; i < employeeList.size(); i++) {
					if (employeeList[i].post[1] == post) {
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
						ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
						ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
						ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
						ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
						counter += 1;
					}
				}
			}
		}
		case 4: {
			for (int age = 18; age < 100; age++) {
				for (int i = 0; i < employeeList.size(); i++) {
					if (employeeList[i].age == age) {
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
						ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
						ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
						ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
						ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
						counter += 1;
					}
				}
			}
		}                                                    
		case 5: {
			for (char Project = 'A'; Project <= 'Z'; ++Project) {
				for (int i = 0; i < employeeList.size(); i++) {
					if (employeeList[i].nameOfCurrentProject[1] == Project) {
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
						ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
						ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
						ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
						ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
						ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
						counter += 1;
					}
				}
			}
		}
	}
	ListEmployee->Show();
}

void __fastcall TMainMenuForm::printListYoungEmployeess() {
	ListEmployee->StringGrid1->Cells[0][0] = "#";
	ListEmployee->StringGrid1->Cells[1][0] = "Full name";
	ListEmployee->StringGrid1->Cells[2][0] = "Academic degree";
	ListEmployee->StringGrid1->Cells[3][0] = "Post";
	ListEmployee->StringGrid1->Cells[4][0] = "Age";
	ListEmployee->StringGrid1->Cells[5][0] = "Name of project";
	ListEmployee->StringGrid1->ColCount = 6;
	int count = 1;
	for (int i = 0; i < employeeList.size(); i++) {
		if (employeeList[i].age < 30) {
			count += 1;
		}
	}
	int counter  = 1;
	ListEmployee->StringGrid1->RowCount = count;
	for (int i = 0; i < employeeList.size(); i++) {
		if (employeeList[i].age < 30) {
			ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
			ListEmployee->StringGrid1->Cells[0][counter] = AnsiString(i + 1);
			ListEmployee->StringGrid1->Cells[1][counter] = employeeList[i].fullName;
			ListEmployee->StringGrid1->Cells[2][counter] = AnsiString(employeeList[i].academicDegree);
			ListEmployee->StringGrid1->Cells[3][counter] = employeeList[i].post;
			ListEmployee->StringGrid1->Cells[4][counter] = AnsiString(employeeList[i].age);
			ListEmployee->StringGrid1->Cells[5][counter] = employeeList[i].nameOfCurrentProject;
			counter += 1;
		}
    }
	ListEmployee->Show();

}

void __fastcall TMainMenuForm::calculatePrecentage() {
	int summOfDegree = 0;
	float fisrtDegree = 0;
	float secondDegree = 0;
	float fourthDegree = 0;
	float thirdDegree = 0;
	for (int i = 0; i < employeeList.size(); i++) {
		summOfDegree += 1;
		if (employeeList[i].academicDegree == 1) {
			fisrtDegree += 1;
		} else if (employeeList[i].academicDegree == 2) {
			secondDegree += 1;
		} else if (employeeList[i].academicDegree == 3) {
			thirdDegree += 1;
		} else {
			fourthDegree += 1;
		}
	}
	fisrtDegree = fisrtDegree / summOfDegree * 100;
	secondDegree = secondDegree / summOfDegree * 100;
	thirdDegree = thirdDegree / summOfDegree * 100;
	fourthDegree= fourthDegree / summOfDegree * 100;

	AnsiString message = "Bachelor - ";
	message+= AnsiString(fisrtDegree);
	message+= AnsiString("%\n");

	message+= "Master - ";
	message+= AnsiString(secondDegree);
	message+= AnsiString("%\n");

	message+= "Candidate of Sciences - ";
	message+= AnsiString(thirdDegree);
	message+= AnsiString("%\n");

	message+= "Doctor of Sciences - ";
	message+= AnsiString(fourthDegree);
	message+= AnsiString("%\n");


	ShowMessage(message);
}

void __fastcall TMainMenuForm::uploadFile() {

	TStringList *file = new TStringList;
	if( OpenDialog1->Execute()) {
		file->LoadFromFile(OpenDialog1->FileName);
		TStringList *line = new TStringList;
		line->Delimiter = '|';


		for (int i = 0; i < file->Count; i++) {
			line->DelimitedText = file->Strings[i];

			int count = 1;
			Employee *empl = new Employee;

			for (int j = 0; j < line->Count; j++) {

				if (count == 1) {
					empl->fullName = line->Strings[j];
				} else if (count == 2) {
					empl->academicDegree = StrToInt(line->Strings[j]);
				} else if (count == 3) {
					empl->post = line->Strings[j];
				} else if (count == 4) {
					empl->age = StrToInt(line->Strings[j]);
				} else if (count == 5) {
					empl->nameOfCurrentProject = line->Strings[j];
				}
				count += 1;
			}
			employeeList.push_back(*empl);
		}
	}
}

void __fastcall TMainMenuForm::SaveChanges() {
	if (SaveDialog1->Execute()) {
		TStringList *list = new TStringList;
		for (int i = 0; i < employeeList.size(); i++) {
			AnsiString person = employeeList[i].fullName + "|" + AnsiString(employeeList[i].academicDegree) + "|" + employeeList[i].post + "|" + AnsiString(employeeList[i].age) + "|" + employeeList[i].nameOfCurrentProject;
			list->Add(person);
		}
		list->SaveToFile(SaveDialog1->FileName);
	}
	saved = true;
}

void __fastcall TMainMenuForm::changeEmployeeData() {
	int choose;
	choose = EmployeeNumber->CSpinEdit1->Value - 1;

	if (choose < 0 || choose > employeeList.size()) {
		ShowMessage("This employee is not exists!");
		return;
	}

	employeeList[choose].fullName = AddingEmployeeForm->Name->Text;
	employeeList[choose].academicDegree = AddingEmployeeForm->degree->Value;
	employeeList[choose].post = AddingEmployeeForm->Post->Text;
	employeeList[choose].age = AddingEmployeeForm->age->Value;
	employeeList[choose].nameOfCurrentProject = AddingEmployeeForm->Project->Text;
}

void __fastcall TMainMenuForm::addEmployee() {

	Employee *empl = new Employee;
	empl->fullName = AddingEmployeeForm->Name->Text;
	empl->academicDegree = AddingEmployeeForm->degree->Value;
	empl->post = AddingEmployeeForm->Post->Text;
	empl->age = AddingEmployeeForm->age->Value;
	empl->nameOfCurrentProject = AddingEmployeeForm->Project->Text;

	if (empl->fullName == "" || empl->post == "" || empl->nameOfCurrentProject == "") {
		ShowMessage("Incorrect data has been entered!");
	} else if (empl->fullName == "Name" || empl->post == "Post" || empl->nameOfCurrentProject == "Project") {
		ShowMessage("please fill in the fields!");
	} else {
		employeeList.push_back(*empl);
		AddingEmployeeForm->Name->Text = "Name";
		AddingEmployeeForm->degree->Value = 1;
		AddingEmployeeForm->Post->Text = "Post";
		AddingEmployeeForm->age->Value = 18;
		AddingEmployeeForm->Project->Text = "Project";

		saved = false;
		return;
	}
}
void __fastcall TMainMenuForm::EnterNumber() {

	int choose;
	choose = EmployeeNumber->CSpinEdit1->Value - 1;

	if (choose < 0 || choose > employeeList.size()) {
		ShowMessage("This employee is not exists!");
		return;
	}

	ListEmployee->StringGrid1->Cells[0][0] = "#";
	ListEmployee->StringGrid1->Cells[1][0] = "Full name";
	ListEmployee->StringGrid1->Cells[2][0] = "Academic degree";
	ListEmployee->StringGrid1->Cells[3][0] = "Post";
	ListEmployee->StringGrid1->Cells[4][0] = "Age";
	ListEmployee->StringGrid1->Cells[5][0] = "Name of project";
	ListEmployee->StringGrid1->ColCount = 6;
	ListEmployee->StringGrid1->RowCount = 2;

	ListEmployee->StringGrid1->Cells[0][1] = AnsiString(choose + 1);
	ListEmployee->StringGrid1->Cells[1][1] = employeeList[choose].fullName;
	ListEmployee->StringGrid1->Cells[2][1] = AnsiString(employeeList[choose].academicDegree);
	ListEmployee->StringGrid1->Cells[3][1] = employeeList[choose].post;
	ListEmployee->StringGrid1->Cells[4][1] = AnsiString(employeeList[choose].age);
	ListEmployee->StringGrid1->Cells[5][1] = employeeList[choose].nameOfCurrentProject;

	ListEmployee->Show();
}

void __fastcall TMainMenuForm::deleteEmployee() {
	int choose = EmployeeNumber->CSpinEdit1->Value - 1;
	if (choose + 1 < 0 || choose > employeeList.size()) {
		ShowMessage("This employee is not exists!");
		return;
	}
	employeeList.erase(employeeList.begin() + choose);
	size -= 1;
}
//---------------------------------------------------------------------------
__fastcall TMainMenuForm::TMainMenuForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::Button6Click(TObject *Sender){

	AnsiString aboutAppStr = "";

	ifstream aboutApp("aboutApp.txt");

	if(!aboutApp.is_open()) {
		ShowMessage("File is not exist!");
	}

	while(!aboutApp.eof()) {
		aboutApp >> aboutAppStr;
	}

	ShowMessage(aboutAppStr);
}
//---------------------------------------------------------------------------





void __fastcall TMainMenuForm::Button1Click(TObject *Sender)
{
	AddingEmployeeForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMainMenuForm::Button3Click(TObject *Sender)
{
	ListEmployee->StringGrid1->Cells[0][0] = "#";
	ListEmployee->StringGrid1->Cells[1][0] = "Full name";
	ListEmployee->StringGrid1->Cells[2][0] = "Academic degree";
	ListEmployee->StringGrid1->Cells[3][0] = "Post";
	ListEmployee->StringGrid1->Cells[4][0] = "Age";
	ListEmployee->StringGrid1->Cells[5][0] = "Name of project";
	ListEmployee->StringGrid1->ColCount = 6;
	ListEmployee->StringGrid1->RowCount = employeeList.size() + 1;

	for (int i = 0; i < employeeList.size(); i++) {
		ListEmployee->StringGrid1->Cells[0][i + 1] = AnsiString(i + 1);
		ListEmployee->StringGrid1->Cells[1][i + 1] = employeeList[i].fullName;
		ListEmployee->StringGrid1->Cells[2][i + 1] = AnsiString(employeeList[i].academicDegree);
		ListEmployee->StringGrid1->Cells[3][i + 1] = employeeList[i].post;
		ListEmployee->StringGrid1->Cells[4][i + 1] = AnsiString(employeeList[i].age);
		ListEmployee->StringGrid1->Cells[5][i + 1] = employeeList[i].nameOfCurrentProject;
	}
	ListEmployee->Show();
}
//---------------------------------------------------------------------------





void __fastcall TMainMenuForm::Button5Click(TObject *Sender)
{
	ActionChoose->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::Button9Click(TObject *Sender)
{
	ShowMessage("Information about employees of the research Institute (NIA) should be stored in a file that has the following structure: F. I. O. employee, academic degree, position, date of birth, name of the current project. Form a list of young scientists (up to 30 years) and lists of employees working on one project. Calculate the percentage of NIA's ostepenence.");
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::Button7Click(TObject *Sender)
{
	EmployeeNumber->Show();
}
//---------------------------------------------------------------------------






void __fastcall TMainMenuForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	if (!saved) {
		const int result = MessageBox(NULL, L"Do you wanna save changes before close?", L"Unsaved changes",  MB_YESNO);

		switch (result) {
		case IDYES:
			SaveChanges();
			break;
		case IDNO:
			break;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::Button2Click(TObject *Sender)
{
	AnsiString guideStr = "";

	ifstream guide("guide.txt");

	if(!guide.is_open()) {
		ShowMessage("File is not exist!");
	}

	while(!guide.eof()) {
		guide >> guideStr;
	}

	ShowMessage(guideStr);
}
//---------------------------------------------------------------------------

