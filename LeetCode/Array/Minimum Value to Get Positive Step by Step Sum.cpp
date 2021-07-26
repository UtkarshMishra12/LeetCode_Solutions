#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int minStartValue(vector<int>& nums) {
        int sum = 0 ;
        int ans = 1;
        for(int i : nums){
            sum += i ;
            if(sum <=0)
                ans = max(ans , 1-sum);
        }
    return ans;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
