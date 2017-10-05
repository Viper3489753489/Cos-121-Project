#include "OneEyedMinion.h" //Concrete product
#include "TwoEyedMinion.h" //Concrete product
#include <iostream>
#include <time.h>
using namespace std;

int main(void){
  cout<<"##########################\n";
  cout<<"#Starting Up the factory!#\n";
  cout<<"##########################\n";
  cout<<endl;

///Functionality testing
  OneEyedMinion Clone1;

    Clone1.walk();
    Clone1.getName();
    cout<<endl;

  TwoEyedMinion Clone2;

    Clone2.walk();
    Clone2.getName();
    cout<<endl;

///Displaying Number of minions
  cout<< "Default minions:"<<Clone1.numberOfDefaultMinions <<endl;
  cout<< "One Eye minions:"<<Clone1.numberOfOneEyedMinions <<endl;
  cout<< "Two Eye minions:"<<Clone2.numberOfTwoEyedMinions <<endl;
  cout<<endl;


  cout<<"End of program\n";
}
