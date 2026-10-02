#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while( t-- ){



    int n;
    cin >> n;

    vector<int> arr(n);

    int i = 0;

    while(i<n){

        cin >> arr[i] ;
        i++;

    }

    int grp1 = 0;
    int grp2 = 0;
    int grp3 = 0;

    int j = 0;

    while( j < n ){

        if( arr[j] % 2 == 1 ){

            grp1++;
        }

        else{

            if( arr[j] % 4 == 0 ){

                grp2++;
            }
            else{

                grp3++;
            }
        }

        j++;


    }

    cout << max( grp1 , max(grp2 , grp3) ) << endl;

}



    

    return 0;


}