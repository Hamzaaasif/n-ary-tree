#include<iostream>
using namespace std;
#include"nary.h"
int main()
{
  nary tree,*root=NULL;
  tree.insert(1,5,&root);
  tree.insert(2,5,&root);
  tree.insert(3,5,&root);
  tree.insert(4,5,&root);
  tree.insert(5,5,&root);
 // tree.insert(5,5,&root);
   tree.print(root);
  system("pause");

  //insert(int value,int size,nary**root)
}