#include <iostream>
using namespace std;
int main(){

    int x = 10;


    int y = ++x;                // short way of writing a+1=a++
                                // if we write a++ - kaam,update ---> called post increment operator
                                // if we write ++a - update, kaam ---> called pre increment operator
                                // similar for a-- and --a ---> post and pre decrement operators



    cout <<" y = "<<  y << endl;
    cout <<" x = "<<  x;

}