#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll x,y;
        cin >> x>>y;
        // row's even no. has revere order
        // col's even no. has normal order 

        if(x>y){
            if(x%2==0){
                cout<<((x*x)-(y-1))<<endl;
            }
            else{
                cout<<(((x-1)*(x-1)+1) +(y-1))<<endl;
            }
        }
        else{
             if(y%2==0){
                cout<<(((y-1)*(y-1)+1) +(x-1))<<endl;
            }
            else{
                cout<<((y*y)-(x-1))<<endl;
            }
        }

    }


    return 0;
}