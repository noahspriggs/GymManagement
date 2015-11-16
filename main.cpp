#include "schedulecontroller.h"
#include "membershipcontroller.h"
#include <iostream>
#include <cstdio>

#include <fstream>
#include <streambuf>
#include "member.h"
#include "employee.h"
#include "json.h"
int main()
{

  std::ifstream t("savedConfig.json");
  std::string str((std::istreambuf_iterator<char>(t)),
                 std::istreambuf_iterator<char>());
  MembershipController* memberC = new MembershipController();
  Member* member_prototype = new Member();
  Employee* employee_prototype = new Employee();
  Json::Value root;
  Json::Reader reader;

  bool parseSuccess = reader.parse(str,root);
  if(!parseSuccess) {
    std::cout  << "Failed to parse configuration\n"
               << reader.getFormattedErrorMessages();
  }

  const Json::Value plist = root["person-list"];
  std::cout <<"adding contents" <<plist.size()<<std::endl;

  for(int i = 0; i<plist.size(); i++) {

    if(plist[i]["activityLevel"].asString().size() > 0) {
      member_prototype->name = plist[i]["name"].asString();
      member_prototype->id = plist[i]["id"].asInt();
      member_prototype->activityLevel = plist[i]["activityLevel"].asInt();
      Person* m = member_prototype->clone();
      memberC->personList.push_back(m);
    } else {

      employee_prototype->name = plist[i]["name"].asString();
      employee_prototype->id = plist[i]["id"].asInt();
      employee_prototype->hoursPerWeek = plist[i]["hoursPerWeek"].asInt();
      Person* e = employee_prototype->clone();
      memberC->personList.push_back(e);

    }
  }
  for (Person* p : memberC->personList) {
    std::cout << p->name << "\n";
  }



  std::string type;
  std::string name;
  std::cout << "input a type - Employee or Member: ";
  std::cin >> type;
  std::cout <<"input a name: ";
  std::cin >>name;
  if(type.compare("Employee") == 0 || type.compare("employee") == 0) {
    employee_prototype->name = name;
    Person* newemployee = employee_prototype->clone();
    memberC->personList.push_back(newemployee);
    std::cout << "Sucessfully created an Employee named " << newemployee->name << std::endl;
    Json::Value e;
    e["name"] = name;
    e["id"] = newemployee->id;
    e["hoursPerWeek"] = 5;
    root["person-list"].append(e);
  } else if (type.compare("Member") == 0 || type.compare("member") == 0) {
    member_prototype->name = name;
    Person* newmember = member_prototype->clone();
    memberC->personList.push_back(newmember);
    std::string s;

    Json::Value m;
    m["name"] = name;
    m["id"] = newmember->id;
    m["activityLevel"] = 5;
    root["person-list"].append(m);

    std::cout << "Sucessfully created an Member named " << newmember->name << std::endl;


  }


      Json::StyledWriter writer;
      std::cout << writer.write(root);

      std::ofstream myfile;
      myfile.open ("savedConfig.json");
      myfile << writer.write(root);
      myfile.close();



  return 0;
}
