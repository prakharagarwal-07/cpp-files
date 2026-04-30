#include<iostream>
using namespace std;
int main(){
 
    int students = 20/2+3;               //BODMAS IS ALWAYS FOLLOWED
    //students = students + 2;
    //students = students + 3;
    //students += 5;              //other way to add rather than witing the first line

    //students *=4;                 //mutiplication
    //students /=3;                  //deicmal portion lost as using int data type so making it double
     
    cout << students  << endl;

    int remainder = students % 4;

    cout<<remainder;



}