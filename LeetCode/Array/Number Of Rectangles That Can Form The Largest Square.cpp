#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


int countGoodRectangles(vector<vector<int>>& r) {
        int ans=INT_MIN;
        vector<int> x;
        for(int i=0;i<r.size();i++){
            ans=max(ans, min(r[i][0], r[i][1]));
            x.push_back(min(r[i][0], r[i][1]));
        }
        int c=0;
        for(int i=x.size()-1;i>=0;i--){
            if(x[i]==ans)
                c++;
        }
        return c;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 