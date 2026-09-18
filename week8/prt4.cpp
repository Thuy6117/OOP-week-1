#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void studentProfile() {
    string name, id, email, hometown;

    cout << "Full name: ";
    getline(cin, name);

    cout << "Student ID: ";
    getline(cin, id);

    cout << "Email: ";
    getline(cin, email);

    cout << "Hometown: ";
    getline(cin, hometown);

    cout << "\n--- STUDENT PROFILE ---\n";
    cout << "Full name : " << name << endl;
    cout << "Student ID: " << id << endl;
    cout << "Email     : " << email << endl;
    cout << "Hometown  : " << hometown << endl;
}


void greetingMessage() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;
    cout << "Welcome to C++ programming!" << endl;
}


void initials() {
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Initials: ";

    for (int i = 0; i < name.length(); i++) {
        if (i == 0 && name[i] != ' ') {
            cout << (char)toupper(name[i]) << ".";
        }
        else if (name[i - 1] == ' ' && name[i] != ' ') {
            cout << (char)toupper(name[i]) << ".";
        }
    }

    cout << endl;
}


void findWord() {
    string sentence, word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter a word to find: ";
    getline(cin, word);

    size_t pos = sentence.find(word);

    if (pos != string::npos) {
        cout << "The word \"" << word
             << "\" is found at position " << pos << "." << endl;
    }
    else {
        cout << "The word \"" << word
             << "\" is not found." << endl;
    }
}


void createUsername() {
    string name, year;
    string username = "";

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your birth year: ";
    getline(cin, year);

    for (char c : name) {
        if (c != ' ') {
            username += (char)tolower(c);
        }
    }

    username += year;

    cout << "Username: " << username << endl;
}


int main() {
    int choice;

    do {
        cout << "\n========== 5 PRACTICE EXERCISES ==========\n";
        cout << "1. Student Profile\n";
        cout << "2. Greeting Message\n";
        cout << "3. Initials\n";
        cout << "4. Find a Word\n";
        cout << "5. Create a Username\n";
        cout << "0. Exit\n";
        cout << "===========================================\n";

        cout << "Choose an exercise: ";
        cin >> choice;
        cin.ignore();

        cout << endl;

        switch (choice) {
            case 1:
                studentProfile();
                break;

            case 2:
                greetingMessage();
                break;
case 3:
                initials();
                break;

            case 4:
                findWord();
                break;

            case 5:
                createUsername();
                break;

            case 0:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}
