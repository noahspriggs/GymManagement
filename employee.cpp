#include "employee.h"

Employee::Employee() {

}

Person* Employee::clone() {
  Employee* e = new Employee();
  e->name = this->name;
  e->id = this->id;
  e->hoursPerWeek = this->hoursPerWeek;
  return e;
}
