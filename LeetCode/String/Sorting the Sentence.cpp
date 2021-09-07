#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 string sortSentence(string s) {
        string word;
        vector<string>v(10);
        for(int i=0;i<s.size();i++){
            if(s[i]>=48 and s[i]<=57){
                v[s[i]-48]=word+" ";
                word="";
                i++;
            }
            else{
                word+=s[i];            
            }
        }
        string ans;
        for(string it:v){
            ans+=it;
        }
        ans.pop_back();
        return ans;   
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 