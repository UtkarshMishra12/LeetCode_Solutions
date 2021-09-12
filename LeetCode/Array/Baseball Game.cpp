#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int calPoints(vector<string>& ops) {
        stack<int> st;
        int sum=0;
        for(string i :ops){
            if(i=="D"){
                int x=2*st.top();
                st.push(x);
            }else if(i=="C"){
                st.pop();
            }else if(i=="+"){
                int y=st.top();
                st.pop();
                int z=st.top()+y;
                st.push(y);
                st.push(z);
            }else{
                int p=stoi(i);
                st.push(p);
            }
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 