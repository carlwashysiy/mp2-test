#include <iostream>
#include "carl.h"
using namespace std;

int main()
{
    cout <<"input 2 numbers"<<endl;
    cout <<"number 1: ";
    int x;
    cin >>x;
    cout <<"number 2: ";
    int y;
    cin >>y;
    int z;
    cout <<"adding numbers...\n";
    add(x,y,z);
    cout <<"sum is: "<<z;
    
}