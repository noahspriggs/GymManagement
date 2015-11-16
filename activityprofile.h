#ifndef ACTIVITYPROFILE_H
#define  ACTIVITYPROFILE_H

#include <vector>
class ActivityProfile {
public:
  ActivityProfile();
  /**
  Outputs meaningful statistics about the users activity profile
  */
  void CalculateTrends();

  int stats;

};
#endif
