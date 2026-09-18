#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    // 1. Read sentence from user
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // 2. Display its length
    cout << "Length: " << sentence.length() << endl;

    // 3. Find position of "C++"
    size_t pos = sentence.find("C++");

    if (pos != string::npos) {
        cout << "\"C++\" found at position: " << pos << endl;

        // 4. Extract and display "C++"
        string part = sentence.substr(pos, 3);
        cout << "Extracted part: " << part << endl;

        // 5. Replace "C++" with "Java"
        sentence.replace(pos, 3, "Java");
    }
    else {
        cout << "\"C++\" not found." << endl;
    }

    // 6. Show final result
    cout << "Final sentence: " << sentence << endl;

    return 0;
}
