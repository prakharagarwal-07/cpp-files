#include <iostream>
#include <climits>
using namespace std;
int main(){

    int size = 7;
    int array[] = {1, 2, 3, 4, 5, 6, 7};

    int start;
    int end;

    int maxSum = INT_MIN;

    for(start = 0 ; start < size ; start++ ){
        int currentSum = 0;
        for(end = start ; end < size ; end++ ){

            currentSum = currentSum + array[end];

            maxSum = max(currentSum , maxSum);
            
            
        }
        
    }

    cout << maxSum ;
}