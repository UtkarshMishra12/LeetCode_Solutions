#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 string longestCommonPrefix(vector<string>& strs) {
        int c=0,minn=1000;
        string str;
        for(int i=0;i<strs.size();i++){
            int len=strs[i].size();
            if(len<minn){
                minn=len;
                str=strs[i];
            }
        }
        for(int i=0;i<minn;i++){
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=str[i]){
                    return str.substr(0,c);
                }
            }
            c++;
        }
        return str.substr(0,c);
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 