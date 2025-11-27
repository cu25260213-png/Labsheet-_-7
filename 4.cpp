include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100], t1[100], t2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    strcpy(t1, s1);
    strcpy(t2, s2);

    if(strcmp(t1, t2) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}
