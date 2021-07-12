#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int curdif=0;
        int maxdif=INT_MIN;
        for(int i=0;i<n-1;i++){
            curdif=nums[i+1]-nums[i];
            if(curdif>maxdif){
                maxdif=curdif;
            }
        }
    return maxdif;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
