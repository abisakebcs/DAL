[24bcsl08@mepcolinux ex4]$cat Heap.cpp
#include <iostream>
using namespace std;

void heapify(int H[], int n, int k) {
    int v = H[k];

    while (2 * k <= n) {
        int j = 2 * k;

        if (j < n && H[j] < H[j + 1])
            j = j + 1;

        if (v >= H[j])
            break;

        H[k] = H[j];
        k = j;
    }

    H[k] = v;
}

void buildHeap(int H[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        heapify(H, n, i);
    }
}

void heapSort(int H[], int n) {
    buildHeap(H, n);

    for (int i = n; i > 1; i--) {
        int temp = H[1];
        H[1] = H[i];
        H[i] = temp;

        heapify(H, i - 1, 1);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int H[n + 1];

    cout << "Enter elements:\n";
    for (int i = 1; i <= n; i++)
        cin >> H[i];

    buildHeap(H, n);

    cout << "\nMax Heap:\n";
    for (int i = 1; i <= n; i++)
        cout << H[i] << " ";
    cout << "\n" << endl;
    heapSort(H, n);

    cout << "\nSorted Max Heap:\n";
    for (int i = 1; i <= n; i++)
        cout << H[i] << " ";
    cout << "\n" << endl;
    return 0;
}
[24bcsl08@mepcolinux ex4]$g++ Heap.cpp
[24bcsl08@mepcolinux ex4]$./a.out
Enter number of elements: 8
Enter elements:
89
45
23
12
56
87
74
52

Max Heap:
89 56 87 52 45 23 74 12


Sorted Max Heap:
12 23 45 52 56 74 87 89
