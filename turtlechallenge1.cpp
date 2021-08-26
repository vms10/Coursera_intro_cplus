////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  
  //add code below this line
tina.pencolor({"blue"}); //red, orange, yellow, green, blue, purple
tina.width(3); //width in pixels; any positive integer (e.g. 1, 10, 123, etc.)
tina.shape("arrow"); // triangle, indented triangle, square, arrow
tina.speed(TS_FAST); //TS_FASTEST, TS_FAST, TS_NORMAL, TS_SLOW, TS_SLOWEST
for (int i = 0; i < 4; i++) {
  tina.forward(100);
  tina.right(90);
  tina.forward(20);
  tina.right(90);
  tina.forward(20);
  tina.right(90);
  tina.forward(20);
  
}
 
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
