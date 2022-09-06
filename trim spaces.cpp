#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char trimSpaces(char input[]) 
{
   
    int i = 0, j = 0;
    while (input[i])
    {
        if (input[i] != ' ')
        input[j++] = input[i];
        i++;
    }
    input[j] = '\0';
    return *input;
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

