// comments.cpp
#include <bits/stdc++.h>
using namespace std;

int comments() {
    // -------------------------
    // Single-line comment
    // -------------------------
    // Anything after // on the same line is ignored by the compiler
    cout << "This line will run." << endl; // You can also comment at the end of a line

    // -------------------------
    // Multi-line comment
    // -------------------------
    cout << "Anything between /* */ ignored." << endl;
    cout << "This line also runs." << endl;

    /* Multi-line comments
       can span several lines.
       They are commonly used for documentation.
    */

    return 0;
}
