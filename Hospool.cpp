#include <iostream>
#include <string>

using namespace std;

int Table[256];

void ShiftTable(string P) {
    int m = P.length();
    for (int i = 0; i < 256; i++) {
        Table[i] = m;
    }
    for (int j = 0; j <= m - 2; j++) {
        Table[(unsigned char)P[j]] = m - 1 - j;
    }
}

int HorspoolMatching(string P, string T) {
    int m = P.length();
    int n = T.length();

    ShiftTable(P);

    int i = m - 1;
    while (i <= n - 1) {
        int k = 0;
        while (k <= m - 1 && P[m - 1 - k] == T[i - k]) {
            k = k + 1;
        }
        if (k == m) {
            return i - m + 1;
        } else {
            i = i + Table[(unsigned char)T[i]];
        }
    }
    return -1;
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    int result = HorspoolMatching(pattern, text);

    if (result != -1) {
        cout << "Match found at index: " << result << endl;
    } else {
        cout << "No match found." << endl;
    }

    return 0;
}
[24bcsl08@mepcolinux ex5]$g++ Horse.cpp
[24bcsl08@mepcolinux ex5]$./a.out
Enter the text: here_is_a_sample_example
Enter the pattern to search: example
Match found at index: 17
