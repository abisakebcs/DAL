#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, pattern;
    int i = 0, j = 0;
    bool found = false;

    cout << "Enter text: ";
    cin >> text;

    cout << "Enter pattern: ";
    cin >> pattern;

    int n = text.length();
    int m = pattern.length();

    while (i < n)
    {
        if (j == m)
        {
            found = true;
            break;
        }

        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
    }

    if (found)
        cout << "Pattern found" << endl;
    else
        cout << "Pattern not found" << endl;

    return 0;
}
[24bcsl08@mepcolinux ex2]$g++ cat  p2.cpp
[24bcsl08@mepcolinux ex2]$./a.out
Enter text: elements
Enter pattern: element
Pattern found
[24bcsl08@mepcolinux ex2]$g++ p2.cpp
[24bcsl08@mepcolinux ex2]$./a.out
Enter text: hello
Enter pattern: a
Pattern not found
