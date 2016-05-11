#include <iostream>
#include <string>

#include "student.h"
#include "school.h"

using namespace std;

int main(){
  Student *stud = new Student("Mr. Smart Student", "00001");
  cout << "Student name: " << stud->getName()
       << " has Student ID: " << stud->getid() << endl;
  {
    University uni(stud);
    uni.getAllStudents();
  }
  cout << stud->getName() << " ID: " << stud->getid()
       << " will be out of school soon" << endl;
  return 0;
}