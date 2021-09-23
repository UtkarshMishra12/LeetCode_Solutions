#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

  string sortString(string s) {
        string str;
        vector<int> freq(26,0);
        for(int i = 0; i<s.size();i++){
            freq[s[i] - 'a']++;
        }
        while(str.size()!=s.size()){
            for(int i = 0; i<26;i++){
                if(freq[i]!=0){
                    str+= 'a'+ i;
                    freq[i]--;
                }
            }
            for(int i = 25; i>=0;i--){
                if(freq[i]!=0){
                    str+= 'a'+ i;
                    freq[i]--;
                }
            }
        }
            
        return str;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 