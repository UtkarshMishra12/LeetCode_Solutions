#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll reverse(int n){
    ll ans=0;
    while(n!=0){
        ll a=n%10;
        n=n/10;
        ans=ans*10+a;
        if(ans<=INT_MIN || ans>=INT_MAX){
            return 0;
        }
    }
    return ans;
}
int main() {
    int x;cin>>x;
    cout<<reverse(x);
	// your code goes here
	return 0;
}
