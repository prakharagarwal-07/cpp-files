#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){

    char arr[] = { 'a' , 'b' , 'c' , '\0'};  // \0 is null value it makes the char array a proper string 

    cout << arr << endl;                // here arr does not give the address but makes the whole array a string

    

    char strng[100];



    cout << "enter the char array : " ;

    cin.getline(strng , 100  , '#');     //getline is used to print spaces in char array it will print "hello world" without excluding world
                            //cin.getline( name of array , length , delimiter ) --> delimiter breaks the string on entering a specific char

    cout << endl;
    cout << endl;


    cout << strng << endl; 

        cout << strlen(strng) << endl;         //to measure size of array it has time complxty O(n)




    for( int i = 0 ; i < strlen(strng) ; i++  ){

        cout << strng[i] << " ";
    }


}