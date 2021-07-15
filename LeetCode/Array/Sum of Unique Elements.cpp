#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sumOfUnique(vector<int>& nums) {
        int sum=0;
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second==1){
                sum+=i.first;
            }
        }
    return sum;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
