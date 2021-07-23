#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> replaceElements(vector<int>& arr) {
        /*int n=arr.size();
        vector <int> v(n,0);
        if(n==1){
            return {-1};
        }
        for(int i=0;i<n;i++){
            v[i]= *max_element(arr.begin()+i+1,arr.end());
        }
        v[n-1]=-1;
        return v;*/  //412ms
        vector <int> v(arr);
        int n=arr.size();
        int maxx=-1;
        for(int i=n-1;i>=0;i--){
            v[i]=maxx;
            maxx=max(maxx,arr[i]);
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
