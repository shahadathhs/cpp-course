#include <bits/stdc++.h>
using namespace std;

int dataTypes() {
    // -------------------------
    // What are Data Types?
    // -------------------------
    // A data type defines the kind of data a variable can hold.
    // Categories: 
    // 1. Basic / Primitive
    // 2. Derived
    // 3. User-defined

    // -------------------------
    // 1. Basic / Primitive Types
    // -------------------------

    int age = 25;               // integer (usually 4 bytes)
    double pi = 3.14159;        // double precision floating point (8 bytes)
    float temp = 36.6f;         // single precision floating point (4 bytes)
    char grade = 'A';           // single character (1 byte)
    bool isStudent = true;      // boolean (true/false, stored as 0 or 1)
    string name = "Sajib";      // string (sequence of characters)

    cout << "int age = " << age << "\n";
    cout << "double pi = " << pi << "\n";
    cout << "float temp = " << temp << "\n";
    cout << "char grade = " << grade << "\n";
    cout << "bool isStudent = " << isStudent << "\n";
    cout << "string name = " << name << "\n\n";

    // Numeric limits
    cout << "INT min: " << numeric_limits<int>::min() << ", max: " << numeric_limits<int>::max() << "\n";
    cout << "DOUBLE max: " << numeric_limits<double>::max() << "\n\n";

    // -------------------------
    // Modifiers (signed, unsigned, short, long)
    // -------------------------
    unsigned int positive = 100;     // only non-negative values
    long bigNumber = 1000000L;       // bigger range
    short smallNumber = 32000;       // smaller range

    cout << "unsigned int = " << positive << "\n";
    cout << "long = " << bigNumber << "\n";
    cout << "short = " << smallNumber << "\n\n";

    // -------------------------
    // 2. Derived Types
    // -------------------------

    // Array
    int numbers[3] = {1, 2, 3};
    cout << "Array values: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << "\n";

    // Pointer
    int val = 42;
    int* ptr = &val; // pointer holds address of variable
    cout << "Pointer ptr points to val = " << *ptr << " (address: " << ptr << ")\n";

    // Reference
    int original = 10;
    int& ref = original; // ref is another name for original
    ref = 20; // changes original too
    cout << "Original after reference change = " << original << "\n\n";

    // -------------------------
    // 3. User-defined Types
    // -------------------------

    // Struct
    struct Person {
        string name;
        int age;
    };

    Person p1 = {"Alice", 30};
    cout << "Struct Person: " << p1.name << ", " << p1.age << "\n";

    // Enum
    enum Color { RED, GREEN, BLUE };
    Color favorite = GREEN;
    cout << "Enum example (GREEN has value): " << favorite << "\n";

    // Class
    class Car {
    public:
        string brand;
        int year;
    };

    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2024;
    cout << "Class Car: " << myCar.brand << ", " << myCar.year << "\n";

    return 0;
}
