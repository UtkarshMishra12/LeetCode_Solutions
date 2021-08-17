#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int lis(vector <int> v){
    int n=v.size();
    vector <int> dp(n,1);
    int len=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>v[j]){
                dp[i]=max(dp[i],dp[j]+1);
                len=max(dp[i],len);
            }
        }
    }
    return len;
}
int main() {
    vector <int> v{10,9,2,5,3,7,101,18};
    cout<<lis(v)<<endl;
	// your code goes here
	return 0;
}
