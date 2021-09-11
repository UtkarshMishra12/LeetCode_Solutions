#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<string> commonChars(vector<string>& A) {
         vector<string> ans;
         int ch[26];
         for(int i=0; i<26; i++) ch[i]=INT_MAX;
         for(string s : A) {
             int cur[26]={0};
             for(char x : s) cur[x-'a']++;
             for(int i=0; i<26; i++) ch[i]=min(ch[i],cur[i]);   
         }
         for(int i=0; i<26; i++) {
              while(ch[i]--) {
                  string word;
                  word+='a'+i;
                  ans.push_back(word);
              }
         }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 