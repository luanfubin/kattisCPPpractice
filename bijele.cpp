#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int chessset[6] = {1, 1, 2, 2, 2, 8};
  int i;
  int myset[6];
  for(i =0; i<6;i++){
    cin >> myset[i];
  }
  for(i= 0;i < 6;i++){
    cout << chessset[i]-myset[i];
    cout << " ";
  }
}