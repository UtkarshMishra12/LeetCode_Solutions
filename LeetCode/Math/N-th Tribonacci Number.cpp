#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string largestOddNumber(string num) {
int tribonacci(int n) {
        int dp[n+3];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
    return dp[n];
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
