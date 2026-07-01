#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool custom_comp(pair<int,int> p1 , pair<int,int> p2){  //the comp sorts the pairs acc to
                                                        //the second element then the first element

    if(p1.second < p2.second ){ return true; }
    else if( p1.second == p2.second ){
        if(p1.first < p2.first){
            return true;
        }
    }
    return false;
}





int main(){


    vector<pair<int,int>> vec = { {1,2} , {7,1} , {8,5} , {5,9} , {5,2} , {10,2}};

    sort(vec.begin() , vec.end() , custom_comp); // greater<int>() ---> for descending sort


    // greater<int>() ---> is known is comparator

    for( pair<int,int> p : vec){

        cout << p.first << " " << p.second << endl;
    }
}