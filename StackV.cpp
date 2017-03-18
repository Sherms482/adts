#include "StackV.h"
#include <iostream>
#include <vector>

using namespace std;

int Stack::size()
{
  return data.size();
}

void Stack::push(int val)
{
  data.push_back(val);
}

void Stack::pop()
{
   data.pop_back();
}

int Stack::top()
{
  int top = data.back();
  return top;
}

void Stack::clear()
{
  data.clear();
}
