#include <iostream>
#include <vector>
using namespace std;
int main(){



    vector<vector<int>> matrix = { { 1,2,3 } , { 4,5,6,7,8 } , { 9,10 } };   //we can store different number of elements in rows 
                     


    // mat.size() ---> number of rows
    // mat[i].size() ----> gives the number of elements in ith row  or the number of columns in that row


    int i;
    int j;

    for( i = 0 ; i < matrix.size() ; i++ ){

        for( j = 0 ; j < matrix[i].size() ; j++ ){

            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }





}