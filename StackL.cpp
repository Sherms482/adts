#include "StackL.h"
#include <iostream>
using namespace std;


int Stack::size()
{
   return data.size();
}

void Stack::push(int val)
{ 
  data.insert(val,1);
}

void Stack::pop()
{
  data.remove(1);
}

int Stack::top()
{
  int top= getAt();
  return top;
}

void Stack::clear()
{
  data.clear();
}

