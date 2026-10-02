#include <iostream>
using namespace std;
int main(){

char grade ='B';

int value =grade;  //B converted into asci value automatically // type conversion done automatically 


    cout << value << endl;
    cout << grade <<endl;

    double value1 = 10.67;

    int newvalue = (int)value1;  //type casting not done automatically by compiller as we are converting double(8bytes) to int (4bytes) so lack of memeory so it has to be forced using pranathesis

                                  

    cout << newvalue ;







    return 0;

}