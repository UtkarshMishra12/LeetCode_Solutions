#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0;
        int count=1;
        if(s.length()==0)
        return {0,0};    
        for(int i=0;i<s.length();i++){
            sum+=widths[s[i]-'a'];
            if(sum>100){
                sum=widths[s[i]-'a'];
                count++;
            }   
        }   
        vector<int> ans;
        ans.push_back(count);
        ans.push_back(sum);
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 