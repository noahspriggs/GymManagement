#ifndef SCHEDULECONTROLLER_H
#define  SCHEDULECONTROLLER_H

#include "fitnesslesson.h"
#include <vector>
class ScheduleController {
public:
  ScheduleController();
  void createClass(FitnessLesson l);
  void getClassList();
};
#endif
