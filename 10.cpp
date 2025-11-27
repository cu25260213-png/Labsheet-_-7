include <iostream>
#include <cstring>
using namespace std;

char* strrev_manual(char* str) {
    int len = strlen(str);
    for(int i=0; i<len/2; i++)
        swap(str[i], str[len-i-1]);
    return str;
}

int main() {
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);

    cout << "Reversed: " << strrev_manual(s);
}
