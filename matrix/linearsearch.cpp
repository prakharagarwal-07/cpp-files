#include <iostream>
using namespace std;


pair<int,int> find( int mat[3][3] , int rows , int col , int target ){


    int i;
    int j;


    for( i = 0 ; i < rows ; i++ ){

        for( j = 0 ; j < col ; j++ ){

            if( mat[i][j] == target ){

                return {i,j};


               
                
            }



        }
    }

    return {-1,-1};

}


int main(){

    int mat[3][3] = { { 1,2,3 } , { 4,5,6 } , { 7,8,9 } };
    int rows = 3;
    int col = 3;

    int target = 5;

    pair<int,int> ans = find( mat , rows , col , target );

    cout << ans.first << " , " << ans.second ;






}