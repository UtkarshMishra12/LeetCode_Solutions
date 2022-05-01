#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

bool backspaceCompare(string s, string t) {
        stack <char>s1;
        stack <char>t1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(s[i]);
            }
        }
        string ans1="";
            while(!s1.empty()){
                ans1+=s1.top();
                s1.pop();
            }
        
        
         for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(!t1.empty()){
                    t1.pop();
                }
            }
            else{
                t1.push(t[i]);
            }
        }
        string ans2="";
            while(!t1.empty()){
                ans2+=t1.top();
                t1.pop();
            }
        return ans1==ans2?1:0;
        
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 