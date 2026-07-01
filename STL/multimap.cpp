#include <iostream>
#include <map>
using namespace std;
int main(){


    multimap<string , int> m1;    //cannot use m1["tv"] notation in multimap


    m1.emplace( "tv" , 100 );
    m1.emplace( "tv" , 100 );

    m1.emplace( "tv" , 100 );

    m1.emplace( "tv" , 100 );

   // m1.erase("tv");  //erases all the instances of tv

   m1.erase( m1.find("tv"));   //passing the itertator therefore only the first value is removed



                        

    for( pair<string , int> p: m1 ){

        cout << p.first << " " << p.second << endl; 
    }

   
    
}