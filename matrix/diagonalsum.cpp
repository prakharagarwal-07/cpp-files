#include <iostream>
using namespace std;

int diagonalSum( int mat[][3] , int rows , int col ){        // using O(n) approach by removing j loop important!.

    int i;
    int j;
    int dSum = 0;

    for( i = 0 ; i < rows ; i++ ){

        dSum += mat[i][i];

        if( i != rows-1-i ){


            dSum += mat[i][rows-1-i];
            

        }



        



            

      
        }




    return dSum;



}


int main(){

    int mat[3][3] = { { 1,2,3 } , { 4,5,6 } , { 7,8,9 } };
    int rows = 3;
    int col = 3;

    cout << diagonalSum( mat , rows ,col );




}