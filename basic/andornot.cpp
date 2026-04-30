#include <iostream>
using namespace std;
int main(){


    // && - and
    // || - or
    // ! -reverses the logical state

    int temp;

    cout << "enter the temperature : ";
    cin >> temp ;

    if (temp >30 && temp < 60){

        cout << "the temp is medium !\n ";
    }

    else if (temp > 60){

            cout <<"the temperature is high ! \n";
    }

    else if(temp < 30){
        cout << "the temperature is low ! \n";

    }

    bool sunny = false;

    if (!sunny){

        cout << "it is sunny outside ! ";

    }

    else{

        cout << "it is cloudy outside ! ";

    }
    
    
        
        
}