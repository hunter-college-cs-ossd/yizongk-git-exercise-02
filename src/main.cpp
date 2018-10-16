/******************************************************************************
  Title          : main.cpp
<<<<<<< HEAD
  Author         : Yi Zong Kuang
=======
  Author         : LiudmilaZyrianova239
>>>>>>> b66380d8ef4230cf6e6888ccb45e6deb4f079cbe
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
<<<<<<< HEAD
  Modifications  : 
=======
  Modifications  : Added LiudmilaZyrianova239_oddity to main.cpp
>>>>>>> b66380d8ef4230cf6e6888ccb45e6deb4f079cbe
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);


ostream& LiudmilaZyrianova239_oddity(ostream & out){
    out << "If you tied buttered toast to the back of a cat and dropped it from a height, what would happen?\n";
    return out;
}

ostream& yizongk_oddity(ostream& out) {
    out << "This is a collection of strange but true facts. ;)\n";
    return out;
}




int main(int argc, char* argv[] )
{

    // Calls to output functions
    output_function a = yizongk_oddity;
    a(cout);
    a = LiudmilaZyrianova239_oddity;
    a(cout);


    return 0;
}
