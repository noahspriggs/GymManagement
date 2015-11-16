/**
Controlls the status of all the members
*/

#ifndef MEMBERSHIPCONTROLLER_H
#define  MEMBERSHIPCONTROLLER_H

#include "member.h"
#include "activityprofile.h"
#include <vector>
class MembershipController {
public:
  MembershipController();
  /**
  Adds a member to the database
  \param Member m - The member to be added
  */
  void addMember(Member m);
  /**
  Checks a member's expiry
  \param Member m - The membership to be investigated
  */
  void checkMembershipExpiry(Member m);
  /**
  Deletes a member from the database
  \param Member m - The member to be deleted
  */
  void deleteMember(Member m);
  /**
  *Returns the members activity profile with enhanced statistics
  *\param Member m - The member whose profile is desired
  *\return ActivityProfile - The activity of @Member m
  */
  ActivityProfile getMemberActivityProfile(Member m);

  std::vector<Person*> personList; /**<The list of current members and employees*/

};
#endif
