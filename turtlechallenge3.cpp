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
  tina.pencolor({"green"});
  tina.width(2);
  tina.shape("triangle");
  tina.speed(TS_NORMAL);
  
  for (int i = 10; i <= 200; i+=10) {
    tina.forward(i);
    tina.right(90);
  }

 
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}
