#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return false;
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]%2!=0  && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
    return false;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
