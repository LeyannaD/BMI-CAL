#include <iostream>

using namespace std;

int main() {
  int a, b ;
  int temp;
  cin >> a;
  cin >> b;
  temp = a;
  a = b;
  b = temp;
  cout << a << " " <<  b;
}