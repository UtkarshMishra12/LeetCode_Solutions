#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int s=m+n;
        vector <int> v(m+n,0);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if(s%2!=0){
            return v[s/2];
        }
        else{
            int a=s/2;
            int b=a-1;
            return (float)( v[a]+v[b])/2;
        }
    return 0;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
