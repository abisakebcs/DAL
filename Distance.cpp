#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    int x[n], y[n];

    cout << "Enter the points (x y):\n";
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double min_dist = DBL_MAX;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double d = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                            (y[i] - y[j]) * (y[i] - y[j]));

            if (d < min_dist)
            {
                min_dist = d;
                x1 = x[i];
                y1 = y[i];
                x2 = x[j];
                y2 = y[j];
            }
        }
    }
    cout << "Closest Pair : (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ")" << endl;
    cout << "Minimum distance = " << min_dist << endl;
return 0;
}
[24bcsl08@mepcolinux ex2]$g++ pp1.cpp
[24bcsl08@mepcolinux ex2]$./a.out
Enter number of points: 4
Enter the points (x y):
2 3
1 5
8 3
4 7
Closest Pair : (2,3) and (1,5)
Minimum distance = 2.23607
