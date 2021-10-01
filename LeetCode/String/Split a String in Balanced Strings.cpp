#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int balancedStringSplit(string s) {
        //4%
        /*int l=0,r=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                r++;
            }
            else if(s[i]=='L'){
                l++;
            }
            if(l==r){
                ans++;
                l=0;
                r=0;
            }
        }
        return ans;*/
        //100%
        int count=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                count++;
            }
            else if(s[i]=='L'){
                count--;
            }
            if(count==0){
                ans++;
            }
        }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 