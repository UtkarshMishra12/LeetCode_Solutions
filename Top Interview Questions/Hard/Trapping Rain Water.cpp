#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int trap(vector<int>& v) {
    int n=v.size();
    if(n<=2){
        return 0;
    }
    vector <int> l(n,0),r(n,0);
    l[0]=v[0];
    r[n-1]=v[n-1];
        
    for(int i=1;i<n;i++){
        l[i]=max(l[i-1],v[i]);
        r[n-i-1]=max(r[n-i],v[n-i-1]);
    }
    int result=0;
    for(int i=0;i<n;i++){
        result+=min(l[i],r[i])-v[i];
    }
    return result;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
