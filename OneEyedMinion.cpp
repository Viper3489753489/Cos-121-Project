#include "OneEyedMinion.h"
#include <iostream>
using namespace std;
unsigned int OneEyedMinion::numberOfOneEyedMinions=0;

/** @brief (one liner)
  *
  * TimeWalked will be a constant for now which will influence the distance they walked based on their speed;
  */
void OneEyedMinion::walk()
{
  int timeWalked = 5;
  int distance = walkSpeed * timeWalked;
  cout<<"I walked "<<distance<<"m over "<<timeWalked<<" seconds\n";
}

 OneEyedMinion::OneEyedMinion()
{
  numberOfOneEyedMinions++;
  numEyes=1;
  height= 1;
  setName("One Eyed Minion");
  walkSpeed=5;
  cout<<"A One Eyed Minion was created\n";
}

