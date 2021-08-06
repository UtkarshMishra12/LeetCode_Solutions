#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> prefixesDivBy5(vector<int>& nums) {
        long long int i,x,sum=0;
        vector<bool>v;
        for(i=0;i<nums.size();i++){
            sum=2*sum+nums[i];
            if(sum%5==0){
                v.push_back(true);
            }
            else{
                v.push_back(false);
                sum=sum%5;
            }
        }
        return v;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
