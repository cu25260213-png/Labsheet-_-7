

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
