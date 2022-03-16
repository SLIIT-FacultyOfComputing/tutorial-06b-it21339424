#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int Id, char Sname[]) {
  studentId = Id;
  strcpy(name,Sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID :"<<studentId<<endl;
  cout<<"Student Name :"<<name<<endl;
}
