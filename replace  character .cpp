#include <iostream>
#include <cstring>
using namespace std;
void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int len=strlen(input);
    for (int i = 0; i <=len-1; i++)
    {
        if (input[i]==c1)
        {
            input[i]=c2;
        }
    }
}
int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}