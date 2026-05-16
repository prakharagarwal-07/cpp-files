#include <iostream>
using namespace std;
int main(){

    int arr[] = {1, 2, 3, 4 ,5};

    cout << arr <<endl;  //arr is a pointer to the first index on array

    cout << *arr <<endl; 

    cout << *(arr + 4) << endl;
}