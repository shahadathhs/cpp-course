#include <bits/stdc++.h>
using namespace std;

int escapeSequences() {
    // \n = newline character (most commonly used)
    cout << "Hello, world!\n";
    cout << "This is on a new line.\n";

    // std::endl = also creates a newline, but flushes the output buffer
    cout << "Hello with endl." << endl;
    cout << "This is also a new line (flushed)." << endl;

    // \t = horizontal tab
    cout << "Column1\tColumn2\tColumn3\n";

    // \\ = prints a backslash
    cout << "This is a backslash: \\\n";

    // \" = prints a double quote
    cout << "This is a quote: \"Hello!\"\n";

    return 0;
}
