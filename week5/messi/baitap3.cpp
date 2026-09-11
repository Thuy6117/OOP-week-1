#include <iostream>
#include <string>
using namespace std;

struct Flower {
    string name;
    double price;
    int quantity;
    string type;
};

int main() {
    Flower flowers[20];
    int N;

    // 1. Input
    cout << "Enter number of flowers: ";
    cin >> N;

    if (N < 1 || N > 20) {
        cout << "Invalid number!";
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cout << "\nFlower " << i + 1 << endl;

        cout << "Name: ";
        cin >> flowers[i].name;

        cout << "Price: ";
        cin >> flowers[i].price;

        cout << "Quantity: ";
        cin >> flowers[i].quantity;

        cout << "Type: ";
        cin >> flowers[i].type;
    }

    // 2. Display all flowers
    cout << "\n========== FLOWER SHOP ==========\n";

    for (int i = 0; i < N; i++) {
        cout << "\nFlower " << i + 1 << endl;
        cout << "Name: " << flowers[i].name << endl;
        cout << "Price: " << flowers[i].price << endl;
        cout << "Quantity: " << flowers[i].quantity << endl;
        cout << "Type: " << flowers[i].type << endl;
    }

    // 3. Find the most expensive flower
    int maxIndex = 0;

    for (int i = 1; i < N; i++) {
        if (flowers[i].price > flowers[maxIndex].price) {
            maxIndex = i;
        }
    }

    cout << "\nMost expensive flower: "
         << flowers[maxIndex].name
         << " (" << flowers[maxIndex].price << ")\n";

    // 4. Count flowers by type
    string typeSearch;
    int count = 0;

    cout << "\nEnter type to count: ";
    cin >> typeSearch;

    for (int i = 0; i < N; i++) {
        if (flowers[i].type == typeSearch) {
            count++;
        }
    }

    cout << "Number of " << typeSearch
         << " flowers: " << count << endl;

    // 5. Search flower by name
    string nameSearch;
    bool found = false;

    cout << "\nEnter flower name to search: ";
    cin >> nameSearch;

    for (int i = 0; i < N; i++) {
        if (flowers[i].name == nameSearch) {
            cout << "Found: "
                 << flowers[i].name
                 << " - Price: " << flowers[i].price
                 << " - Quantity: " << flowers[i].quantity
                 << " - Type: " << flowers[i].type
                 << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "Flower not found!\n";
    }

    // 6. Total value and average price
    double totalValue = 0;
    double totalPrice = 0;

    for (int i = 0; i < N; i++) {
        totalValue += flowers[i].price * flowers[i].quantity;
        totalPrice += flowers[i].price;
    }

    double averagePrice = totalPrice / N;

    cout << "\n========== REPORT ==========\n";
    cout << "Total value: " << totalValue << endl;
    cout << "Average price: " << averagePrice << endl;

    return 0;
}