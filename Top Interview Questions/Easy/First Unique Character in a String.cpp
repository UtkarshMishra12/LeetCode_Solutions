#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int firstUniqChar(string s) {
    int h[300]={0};
    for(int i=0;i<s.size();i++){
        h[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(h[s[i]]==1){
           return i;
        }
    }
    return -1;    
 }
int main() {
    string s;cin>>s;
    cout<<firstUniqChar(s);
	// your code goes here
	return 0;
}
