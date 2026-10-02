#include <iostream>
using namespace std;
int main(){

    int x = 6738;
    int *ptr = &x;    // to store the value of address of any variable
    int**ptr2 = &ptr;    //pointer to pointer

    /*cout << &x << endl;   //value of address
    cout << ptr <<endl;
    cout << &ptr <<endl;*/
    cout << *(ptr2) << endl;
    cout << *( &ptr2 ) <<endl;


}