
using namespace std;
int main(){

    int month;

    cout << "enter a number (1-12) : ";
    cin >> month ;

    switch(month){         //alternative for many else if statemnets :)
         case 1: 
            cout << "it is january !";
            break;
         case 2: 
            cout << "it is february !";
            break;   
         case 3: 
            cout << "it is march !";
            break;
         case 4: 
            cout << "it is april !";