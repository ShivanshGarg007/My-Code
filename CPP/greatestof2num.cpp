#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  float num1, num2;
  cin >> num1;
  cin >> num2;

  int num11 = num1*10;
  int num111= num11 % 10;

  int num22 = num2*10;
  int  num222 = num22 % 10;

  if (num111>num222) {
    cout << num111;
  }

  else if (num111<num222) {
    cout << num222;
  }


  else {
    cout << "The numbers are equal";
  }

  return 0;
}