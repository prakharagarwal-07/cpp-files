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
    Teacher( string gen , string sub ){

        gender = gen;
        subject = sub;
    }



};

int main(){

    Teacher t1;
    Teacher t2( "male" , "maths" );


    cout << t2.gender << endl;
    cout << t2.subject << endl;

    t1.name = "prakhar" ;

    cout << t1.name << endl;

    cout << t1.dept;
}