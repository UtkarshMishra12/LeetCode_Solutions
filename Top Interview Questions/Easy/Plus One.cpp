#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> plusOne(vector<int>& v) {
    int n=v.size();
    int i;
    for(i=n-1;i>-1;i--)
    {
        if(v[i]+1<=9){	
            v[i]++;return v;
        }
        else{
            v[i]=0;
        }
    }
    if(i==-1){
        v.insert(v.begin(),1);
    }
    return v;
       
    }
int main() {
    int n;cin>>n;
    vector <int> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    plusOne(v);
	// your code goes here
	return 0;
}
