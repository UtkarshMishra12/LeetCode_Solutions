#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minn=abs(arr[1]-arr[0]);
        vector <vector<int>>v;
        for(int i=0;i<arr.size()-1;i++){
            int a=abs(arr[i]-arr[i+1]);
            minn= min(a,minn);
        }
        for(int i=0;i<arr.size()-1;i++){
            if( abs(arr[i]-arr[i+1])==minn ){
                vector <int> vv;
                vv.push_back(arr[i]);
                vv.push_back(arr[i+1]);
                v.push_back(vv);
            }
        }
    return v;    
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
