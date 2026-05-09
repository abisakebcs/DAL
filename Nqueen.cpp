#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int x[100]; // x[k] = column position of queen in row k
int n;

// Check if safe
bool place(int k, int i)
{
    for (int j = 1; j < k; j++)
    {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
            return false;
    }
    return true;
}

// Print array format
void printArray()
{
    cout << "[ ";
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << "]\n";
}

// Print chessboard
void printBoard()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i] == j)
                cout << " Q ";
            else
                cout << " . ";
        }
        cout << endl;
    }
}

// Backtracking
void nQueens(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;

            if (k == n)
            {
                printArray();     //  array output
                printBoard();     //  chessboard output
                cout << "------------------\n";
            }
            else
                nQueens(k + 1);
        }
    }
}

// Driver
int main()
{
    cout << "Enter number of queens: ";
    cin >> n;

    nQueens(1);

    return 0;
}

[24bcsl08@mepcolinux EX8]$g++ nqueen.cpp
[24bcsl08@mepcolinux EX8]$./a.out
Enter number of queens: 4
[ 2 4 1 3 ]
 .  Q  .  .
 .  .  .  Q
 Q  .  .  .
 .  .  Q  .
------------------
[ 3 1 4 2 ]
 .  .  Q  .
 Q  .  .  .
 .  .  .  Q
 .  Q  .  .
------------------
