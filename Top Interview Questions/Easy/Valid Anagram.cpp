#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isAnagram(string s, string t) {
        int h1[300]={0};
        int h2[300]={0};
        for(int i=0;i<s.size();i++){
            h1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            h2[t[i]]++;
        }
        int c=0;
        for(int i=97;i<=122;i++){
            if(h1[i]!=h2[i]){
                c++;
                break;
            }
        }
        if(c==0){
            return true;
        }
        else{
            return false;
        }
    }
int main() {
    string s,t;cin>>s>>t;
    cout<<isAnagram(s,t);
	// your code goes here
	return 0;
}
