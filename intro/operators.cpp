#include <bits/stdc++.h>
using namespace std;

int operators() {
    // Arithmetic Operators: +, -, *, /, %, ++, --

    int a1 = 10, b1 = 3;

    cout << "a1 = " << a1 << ", b1 = " << b1 << "\n";
    cout << "Addition (a1 + b1): " << (a1 + b1) << "\n";
    cout << "Subtraction (a1 - b1): " << (a1 - b1) << "\n";
    cout << "Multiplication (a1 * b1): " << (a1 * b1) << "\n";
    cout << "Division (a1 / b1): " << (a1 / b1) << " (integer division)\n";
    cout << "Modulo (a1 % b1): " << (a1 % b1) << "\n\n";

    // Increment (++) and Decrement (--)
    int x1 = 5;
    cout << "x1 = " << x1 << "\n";
    cout << "x1++ (post-increment): " << x1++ << " (value used, then increased)\n";
    cout << "After x1++: " << x1 << "\n";
    cout << "++x1 (pre-increment): " << ++x1 << " (increased, then used)\n";


    // Assignment Operators: =, +=, -=, *=, /=, %=
    int a2 = 10;
    cout << "Initial a2 = " << a2 << "\n";

    a2 += 5; // a2 = a2 + 5
    cout << "After a2 += 5: " << a2 << "\n";

    a2 -= 3; // a2 = a2 - 3
    cout << "After a2 -= 3: " << a2 << "\n";

    a2 *= 2; // a2 = a2 * 2
    cout << "After a2 *= 2: " << a2 << "\n";

    a2 /= 4; // a2 = a2 / 4
    cout << "After a2 /= 4: " << a2 << "\n";

    a2 %= 3; // a2 = a2 % 3
    cout << "After a2 %= 3: " << a2 << "\n";


    // Comparison Operators: ==, !=, >, <, >=, <=
    int a3 = 10, b3 = 20;

    cout << "a3 = " << a3 << ", b3 = " << b3 << "\n";
    cout << "a3 == b3: " << (a3 == b3) << "\n";
    cout << "a3 != b3: " << (a3 != b3) << "\n";
    cout << "a3 > b3: " << (a3 > b3) << "\n";
    cout << "a3 < b3: " << (a3 < b3) << "\n";
    cout << "a3 >= b3: " << (a3 >= b3) << "\n";
    cout << "a3 <= b3: " << (a3 <= b3) << "\n";

    // Logical Operators: &&, ||, !
    bool x2 = true, y2 = false;

    cout << "x2 = " << x2 << ", y2 = " << y2 << "\n";
    cout << "x2 && y2 (AND): " << (x2 && y2) << "\n";
    cout << "x2 || y2 (OR): " << (x2 || y2) << "\n";
    cout << "!x2 (NOT): " << (!x2) << "\n";
    cout << "!y2 (NOT): " << (!y2) << "\n";

    // Example use case
    int age = 20;
    bool hasID = true;

    if (age >= 18 && hasID) {
        cout << "Access granted.\n";
    } else {
        cout << "Access denied.\n";
    }

    // Bitwise Operators: &, |, ^, ~, <<, >>
    int a4 = 6;   // 0110 in binary
    int b4 = 3;   // 0011 in binary

    cout << "a4 = " << a4 << " (0110), b4 = " << b4 << " (0011)\n";
    cout << "a4 & b4 (AND): " << (a4 & b4) << " (0010)\n";
    cout << "a4 | b4 (OR): " << (a4 | b4) << " (0111)\n";
    cout << "a4 ^ b4 (XOR): " << (a4 ^ b4) << " (0101)\n";
    cout << "~a4 (NOT): " << (~a4) << "\n";
    cout << "a4 << 1 (left shift): " << (a4 << 1) << "\n";
    cout << "a4 >> 1 (right shift): " << (a4 >> 1) << "\n";

    return 0;
}
