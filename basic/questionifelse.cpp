#include <iostream>
using namespace std;
int main(){

    char value;

    cout << "enter your character - ";
    cin >> value;

    if (value >= 'a' && value <= 'z'){
        cout << "the character is lowercase";

    }
    else if ( value >= 'A' && value <='Z'){
        cout << "the caharacter is uppercase";

    }
    else { 
        cout << "this is a special character";
    }


}