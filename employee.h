#ifndef EMPLOYEE_H
#define  EMPLOYEE_H

#include "person.h"

class Employee : public Person {
public:
  Employee();
  virtual Person* clone();

  int hoursPerWeek;
};
#endif
