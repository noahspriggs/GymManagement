#ifndef FITNESSLESSON_H
#define  FITNESSLESSON_H

#include <ctime>
#include "employee.h"

class FitnessLesson {
public:
  time_t time;
  int duration;
  Employee instructor;
  FitnessLesson();



};
#endif
