#include<bits/stdc++.h>
using namespace std;

int main () {

    int day, kilometer;
    cin >> day >> kilometer;

    float cost = (30*day) + (0.15*kilometer);
    cout << fixed << setprecision(2);
    cout << cost;


    return  0;
}