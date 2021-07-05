#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> kidsWithCandies(vector<int>& c, int k) {
        vector <bool> v;
        int max= *max_element(c.begin(), c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]+k >= max){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
    return v;
} 
int main() {
    int k;cin>>k;
    vector <int> v={1,2,3};
    kidsWithCandies(v,k);
	// your code goes here
	return 0;
}
