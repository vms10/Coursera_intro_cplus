////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  //add code below this line

TurtleScreen screen(400, 300); //create a screen for the turtle to move around;width 400 pixels and height 300 pixels
Turtle tina(screen); //creates a turtle named tina inside the screen
for (int i = 0; i < 4; i++) {
  tina.forward(100);
  tina.right(90);
}
screen.exitonclick(); //keep the screen open until the screen is clicked with a cursor.

  //add code above this line
  
  return 0;
  
}
