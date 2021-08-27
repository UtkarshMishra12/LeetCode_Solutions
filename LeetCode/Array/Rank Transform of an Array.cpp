#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy(arr);
        sort(copy.begin(), copy.end());
        copy.erase(unique(copy.begin(), copy.end()), copy.end());
        
        vector<int> ans;
        for(int num : arr) {
            int rank = lower_bound(copy.begin(), copy.end(), num) - copy.begin() + 1;
            ans.push_back(rank);
        }
        
        return ans;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 