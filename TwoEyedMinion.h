#ifndef TWOEYEDMINION_H_INCLUDED
#define TWOEYEDMINION_H_INCLUDED

#include "Minion.h"


class TwoEyedMinion: public Minion {
  public:
    static unsigned int numberOfTwoEyedMinions;
    TwoEyedMinion();
    virtual void walk();
};


#endif // TWOEYEDMINION_H_INCLUDED
