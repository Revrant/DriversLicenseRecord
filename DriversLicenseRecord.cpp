#include "DriversLicenseRecord.h"
#include <iostream>
//Redeclares variables and store information for DMV.h
void DriversLicenseRecord::setFirstname(std::string firstname)
{
  d_firstname = firstname;
}
void DriversLicenseRecord::setLastname(std::string lastname)
{
  d_lastname = lastname;
}
void DriversLicenseRecord::setVoterstatus(std::string voterstatus)
{
  d_voterstatus = voterstatus;
}
void DriversLicenseRecord::setAge(std::string age)
{
  d_age = age;
}
void DriversLicenseRecord::setLicense(std::string license)
{
  d_license = license;
}
std::string DriversLicenseRecord::getFirstname()
{
  return(d_firstname);
}
std::string DriversLicenseRecord::getLastname()
{
  return(d_lastname);
}
std::string DriversLicenseRecord::getVoterstatus()
{
  return(d_voterstatus);
}
std::string DriversLicenseRecord::getAge()
{
  return(d_age);
}
std::string DriversLicenseRecord::getLicense()
{
  return(d_license);
}
