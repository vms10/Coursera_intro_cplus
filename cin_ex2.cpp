#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
string s;

while (true) {
  cout << "Enter a lowercase vowel." << endl;
  cin >> s;
  if (s=="a" || s=="e" || s=="i" || s=="o" || s=="u") {
    cout << "You successfully entered a vowel." << endl;
    break;
  }
  else {
    cout << "You did not enter a vowel." << endl;
    break;
  }
}


  //add code above this line
  
  return 1;
  
}



