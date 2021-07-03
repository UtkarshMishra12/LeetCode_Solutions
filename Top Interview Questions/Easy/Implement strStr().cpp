#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int strStr(string haystack, string needle) {
    if(needle.size()==0){
            return 0;
    } 
    int p=haystack.find(needle);
    if(p!=string::npos){
        return p;
    } 
    else return -1;
}
int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<strStr(s1,s2);
	// your code goes here
	return 0;
}
