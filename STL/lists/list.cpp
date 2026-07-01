#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main(){

    list<int> list;

    list.push_back(6);
    list.push_front(3);
    list.push_front(12);
    list.emplace_back(98);
    list.pop_front();

    for(int x : list){

        cout << x << " " ;
    }
}