#include "member.h"

Member::Member() {

}

Person* Member::clone() {
  Member* m = new Member();
  m->name = this->name;
  m->id = this->id;
  m->activityLevel = this->activityLevel;
  return m;
}

void Member::addClass()
{

}
