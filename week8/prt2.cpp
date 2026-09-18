#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // 1. Find length
    cout << "Length: " << sentence.length() << endl;

    // 2. Find position of C++
    int pos = sentence.find("C++");

    if (pos != string::npos) {
        cout << "Found C++ at position: " << pos << endl;

        // 3. Get the substring from C++
        cout << "Substring: " << sentence.substr(pos) << endl;

        // 4. Change C++ to Programming
        sentence.replace(pos, 3, "Programming");

        cout << "New sentence: " << sentence << endl;
    }
    else {
        cout << "C++ not found!" << endl;
    }

    return 0;
}
