#include <iostream>
#include <map>
using namespace std;
int main(){


    map<string , int> m1;

    m1["laptop"] = 20;
    m1["tv"] = 100;
    m1["phones"] = 300;

    m1.insert(  {"watch" , 80}  );

    m1.emplace( "pen" , 50 );

    m1.erase("phones");

    for( pair<string , int> p: m1 ){

        cout << p.first << " " << p.second << endl;
    }

    cout << m1.count("laptop") << endl; // give the number of instance of laptop
    cout << m1["laptop"] << endl;

    if( m1.find("tv") != m1.end() ){ //if value found then it returns the end iterator

        cout << "found" << endl;

    }
    else {

        cout << "not found" << endl;
    }

    cout << m1.size() << endl;


    
}