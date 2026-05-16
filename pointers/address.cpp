#include <iostream>
using namespace std;
void change2(int& x){ // pass by ref using &

    x = 30 ;
    
}
int change( int* x ){  //pass by ref using pointer

    *x = 20 ;
     
    return *x;

}
int main(){

    int a = 10;

    change(&a);

    cout << a <<endl;

    int b = 60 ;

    change2(b);


    cout << b <<endl;
}