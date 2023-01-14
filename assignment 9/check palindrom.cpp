#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int length=strlen(str);
    for (int i = 0; i<=length-1; i++)
    {
        if (str[i]==str[length-1-i])
        {
            return 1;
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
