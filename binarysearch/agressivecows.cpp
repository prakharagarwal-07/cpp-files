#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool isValid( vector<int> &stalls , int cows , int mid ,int size){

    int lastPosition = stalls[0];
    int currentCows = 1;

    int i;

    for( i = 1 ; i < size ; i++ ){

        if( stalls[i] - lastPosition >= mid ){
            currentCows++;
            lastPosition = stalls[i];
        }
    }

    if( currentCows >= cows ){ return true ; }
    else { return false ; }
    


}


int findMin ( vector<int> &stalls , int cows , int size ){

    

    sort(stalls.begin() , stalls.end());

    

    int start = 1;
    int end = stalls[size-1]-stalls[0];
    int mid;

    while ( start <= end ){

        mid = start + ( end-start )/2;
        
        if(isValid( stalls , cows , mid , size )){

            start = mid+1 ;

        }

        else {
            end = mid - 1;
        }
    }
    return end;
}


int main(){


    vector<int> stalls = { 1 , 2  , 8 , 4 , 9 };
    int size = stalls.size();
    int cows = 3;

    cout << " the answer is - " << findMin( stalls , cows , size);

}
