#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int a,const char *n ) {
  strcpy(name,n);
  studentId = a;
}

// Display StudentId and Name
void Student::display() {
  cout << studentId << "\t"  << name;
}
