#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int d=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if( (abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c) ){
                        d++;
                    }
                }
            }
        }
    return d;
        
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
