#ifndef CREATOR_H_INCLUDED
#define CREATOR_H_INCLUDED
#include <string>

using namespace std;


class Minion {
  public:
    static unsigned int numberOfDefaultMinions;
  protected:
    int walkSpeed;// They will each inherit the ability to walk
    string name; //Maybe we could just assign an Clone ID to them later?
    int height;
    int numEyes;
    void setName(string n);
  public:
    Minion();
    string getName();
    //just some basic stuff the minions can do
    virtual void walk()= 0; //we can make them walk at different speeds

};



#endif // CREATOR_H_INCLUDED
