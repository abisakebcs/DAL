#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int v = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > v) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = v;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    insertionSort(A, n);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n" << endl;
    return 0;
}
[24bcsl08@mepcolinux ex4]$g++ insertion.cpp
[24bcsl08@mepcolinux ex4]$./a.out
Enter number of elements: 8
Enter elements:
-98
-54
-23
-89
78
56
12
36

Sorted array:
-98 -89 -54 -23 12 36 56 78
