[24bcsl08@mepcolinux ex9]$cat knapsack.cpp
#include<iostream>
using namespace std;

class Item
{
   friend class Node;
   public:
   int id;
   int weight;
   int value;
   int w_v;

   Item()
   {
      id = 0;
      weight = 0;
      value = 0;
      w_v = 0;
   }

   Item(int i, int w, int v)
   {
      id = i;
      weight = w;
      value = v;
      w_v = weight/value;
   }

   void printItem()
   {
      cout << "Id     : " << id << endl;
      cout << "Weight : " << weight << endl;
      cout << "Value  : " << value << endl;
      cout << "W_V    : " << w_v << endl;
   }

};

class Node
{
   friend class Item;
   public:
   Item item;
   Node * left;
   Node * right;

   Node(Item i)
   {
      item = i;
      left = NULL;
      right = NULL;
   }

   void printNode()
   {
      item.printItem();
   }

};

int main()
{
   Item i(1, 40, 4);

   cout << "Item 1:" << endl;
   i.printItem();

   cout << endl;

   cout << "Item 1: Node Version" << endl;
   Node n(i);
   n.printNode();

   return 0;
}

[24bcsl08@mepcolinux ex9]$g++ knapsack.cpp
[24bcsl08@mepcolinux ex9]$./a.out
Item 1:
Id     : 1
Weight : 40
Value  : 4
W_V    : 10

Item 1: Node Version
Id     : 1
Weight : 40
Value  : 4
W_V    : 10
[24bcsl08@mepcolinux ex9]$exit
exit
