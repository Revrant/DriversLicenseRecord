#include <iostream>
#include <string>
#include "DMV.h"
#include <fstream>
#include "DriversLicenseRecord.h"
/*______________________________________________________________________*/
/*_____________________________________________________________________________*/
DMV::DMV(std::string datafile)
{
  //Accepts users file
  std::ifstream inFile;
  inFile.open(datafile);

  //Creates array of pointers to objects
  if(inFile.is_open())
  {
    inFile >> entries;
    myDriversLicenseRecord = new DriversLicenseRecord*[entries];

    for(int i = 0; i < entries; i++)
    {
      myDriversLicenseRecord[i] = new DriversLicenseRecord;
    }
    //Creats array with all this information stored in file
    for(int i = 0; i < entries; i++)
    {
        std::string temp = "";
        inFile >> temp;
        myDriversLicenseRecord[i]->setFirstname(temp);
        inFile >> temp;
        myDriversLicenseRecord[i]->setLastname(temp);
        inFile >> temp;
        myDriversLicenseRecord[i]->setAge(temp);
        inFile >> temp;
        myDriversLicenseRecord[i]->setVoterstatus(temp);
        inFile >> temp;
        myDriversLicenseRecord[i]->setLicense(temp);
    }
  }
}
/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
void DMV::printInfo()
{
  for(int i = 0; i < entries; i++)
  {
    //Prints all info from files
    std::cout << myDriversLicenseRecord[i]->getFirstname() << ", ";
    std::cout << myDriversLicenseRecord[i]->getLastname() << "(";
    std::cout << myDriversLicenseRecord[i]->getAge() << "): ";
    std::cout << myDriversLicenseRecord[i]->getLicense();
    std::cout << std::endl;
  }
}
/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
void DMV::printVoter()
{
  for(int i = 0; i < entries; i++)
  {
    //Checks if pointer has value of Y to see if user is voter
    if(myDriversLicenseRecord[i]->getVoterstatus() == "Y")
    {
      std::cout << myDriversLicenseRecord[i]->getFirstname() << ", ";
      std::cout << myDriversLicenseRecord[i]->getLastname() << "(";
      std::cout << myDriversLicenseRecord[i]->getAge() << "): ";
      std::cout << myDriversLicenseRecord[i]->getLicense();
      std::cout << std::endl;
    }
  }
}
/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
void DMV::printSpec()
{
  std::string found = "";
  std::string licnum;
  std::cout <<"Input drivers license number: ";
  std::cin >> licnum;
  //Loops till license is found
  for( int i = 0; i < entries; i++)
  {
    if(myDriversLicenseRecord[i]->getLicense() == licnum)
    {
      std::cout << myDriversLicenseRecord[i]->getFirstname() << ", ";
      std::cout << myDriversLicenseRecord[i]->getLastname() << "(";
      std::cout << myDriversLicenseRecord[i]->getAge() << "): ";
      std::cout << myDriversLicenseRecord[i]->getLicense();
      std::cout << std::endl;
      licnum = found;
    }
  }
  //If the if-statement is passed licnum will be redifined so this statement wont go through
  if(licnum != found)
  {
    std::cout <<"No record found." << '\n';
  }
}
/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
void DMV::createVoter()
{
  std::string name = "";
  std::cout << "Input name for registered voter file: ";
  std::cin >> name;

  std::ofstream file;
  file.open(name);
  file << entries;
  file << '\n';
  for (int i = 0; i < entries; i ++)
  {
    if(myDriversLicenseRecord[i]->getVoterstatus() == "Y")
    {
      file << myDriversLicenseRecord[i]->getFirstname() << ", ";
      file << myDriversLicenseRecord[i]->getLastname() << "(";
      file << myDriversLicenseRecord[i]->getAge() << "): ";
      file << myDriversLicenseRecord[i]->getLicense();
      file << '\n';
    }
  }
  file.close();
}
/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
void DMV::run()
{
  int choice = 0;

  //std::string createfile = "";
  //std::string driver = "";

  do
  {

  std::cout << "1) Print all Driver Info " << '\n';
  std::cout << "2) All Voters " << '\n';
  std::cout << "3) Print Specific Driver " << '\n';
  std::cout << "4) Create Registered Voter File " << '\n';
  std::cout << "5) Quit " << '\n';
  std::cout << "Enter your choice: ";
  std::cin >> choice;
  std::cout << std::endl;
  if(choice == 1)
  {
    printInfo();
  }
  else if(choice == 2)
  {
    printVoter();
  }
  else if(choice == 3)
  {
    printSpec();
  }
  else if(choice == 4)
  {
    createVoter();
  }
  std::cout << std::endl;
}while(choice != 5);

std::cout << "Goodbye!" << std::endl;
}


/*_____________________________________________________________________________*/
/*_____________________________________________________________________________*/
