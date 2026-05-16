#include <iostream>
using namespace std;
int main(){

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    cout << ++ptr << endl; // +4 bytes done i.e memory equal to 1 int is added
    cout << ptr + 2 << endl;
    return 0;
}