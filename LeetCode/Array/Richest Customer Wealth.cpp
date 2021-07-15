#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(auto row : accounts){
            int sum = 0;
            for(auto element : row){
                sum += element;
            }
            maxi = max(maxi, sum);
            sum = 0;
        }
    return maxi;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
