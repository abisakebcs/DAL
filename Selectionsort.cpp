#include<iostream>
using namespace std;
int main()
{
   int temp,n,minval;
   int * a;
   cout<< "Enter no of Elements:"<<endl;
   cin>>n;
   a = new int[n];
   cout << "Enter Elements:"<<endl;
   for(int i=0;i < n;i++)
   {
      cin >> a[i];
   }
   for(int i=0;i < n-1;i++)
   {
      minval=i;
      for(int j=i+1;j < n;j++)
      {
         if(a[j] < a[minval])
         {
            minval=j;
         }
      }
      if(minval!=i)
      {
         temp =a[i];
         a[i]=a[minval];
         a[minval]=temp;
      }
   }
   cout <<"===========SELECTION SORT============\n"<<endl;
   cout<<"         SORTED ARRAY        \n";
   for(int i=0;i < n;i++)
   {
      cout << a[i]<<" ";
   }
   cout << "\n";
   return 0;
}





[24bcsl08@mepcolinux ex1]$g++ SELECTIONSORT.CPP
[24bcsl08@mepcolinux ex1]$./a.out
Enter no of Elements:
67
Enter Elements:
32
45
1
7
89
100
68
===========SELECTION SORT============

         SORTED ARRAY
1 7 32 45 68 89 100
