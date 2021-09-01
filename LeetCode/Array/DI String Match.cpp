#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<int> diStringMatch(string s) {
        int l=0; int h=s.size();
        vector<int> res;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'I') {
                res.push_back(l);
                l++;
            } else {
                res.push_back(h);
                h--;
            }
        }
        s[s.size()-1] == 'I'? res.push_back(l): res.push_back(h);
        return res;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 