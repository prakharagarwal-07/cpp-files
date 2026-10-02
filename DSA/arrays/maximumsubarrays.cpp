#include <iostream>
using namespace std;
int main(){

    int size = 5;
    int array[] = {1, 2, 3, 4, 5};

    int start;
    int end;
    int i;

    for(start = 0 ; start < size ; start++ ){
        for(end = start ; end < size ; end++ ){
            for( i = start ; i <= end ; i++){
                cout << array[i] ;
            }
            cout << " ";
        }
        cout << endl ;
    }
}