#include "myFirstclass.h"
#include <iostream>
using namespace std;

myFirstclass :: myFirstclass()                      // called Constructor
{
    cout<<"inside the Constructor" << endl;

}
myFirstclass :: ~myFirstclass()                     // called descontructor
{

    cout << "inside the descontructor " << endl;
}
void myFirstclass ::  display()
{
    cout << "inside the display function " << endl;
}

