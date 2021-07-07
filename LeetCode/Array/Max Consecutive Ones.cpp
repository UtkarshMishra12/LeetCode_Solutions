#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findMaxConsecutiveOnes(vector<int>& nums) {
    int min=0;
    int max=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            min++;
            if(min>max){
                max=min;
            }
        }
        else{
            min=0;
        }
    }
    return max;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
