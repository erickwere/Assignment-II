#ifndef SCHOOL_H
#define SCHOOL_H
#include <string>

class University {
  std::string name;

public:
	Student *stud;
  University(std::string name, Student *stud)
    : name(name), stud(stud) {}
  University(Student *stud = NULL)
    : University("Strathmore University", stud) {}
  std::string getAllStudents(){ return name;}

  };

#endif


















