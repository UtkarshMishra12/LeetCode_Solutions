#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int peakIndexInMountainArray(vector<int>& A) {
        /*int c=0;
        for(int i=1;i<=arr.size()-1;i++){
            if(arr[i]>arr[i-1]){ 
                c++;
            }
        }
        return c;*/
        int lo = 0, hi = A.size() - 1;
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (A[mi] < A[mi + 1])
                lo = mi + 1;
            else
                hi = mi;
        }
    return lo;
    
}
int main() {
    
	// your code goes here
	return 0;
}
