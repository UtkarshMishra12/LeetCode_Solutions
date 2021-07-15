#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int a=log10(nums[i])+1;
            if(a%2==0){
                c++;
            }
        }
    return c;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
