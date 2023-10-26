// lab4.cpp
// Write a comment here which briefly describes what the program will do.
  // The program will determine how many brownies will fit in a baking pan of a specific size.
// Include your name and ASU email address on this line.
  // Austin Jones, akjone29@gmail.com
// Write a preprocessor directive below which enables you to perform I/O

#include <iostream>
using namespace std;
int main()
{
  // Below, declare all the variables you will use and make certain to give
  // each variable a descriptive name which explains what the variable represents.
  int length,width;
  int surface_area;
  int small_brownies;
  int big_brownies;
  // Write a statement to output a prompt for the information the program needs to
  // get from the user.
  cout << "Please enter the length and width of the baking pan in inches." << endl;
  // Write a statement here to read the input from the user and save it in a
  // variable.
  cin>> length >> width;
  // Write statements below which will perform the required computations and
  // assign the results to variables.
  surface_area = length * width;
  small_brownies = surface_area;
  big_brownies = surface_area/4;
  // Write statements below which will output the requested information.
  cout << "A " << length << " X " << width << " inch pan can hold " << small_brownies << " small brownies or " << big_brownies << " large brownies." << endl;
return 0;
}