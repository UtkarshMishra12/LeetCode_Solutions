#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string restoreString(string s, vector<int>& indices){
    int n=s.size();
    pair<int,char> m[n];
    for(int i=0;i<n;i++){
        m[i]=make_pair(indices[i],s[i]);
    }
    sort(m,m+n);
    string ss="";
    for(auto i:m){
        ss+=i.second;
    }
    return ss;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
