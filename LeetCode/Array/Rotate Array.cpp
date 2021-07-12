#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector <int> v(n,0);
        for(int i=0;i<n;i++){
            v[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
