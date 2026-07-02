#include <iostream>
#include <string>
using namespace std;
int main(){

    string str = "hello ";  //dynamic in nature can be resized

    string s1 = "hello ";  
    string s2 = "world";

    string s3 = s1 + s2;

    cout << s3 << endl;

    cout << str << endl;

    cout << (s1 < s2) << endl ;   //checks lexicographically returns 1 or 0 for true and false

    cout << s1.length() << endl;


    string str1;

    getline(cin , str1);

    cout << str1 << endl;
}