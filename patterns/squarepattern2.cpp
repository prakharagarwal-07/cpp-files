#include <iostream>
using namespace std;
int main(){
    int num = 1;


    int i;
    int j; 
    int n;

    cout << "enter the number of lines - ";
    cin >> n;

    for( i = 1 ; i<=n ; i++){

        for( j = 1 ; j<=n ; j++){

            cout << num << " ";


            num = num + 1;


        }

        cout << endl;
        
    }


}