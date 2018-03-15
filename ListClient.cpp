#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;
L1.insert(31,1);
L1.insert(42,2);
L1.insert(53,3);
L1.insert(64,4);
L1.insert(35,5);
//L1.size();
//L1.display();

L2.insert(31,1);
L2.insert(42,2);
L2.insert(53,3);
L2.insert(64,4);
L2.remove(5);
L2.insert(35,5);
L1.get(1);
L2.get(2);
cout <<"list L1 is "<<" "<< L1.get(1)<<endl;

cout <<"list L2 is "<<" "<< L2.get(1)<<endl
//L2.size();
//L1.display();
 //Do some stuff with L1, L2, ...
 // ...

}
