#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int countCharacters(vector<string>& words, string chars) {
        int res=0;
        unordered_map<char,int> m;
        for(auto i:chars){
            m[i]++;
        }
        
        for(int i=0;i<words.size();i++){
            unordered_map <char,int> mp;
            int flag=true;
             for(int j = 0; j < words[i].size(); j++){ 
                 mp[words[i][j]]++;
                if(mp[words[i][j]] > m[words[i][j]]) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) res += words[i].size();
        }
        return res;
int main() {
    //Call Func
	// your code goes here
	return 0;
}
