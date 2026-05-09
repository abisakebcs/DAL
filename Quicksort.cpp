#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];     // choose first element as pivot
    int i = low + 1;
    int j = high;

    while (true)
    {
        while (i <= high && arr[i] <= pivot)
            i++;

        while (j >= low && arr[j] > pivot)
            j--;

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        else
            break;
    }

    // place pivot in correct position
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

// QuickSort function
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
[24bcsl08@mepcolinux ex3]$g++ quick.cpp
Enter number of elements: 8
Enter elements:
50
45
30
60
55
80
35
20
Sorted array:
20 30 35 45 50 55 60 80 [
