#include <iostream>
using namespace std;
int main(){


    int mat[4][3] = {{ 1 , 2 , 3 } , {4 , 5,  6 } , { 7 , 8 , 9 } , { 10 ,11 ,12 } };  // each bracket is a row 
                                                                                        // row and column numbers start from 0 i.e 0,1,2,3 for rows
                                                                                                                            //0 , 1 , 2 for columns

    cout << mat[1][2] << endl;
    cout << mat[2][1] << endl;



}