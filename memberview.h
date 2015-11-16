#ifndef MEMBERVIEW_H
#define  MEMBERVIEW_H

#include "membershipcontroller.h"
#include "member.h"
#include "fitnesslesson.h"
#include <vector>
class MemberView {
public:
  MemberView();
  void viewWorkoutPlan(Member m);
  void viewClassList();
  void reserveTrainer(Employee e);
  void insertClass(FitnessLesson l);
  void makePayment(Member m, int amount);
  void vewActivityProfile(Member m);
};
#endif
