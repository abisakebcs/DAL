#include<iostream>
using namespace std;
int main()
{
   int n,a[50],temp;
   cout<<"Enter number of elements:\n";
   cin>>n;
   cout<<"Enter elements:\n";
   for (int i = 0; i<n ; i++)
      cin>>a[i];
      for (int i = 0; i<n-1;i++)
      {
         int flag=1;
         for(int j=0;j<n-i-1;j++)
         {
            if (a[j]>a[j+1])
            {
               temp = a[j];;
               a[j] = a[j+1];
               a[j+1] =temp;
            flag=0;
            }
         }
         if(flag!=0)
            break;
      }
      cout<<"Sorted array:\n";
      for(int i = 0;i<n ;i++)
         cout<<a[i]<<" ";
      return 0;
}
[24bcsl08@mepcolinux ex1]$g++ bubblesort.cpp
[24bcsl08@mepcolinux ex1]$./a.out
Enter number of elements:
7
Enter elements:
12
34
67
455
32
78
87
Sorted array:
12 32 34 67 78 87 455
