#include<iostream>

using namespace std;
int main(){
    //cout << standart output
    //cin >> input
    
      string name ;
      int age;

      cout << "what is your age ?" << endl;
      cin >> age;

      cout << "what is your name ?";
      getline(cin >> ws, name);              //very important if the input contains spaces use getline function as shown


    cout << " hello " << name << endl;
    cout << "your age is - " << age;
      
      
      
        

    
}