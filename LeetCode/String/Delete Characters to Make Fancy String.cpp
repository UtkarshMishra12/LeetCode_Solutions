#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

string makeFancyString(string s) {
        string ans;
        int count = 1;
        for(int i=0;i<s.size();i++){
            ans += s[i];
            if(s[i] == s[i+1]){
                count++;
                if(count > 2){
                    ans.pop_back();
                }
            }
            else{
                count = 1;
            }
        }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 