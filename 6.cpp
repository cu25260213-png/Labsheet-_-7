#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[50], last[50];

    cout << "Enter first name: ";
    cin.getline(first, 50);

    cout << "Enter last name: ";
    cin.getline(last, 50);

    strcat(first, " ");
    strcat(first, last);

    cout << "Full name: " << first;
}
