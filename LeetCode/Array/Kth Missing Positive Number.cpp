#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int findKthPositive(vector<int>& arr, int k) {
        int left =0, right = arr.size()-1;
        while(left <= right){
            int mid = left+(right-left)/2;
            if(arr[mid]-mid-1 < k){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return left + k;
    }

int main() {
         //Call Func
	// your code goes here
	return 0;
}
 