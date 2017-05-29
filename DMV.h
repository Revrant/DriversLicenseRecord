#ifndef DMV_H
#define DMV_H
#include <iostream>
#include <string>
#include "DriversLicenseRecord.h"


/*_______________________________________________________________________*/
//DMV CLASS
class DMV
{
//Private and Public functions
private:
  std::string datafile;
  DriversLicenseRecord** myDriversLicenseRecord;
  int choice;
  int entries;
  std::string age;
  std::string license;
  std::string firstname;
  std::string lastname;
  std::string voterstatus;

public:
  DMV(std::string datafile);
  void run();
  void printInfo();
  void printVoter();
  void printSpec();
  void createVoter();
};
#endif
