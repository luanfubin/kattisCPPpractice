#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double article, owner;
  cin >> article;
  cin >> owner;
  owner = owner -1;

  cout << round(owner*article + 1);
}