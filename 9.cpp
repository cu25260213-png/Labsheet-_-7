

ChatGPT
You said:
1. Write a program to input a string and find its length using strlen(). 
2. Write a program to count the number of vowels in a string using strlen().

3. Write a program to copy one string to another using strcpy().

4. Write a program to input two strings and check if they are equal using strcpy() and 

comparison.

5. Write a program to concatenate two strings using strcat().

6. Write a program to join first name and last name using strcat().

7. Write a program to compare two strings using strcmp().

8. Write a program to check if two strings are equal (case-sensitive) using strcmp().

9. Write a program to arrange an array of strings in alphabetical order using strcmp().

10. Write a program to reverse a string using strrev().

11. Write a program to check if a string is palindrome using strrev().

12. Write a program to find the first occurrence of a character in a string using strchr().

13. Write a program to find the last occurrence of a character in a string using strrchr().

14. Write a program to find a substring inside another string using strstr(). 
15. Write a program to check if one string is present in another using strstr().
Give me the output of all the programs in simple c++
ChatGPT said:
Below are simple and clean C++ programs for all 15 tasks, each written separately so you can copy–paste and run them easily.

NOTE:

C++ does not have strrev() by default, but I implemented it manually.

strlen(), strcpy(), strcmp(), strcat(), strchr(), strrchr(), strstr() all require #include <cstring>.

✅ 1. Find length of a string using strlen()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length: " << strlen(str);
}
✅ 2. Count vowels in a string using strlen()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count++;
    }
    cout << "Vowels: " << count;
}
✅ 3. Copy one string to another using strcpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];
    cout << "Enter a string: ";
    cin.getline(s1, 100);

    strcpy(s2, s1);
    cout << "Copied string: " << s2;
}
✅ 4. Check if two strings are equal using strcpy() and comparison
#include <iostream>
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
✅ 5. Concatenate two strings using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    strcat(s1, s2);

    cout << "Concatenated: " << s1;
}
✅ 6. Join first name and last name using strcat()
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
✅ 7. Compare two strings using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    int result = strcmp(s1, s2);

    if(result == 0)
        cout << "Strings are equal";
    else if(result > 0)
        cout << "First string is greater";
    else
        cout << "Second string is greater";
}
✅ 8. Check if two strings are equal (case-sensitive) using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    if(strcmp(s1, s2) == 0)
        cout << "Equal (case-sensitive)";
    else
        cout << "Not equal";
}
✅ 9. Arrange array of strings in alphabetical order using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    char arr[n][100];

    cin.ignore();
    for(int i=0; i<n; i++)
        cin.getline(arr[i], 100);

    char temp[100];

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }

    cout << "Sorted strings:\n";
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
