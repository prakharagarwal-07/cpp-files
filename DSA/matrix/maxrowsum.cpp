#include <iostream>
using namespace std;

int maxSum( int mat[][3] , int rows , int col ){

    int i;
    int j;
    int maxSum = INT_MIN;

    for( i = 0 ; i < rows ; i++ ){

        int currentSum = 0;

        for( j = 0 ; j < col ; j++ ){

            currentSum += mat[i][j];


        }

        maxSum = max( maxSum , currentSum );

    }

    return maxSum;



}


int main(){

    int mat[3][3] = { { 1,2,3 } , { 4,5,6 } , { 7,8,9 } };
    int rows = 3;
    int col = 3;

    cout << maxSum( mat , rows ,col );




}