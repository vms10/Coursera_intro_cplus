#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
int dayOfWeek = 3;
/*
#1: Else If is used for ranges of values - Switch Case is for specific values
switch case can only check for equality (e.g. num == 5), so if you need to check for a range of values (e.g. num > 50 && num <= 60), use else If instead.

#2: Else If is used for handling multiple variables
switch case can only compare against values - not variables. For example, if you wanted to compare the inputted day of the week with the current day of the week, you would need to use else if. switch case can handle values (dayOfWeek == "Sunday") but not variables (dayOfWeek == today).

#3: Else If is used for compound conditionals
To check multiple conditions, an else if is needed.
*/


switch (dayOfWeek) {

  case 1: cout << "Sunday"; //only prints if dayOfWeek == 1
          break;
  case 2: cout << "Monday"; //only prints if dayOfWeek == 2
          break;
  case 3: cout << "Tuesday"; //only prints if dayOfWeek == 3
          break;
  case 4: cout << "Wednesday"; //only prints if dayOfWeek == 4
          break;
  case 5: cout << "Thursday"; //only prints if dayOfWeek == 5
          break;
  case 6: cout << "Friday"; //only prints if dayOfWeek == 6
          break;
  case 7: cout << "Saturday"; //only prints if dayOfWeek == 7
          break;
  default: cout << "Invalid"; //only prints if none of the above are true
    
}

  //add code above this line
  
  return 0;
  
}