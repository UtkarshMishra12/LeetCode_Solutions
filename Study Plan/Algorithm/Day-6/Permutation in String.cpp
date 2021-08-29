#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }    
        vector<int> mp1(26),mp2(26);
        int ns1=s1.size(),ns2=s2.size();
        for(auto& i:s1){
            mp1[i-'a']++;
        }    
        for(int i=0;i<ns2;i++){
           mp2[s2[i]-'a']++; 
           if(i>=ns1){
               mp2[s2[i-ns1]-'a']--;
           }    
           if(mp1==mp2) return true;
        }
        return false;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 