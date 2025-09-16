#include <bits/stdc++.h>
using namespace std;

int cinCout() {
    // -------------------------
    // cout = console output
    // -------------------------
    // cout is used to display information on the screen.
    // "<<" is called the stream insertion operator.

    cout << "Hello, world!\n";
    cout << "This is C++ output using cout.\n";

    int age = 20;
    cout << "I am " << age << " years old.\n\n";

    // -------------------------
    // cin = console input
    // -------------------------
    // cin is used to take input from the user.
    // ">>" is called the stream extraction operator.

    int number;
    cout << "Enter a number: ";   // prompt the user
    cin >> number;                // user types input
    cout << "You entered: " << number << "\n\n";

    // -------------------------
    // Taking multiple inputs
    // -------------------------
    int a, b;
    cout << "Enter two numbers separated by space: ";
    cin >> a >> b;
    cout << "Sum = " << (a + b) << "\n\n";

    // -------------------------
    // cin with strings
    // -------------------------
    string name;
    cout << "Enter your name: ";
    cin >> name; // stops at whitespace
    cout << "Hello, " << name << "!\n";

    // To read full line including spaces, use getline
    cin.ignore(); // clear leftover newline
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Nice to meet you, " << fullName << "!\n\n";

    // -------------------------
    // cin vs cout summary
    // -------------------------
    cout << "Summary:\n";
    cout << " - cout: prints output to the screen (with <<)\n";
    cout << " - cin:  takes input from the keyboard (with >>)\n";

    return 0;
}
