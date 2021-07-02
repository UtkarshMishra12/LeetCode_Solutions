#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int climbStairs(int n) {
    //base case
    if(n==1){
        return 1;
    }
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    for(ll i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
    
    }
int main() {
    int n;cin>>n;
    cout<<climbStairs(n);
	// your code goes here
	return 0;
}
