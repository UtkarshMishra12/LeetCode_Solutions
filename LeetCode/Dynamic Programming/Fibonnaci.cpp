#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fib(int n){
    int dp[n+1]={0};
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main() {
    int n=7;
    cout<<fib(n);
    //Call Func
	// your code goes here
	return 0;
}
