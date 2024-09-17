#include<bits/stdc++.h>
using namespace std;

int main() {

int age, time, ticket_price=0;
cin >> age >> time;

if (0<=age<12) {
    ticket_price = 5;
}

else if (age>=60) {
    ticket_price = 6;
}

else {ticket_price = 10;}

if (time < 12) {
    ticket_price = ticket_price - 2;
}

else if (time > 18) {
    ticket_price = ticket_price + 1;
}


cout << "$" << ticket_price << endl;

    return 0;
}