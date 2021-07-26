#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> v;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
