#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int> finalPrices(vector<int>& p) {
        vector <int> v;
        int n=p.size();
        for(int i=0;i<n;i++){
            v.push_back(p[i]);
            for(int j=i+1;j<n;j++){
                if(p[j]<=p[i]){
                    v[i]= p[i]-p[j];
                    break;
                }
            }
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
