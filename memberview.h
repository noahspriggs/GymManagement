#ifndef MEMBERVIEW_H
#define  MEMBERVIEW_H

#include "membershipcontroller.h"
#include "member.h"
#include "fitnesslesson.h"
#include "fitnessinstructor.h"
#include <vector>
class MemberView {
public:
  MemberView();
  void viewWorkoutPlan(Member m);
  void viewClassList();
  void reserveTrainer(FitnessInstructor f);
  void insertClass(FitnessLesson l);
  void makePayment();
  void vewActivityProfile(Member m);
};
#endif
