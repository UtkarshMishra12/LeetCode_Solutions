#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

bool searchMatrix(vector<vector<int>>& m, int target) {
        for(auto i:m){
            for(auto j:i){
                if(j==target){
                    return true;
                }
            }
        }
        return false;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 