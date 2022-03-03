#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int perfectSquare(int n){
    vector <int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int min=INT_MAX;
        for(int j=1;j*j<=i;j++){
            int rem=i-j*j;
            if(dp[rem]<min){
                min=dp[rem];
            }
        }
        dp[i]=min+1;
    }
    return dp[n];
}


int main() {
    cout<<perfectSquare(12);
    
    //Call Func
	// your code goes here
	return 0;
}
 