#ifndef MEMBER_H
#define  MEMBER_H
#include "person.h"
#include <vector>
class Member : public Person {
public:
  Member();
  void addClass();
  virtual Person* clone();

};
#endif
