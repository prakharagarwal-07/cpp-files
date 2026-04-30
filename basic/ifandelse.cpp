#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age : ";

    cin >> age;
        
    if(age >= 18){
        cout <<"welcome to the site! " <<endl;

    }
    
else if(age==10){ cout << "woah, i found you :)"<<endl;}
    else{
        cout << "sorry, you are not old enough to nter the site! " << endl;

       
            }

            string name;
            cout << "who is the best football player of all time ? ";
            cin >> name;

            if(name == "ronaldo" ){

                cout << "you are correct !! ";

            }
    
            else{
                cout << "No you are absolutely wrong !!! ";
                
            }
} 
    


