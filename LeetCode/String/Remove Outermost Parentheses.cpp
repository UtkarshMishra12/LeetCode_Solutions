#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


  string removeOuterParentheses(string str) {
        stack<char>s;
        string ans="";
        
        for(auto x:str){
            
            if(x=='('){
                
                if(!s.empty())  ans+='(';
                 
                s.push('(');
            
            } 
            
            else{
                
                s.pop();
                
                if(!s.empty()) ans+=')';
                          
            }
        }
        
        return ans;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 