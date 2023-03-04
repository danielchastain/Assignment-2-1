
#include <iostream>
#include <cmath>
const double PI = M_PI;
using namespace std;
 
int main() {
  
  int gumBall;
  int containerSize;
  int containerHeight;

  
  cout << "please enter radius of gumball!" << endl;
  cin>>gumBall;
  gumBall = gumBall * gumBall * gumBall;

  gumBall = 4/3*PI*gumBall;
  cout<<gumBall;
  cout<< "Please enter radius for container!"<< endl;
  cin>>containerSize;
  cout<< "Please enter the height of the container!"<< endl; 
  cout << containerSize;
  cin>>containerHeight;
  containerSize = 2*containerSize^2;
 cout << containerSize;
  cout<< "There are a predicted amount of " << containerSize/gumBall << "gum balls in the jar." << endl;
  
  cout << gumBall << endl;
  cout << containerSize << endl;
  
 cout << PI << endl;
}
