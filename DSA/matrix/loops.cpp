#include <iostream>
using namespace std;
int main(){


    int mat[4][3] = {{ 1 , 2 , 3 } , {4 , 5,  6 } , { 7 , 8 , 9 } , { 10 ,11 ,12 } };  

    int rows = 4;
    int col = 3;


    int i;
    int j;

    for( i = 0 ; i < rows ; i++ ){

        for( j = 0 ; j < col ; j++ ){

            cout << mat[i][j] << " ";
        }

        cout << endl;
    }





   


}