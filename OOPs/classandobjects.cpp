#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:                

double salary;                 //put salary inside private so that no one can directly access salary outside this class

public:

    string name = "prakhar";              // universally defined for all the objects
    string subject;
    string dept = "CSE";


    void changeDept( string newDept ){         //member fxn used to perform actions on objects

        dept = newDept;
 
    }

    void setSalary( double newSalary ){

        salary = newSalary;
    }

    void getSalary(){

        cout << salary;
    }



};

int main(){

    Teacher t1;
    Teacher t2;

    t2.name = "alice";                      // we can change the properties

    cout << t1.name << endl;
    cout << t2.name << endl;

    t1.changeDept("ECE");

    cout << t1.dept << endl;
    cout << t2.dept << endl;



    t1.setSalary(10000);
    t1.getSalary();


    

    

}