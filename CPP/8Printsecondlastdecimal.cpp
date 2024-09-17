#include <bits/stdc++.h>
using namespace std;

int main ()  {

    float n1;
    cin >> n1;

    if (n1<10)
    {cout << "Invalid number";}

    else
    {int n2 = n1;
    int n3 = n2 / 10;
    int n4 = n3 % 10;
    cout << n4;}


    return 0;
}