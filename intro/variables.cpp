#include <bits/stdc++.h>
using namespace std;

int variables() {
    // -------------------------
    // What is a variable?
    // -------------------------
    // A variable is a named storage for data.
    // It has: a type (int, double, char, etc.), a name, and a value.

    // -------------------------
    // Basic variable declaration
    // -------------------------
    int age = 20;               // integer
    double pi = 3.14159;        // floating point number
    char grade = 'A';           // character (single quotes)
    bool isStudent = true;      // boolean (true or false)
    string name = "Sajib";      // string (requires <string>, included by iostream in most compilers)

    cout << "Age: " << age << "\n";
    cout << "Pi: " << pi << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Is student: " << isStudent << "\n";
    cout << "Name: " << name << "\n\n";

    // -------------------------
    // Declaration without initialization
    // -------------------------
    int x;   // value is undefined until assigned
    x = 10;  // assign later
    cout << "x after assignment: " << x << "\n";

    // -------------------------
    // Multiple declarations
    // -------------------------
    int a = 1, b = 2, c = 3;
    cout << "a: " << a << ", b: " << b << ", c: " << c << "\n\n";

    // -------------------------
    // Overriding (reassigning) existing values
    // -------------------------
    int score = 50;
    cout << "Initial score: " << score << "\n";
    score = 75; // override the old value
    cout << "Score after reassignment: " << score << "\n";
    score = score + 25; // can also update based on its current value
    cout << "Score after adding 25: " << score << "\n\n";

    // -------------------------
    // Constants (cannot be changed)
    // -------------------------
    const double gravity = 9.8;
    cout << "Gravity: " << gravity << "\n";
    // gravity = 10; // ❌ Error: cannot modify a const variable

    // -------------------------
    // Literals vs Variables
    // -------------------------
    cout << "Literals are fixed values like 42, 3.14, 'A'\n";
    cout << "Variables are names that store those values (like age, pi, grade)\n\n";

    // -------------------------
    // Scope of variables
    // -------------------------
    int outer = 100;
    {
        int inner = 200; // only exists inside this block
        cout << "Inner variable: " << inner << "\n";
        cout << "Outer variable (accessible here): " << outer << "\n";
    }
    // cout << inner; // ❌ Error: 'inner' is not defined outside its block
    cout << "Outer variable (still accessible): " << outer << "\n\n";

    // -------------------------
    // Type inference with auto
    // -------------------------
    auto number = 42;       // compiler infers int
    auto price = 99.99;     // compiler infers double
    auto flag = true;       // compiler infers bool
    cout << "Auto inferred variables: " << number << ", " << price << ", " << flag << "\n";

    return 0;
}
