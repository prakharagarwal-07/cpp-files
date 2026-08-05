#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:

string dept;

string name;

string gender;

string subject;


   

    // non-parameterised constructor
    Teacher(){

        dept = "CSE";               //custom constructor
    }

    //parameterised constructor
    Teacher( string gender , string subject ){

        this->gender = gender;                          //// this pointer tell the comiler the this-> gender is the property of object and not
        this->subject = subject;                             //and not the parameter defined inside cons. . we can also write *(this).subject
    }



};

int main(){

    Teacher t1;                             //non para cons called
    Teacher t2( "male" , "maths" );        //para cons called 


    cout << t2.gender << endl;
    cout << t2.subject << endl;

    t1.name = "prakhar" ;

    cout << t1.name << endl;

    cout << t1.dept;
}