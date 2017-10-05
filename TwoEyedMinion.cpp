#include "TwoEyedMinion.h"
#include <iostream>
using namespace std;
unsigned int TwoEyedMinion::numberOfTwoEyedMinions=0;

/** @brief (one liner)
  * TimeWalked will be a constant for now which will
  * influence the distance they walked based on their speed;
  */
void TwoEyedMinion::walk()
{
  int timeWalked = 5;
  int distance = walkSpeed * timeWalked;
  cout<<"I walked "<<distance<<"m over "<<timeWalked<<" seconds\n";
}

 TwoEyedMinion::TwoEyedMinion()
{
  numberOfTwoEyedMinions++;
  numEyes=2;
  height= 1;
  setName("Two Eyed Minion");
  walkSpeed=3;
  cout<<"A Two Eyed Minion was created\n";
}

