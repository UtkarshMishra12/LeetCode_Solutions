#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

string reverseStr(string s, int k) {
       int n =s.size(),i=0;
        while(i<n){
            reverse(s.begin()+i,s.begin()+min(i+k,n));
            i=i+2*k;
        }
        return s;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 