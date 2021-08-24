#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int firstBadVersion(int n) {
        int s=1;
        int e=n;
        while(s<=e){
            int mid= s + (e-s)/2;
            if(!isBadVersion(mid)){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 