#ifndef FITNESSLESSON_H
#define  FITNESSLESSON_H

#include <ctime>
#include "fitnessinstructor.h"

class FitnessLesson {
public:
  time_t time;
  int duration;
  FitnessInstructor instructor;
  FitnessLesson();



};
#endif
