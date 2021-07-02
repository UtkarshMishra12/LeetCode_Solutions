#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int Sqrt(int x){
    ll s=0;
    ll e=x;
    ll ans=0;
    while(s<=e){
        ll mid=(s+e)/2;
        if(mid*mid==x){
            return mid;
        }
        if(mid*mid<x){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
    
}
int main() {
    int n;cin>>n;
    cout<<Sqrt(n);
	// your code goes here
	return 0;
}
