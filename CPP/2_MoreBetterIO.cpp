#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
        int revNum=0;
        
        int tempn = n;

        while (n>0) {

            int lastDigit = n % 10;
            n = n/10;
            revNum = (revNum*10) + lastDigit;

        }

        if (tempn==revNum) {
            cout << "true";
        }

        else if (tempn != revNum) {
            cout << "false";
        }

return 0;

}