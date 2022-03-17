#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int countSubstrings(string s) {
        int n=s.size();
        //vector <int,int> dp;
        int dp[n][n];
        int c=0;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){ // when the string is like a, b, c so it's a palindrome
                    dp[i][j]=1;
                }
                else if(g==1){// when the string is of length 2 like ab, bb, cd
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
                else{
                    // for the gap greater than and equal to 2  if the string of i and j are equal than check for  dp[i+1][j-1] is also a palindrome then it will be also 
                    if(s[i]==s[j] && dp[i+1][j-1]==true){
                        dp[i][j]=1;
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
                if(dp[i][j]==1) c++;
            }
        }
        return c;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 