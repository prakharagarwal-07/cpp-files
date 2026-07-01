#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){

    pair<int , char> pair1 = { 4 , 'A' };

    pair<int , pair<char , int>> pair2 = { 1 , { 'E' , 4 }};

    cout << pair1.first << endl;
    cout << pair1.second << endl;

    cout << pair2.first << endl;
    cout << pair2.second.first << endl;
    cout << pair2.second.second << endl;
    cout <<endl;
        cout <<endl;

            cout <<endl;



    vector< pair< int , int>> vec = { { 1, 2} , { 4 , 5}  , { 4 , 5}};

    vec.push_back({ 23 , 24});

    for( pair<int , int>  x : vec ){

        cout << x.first << " " << x.second << endl;


    }

        cout <<endl;
        cout <<endl;

            cout <<endl;

            deque<pair<int,int>> deq = { { 1,2} ,{3,4} };

            deq.push_front({ 12 , 10 });
            deq.emplace_back( 44 , 55);  //we dont need to pair it using {} if we se emplace fxn.

            for( auto p : deq ){

                cout << p.first << " " << p.second << endl;
            }






} 
