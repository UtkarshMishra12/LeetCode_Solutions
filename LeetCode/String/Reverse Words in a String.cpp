#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

string reverseWords(string s) {
        stack <string> st;
        for(int i=0;i<s.size();i++){
            string w="";
            if(s[i]==' ')continue;
            while(s[i]!=' ' && i<s.size()){
                w+=s[i];
                i++;
            }
            st.push(w);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        return ans.substr(0,ans.size()-1) ;
    }

int main() {
     string s="Utkarsh mishra";
     cout<<reverseWords(s);
    
    //Call Func
	// your code goes here
	return 0;
}
 