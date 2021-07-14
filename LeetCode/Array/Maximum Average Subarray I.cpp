#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double findMaxAverage(vector<int>& nums,int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }    
        double maxe=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            maxe=max(sum,maxe);
        }
    return maxe/k;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
