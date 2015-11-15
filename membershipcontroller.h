#ifndef MEMBERSHIPCONTROLLER_H
#define  MEMBERSHIPCONTROLLER_H

#include "member.h"
#include <vector>
class MembershipController {
public:
  MembershipController();
  void addMember(Member m);
  void checkMembershipExpiry(Member m);
  void deleteMember(Member m);
  void getMemberActivityProfile(Member m);

};
#endif
