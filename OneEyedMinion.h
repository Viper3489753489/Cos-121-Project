#ifndef ONEEYEDMINION_H_INCLUDED
#define ONEEYEDMINION_H_INCLUDED

#include "Minion.h"


class OneEyedMinion: public Minion {
  public:
    static unsigned int numberOfOneEyedMinions;
    OneEyedMinion();
    virtual void walk();
};


#endif // ONEEYEDMINION_H_INCLUDED
