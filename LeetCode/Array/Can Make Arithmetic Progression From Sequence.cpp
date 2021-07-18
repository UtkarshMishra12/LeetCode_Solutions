#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k=arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=k){
                return false;
            }
        }
    return true;
}
int main() {
    
	// your code goes here
	return 0;
}
