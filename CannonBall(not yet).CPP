#include <iostream>
#include <cmath>

#define G 9.81
#define pi 3.1415926

using namespace std;

int main() {
  int number;
  float v0, thyta, x1, h1, h2, result,time;
  cin >> number;
  while(number>0){
    cin >> v0 >> thyta >> x1 >> h1 >> h2;
    time = x1/(v0*cos(thyta*pi/180.0));
    result = v0*time*sin(thyta*pi/180.0)- G*(1.0/2)*pow(time,2);
    if(h1 < result && result < h2){
      cout << "Safe\n";
    }else{
      cout<< "Not Safe\n";
    }
    number --;
  }
}
