#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;

    // Prompt for input
    cout << "Enter your name: ";
    getline(cin, name);

    // Output the size and length of the input
    cout << "Size: " << name.size() << endl;
    cout << "Length: " << name.length() << endl;

    return 0;
}
