#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int n=nums.size(),i,j,count;
        vector<int> res;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(nums[i]>nums[j] and i!=j)
                count++;
            }
            res.push_back(count);
        }
    return res;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
