#include <iostream>
using namespace std;
int main(){
    int size;



    int age[] = {4 , 5 ,6 ,15 , 5 , 89 , 890 ,34};
    int i;

    size = sizeof(age) / sizeof(int);





    for ( i = 0 ; i < size ; i++ ){

        cout << age[i] << endl;

    } 



}