#ifndef MEMBER_H
#define  MEMBER_H
#include "person.h"
#include "fitnesslesson.h"
#include <iostream>
#include <cstdio>

#include <vector>
class Member : public Person {
public:
  Member();
  /**
  Adds a class to the member's workout plan
  */
  void addClass(FitnessLesson l);
  virtual Person* clone();

  int activityLevel;

};
#endif
