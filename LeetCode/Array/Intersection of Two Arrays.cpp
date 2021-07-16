#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector <int> v;
        set<int>s1;
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                s1.insert(nums1[i]);
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
        for(auto i:s1){
            v.push_back(i);
        }
    return v;
}
int main() {
    
	// your code goes here
	return 0;
}
