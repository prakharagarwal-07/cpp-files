#include <iostream>
#include <string>
using namespace std;
int main(){

    char c = 'A';

    cout << isupper(c) << endl;  //checks if uppercase


    c = tolower(c);   //decapitalises the upper char

    cout << c << endl;

    char x = '#';

    cout << isalnum(x);  //checks if the given char is alpha numeric or not


    string s = "ddrrttabcffttyy";

    cout << s.find("abc") <<endl;  //returns the index of first char of string

    s.erase( s.find("abc") , 3 );

    cout << s << endl;


}
