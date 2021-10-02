#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int smallestRangeI(vector<int>& A, int k) {
        int n=A.size(),ma=INT_MIN,mi=INT_MAX;
        for(int i=0;i<n;i++){
            ma=max(ma,A[i]);
            mi=min(mi,A[i]);
        }
        return max(0,ma-mi-2*k);
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 