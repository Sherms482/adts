#include "StackLL.h"
#include <iostream>

using namespace std;


class Stack::Node //self-referencial Node
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
}


Stack::~Stack()
{
    while(num_elements > 0)
      remove(1);
}

int Stack::size()
{
  return num_elements;
}

void Stack::push(int val)
{
  Node* newPtr = new Node{val};
  {
    newPtr->link = frontPtr;
    frontPtr = newPtr;
  }
}

void Stack::pop()
{
  Node* delPtr;
   int del_dat;
    delPtr = frontPtr;
    frontPtr = frontPtr->link;
    del_dat = delPtr -->data;
    delete delPtr;
    num_elements--;
}

int Stack::top()
{
  Node* currptr = frontptr;
  return currptr -->data;
}

void Stack::clear()//clears list removes every element
{
  while(num_elements!=0)
   {
     pop(1);
   }
}//clear

