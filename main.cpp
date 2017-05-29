/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tristen Schwarzenberger
 * Assignment:   EECS-168 Lab 9
 * Description: This program prints a menu from a DMV with drivers information and can save information into the file
 * Date: 11/10/16
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "DMV.h"
int main(int argc, char** argv)
{
      std::string datafile = "";
      //Does something
      if(argc >= 2)
      {
        datafile = argv[1];
      }
      else
      {
        std::cout << "Sorry, you didn't give the right number of command line arguments. Two are required.\n";
      }

      DMV myDMV(datafile);
      myDMV.run();
}
