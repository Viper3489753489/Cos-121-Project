#include "Minion.h"
#include <iostream>
using namespace std;
unsigned int Minion::numberOfDefaultMinions=0;

string Minion::getName()
{
  return name;
}

void Minion::setName(string n)
{
  name = n;
}

 Minion::Minion()
{
  numberOfDefaultMinions++;
  height = 1;
  numEyes= 2;
  setName("Minion");
  walkSpeed=0;
  cout<<"A default minion was created\n";
}


