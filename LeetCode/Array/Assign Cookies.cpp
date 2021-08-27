#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int findContentChildren(vector<int>& g, vector<int>& s) {
        /*priority_queue <int> g1,s1;
        for(auto i:g){
            g1.push(i);
        }
        for(auto i:s){
            s1.push(i);
        }
        int c=0;
        while(!g1.empty() && !s1.empty()){
            if(g1.top() > s1.top()){
                g1.pop();
            }
            else if(g1.top()<=s1.top()){
                c++;
                g1.pop();
                s1.pop();
            }
            
        }
        return c;*/
        int i=0,j=0,m=g.size(),n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<m && j<n)
        {
            if(g[i]<=s[j])
            {
                i++;
            }
            j++;
        }
        return i;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 