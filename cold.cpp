#include <iostream>
using namespace std;

int main() {
  int number, temp;
  int count = 0;
  cin >> number;
  while(number > 0){
      cin >> temp;
      if(temp < 0){
          count ++;
      }
      number --;
  }
  cout << count << endl;
}