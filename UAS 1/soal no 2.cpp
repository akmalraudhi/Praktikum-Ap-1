#include <iostream>
#include <algorithm>
using namespace std;

struct Child {
    string name;
    int day, month, year;
};

bool compareByYear(const Child& a, const Child& b) {
    return a.year > b.year;
}

int main() {
    const int MAX_DATA = 20;
    Child children[MAX_DATA];

    // Input data randomly (for illustration purposes)
    // You would replace this with your actual data input logic.
    for (int i = 0; i < MAX_DATA; ++i) {
        cout << "Enter child's name: ";
        cin >> children[i].name;
        cout << "Enter birthdate (day month year): ";
        cin >> children[i].day >> children[i].month >> children[i].year;
    }

    // Display unsorted data
    cout << "\nUnsorted Data:\n";
    for (int i = 0; i < MAX_DATA; ++i) {
        cout << children[i].name << " - " << children[i].day << "/" << children[i].month << "/" << children[i].year << "\n";
    }

    // Sort data by birth year (oldest to youngest)
    sort(children, children + MAX_DATA, compareByYear);

    // Display sorted data
    cout << "\nSorted Data (by birth year):\n";
    for (int i = 0; i < MAX_DATA; ++i) {
        cout << children[i].name << " - " << children[i].day << "/" << children[i].month << "/" << children[i].year << "\n";
    }

    // Display children born in 2020
    cout << "\nChildren born in 2020:\n";
    for (int i = 0; i < MAX_DATA; ++i) {
        if (children[i].year == 2020) {
            cout << children[i].name << " - " << children[i].day << "/" << children[i].month << "/" << children[i].year << "\n";
        }
    }

    return 0;
}