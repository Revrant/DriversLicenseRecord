#ifndef DRIVERSLICENSERECORD_H
#define DRIVERSLICENSERECORD_H
#include <iostream>
#include <string>
//DriversLicenseRecord class functions and variables for DMV.h
class DriversLicenseRecord
{
private:
  std::string d_firstname = "";
  std::string d_lastname = "";
  std::string d_voterstatus = "";
  std::string d_age = "";
  std::string d_license = "";

public:
  void setFirstname(std::string firstname);
  void setLastname(std::string lastname);
  void setVoterstatus(std::string voterstatus);
  void setAge(std::string age);
  void setLicense(std::string license);
  std::string getFirstname();
  std::string getLastname();
  std::string getVoterstatus();
  std::string getAge();
  std::string getLicense();

};
#endif
