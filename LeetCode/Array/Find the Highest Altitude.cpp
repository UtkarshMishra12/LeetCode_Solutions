#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector <int> v(n+1,0);
        v[0]=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+gain[i-1];
            v.push_back(sum);
        }
    return *max_element(v.begin(),v.end());
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
