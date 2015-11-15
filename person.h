#ifndef PERSON_H
#define  PERSON_H
#include <vector>
#include <iostream>
#include <cstdio>
class Person {
public:
  std::string name;
  Person();
  virtual Person* clone() = 0;

};
#endif
