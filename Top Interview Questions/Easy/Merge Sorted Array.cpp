#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //put the values from num2 into num1 at the place of zeros
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());//sort the array
         
    }
int main() {
    
	// your code goes here
	return 0;
}
