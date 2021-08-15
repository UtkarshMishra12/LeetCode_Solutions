#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string lower(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
    }
    return s;
}

string upper(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
    }
    return s;
}
int main() {
    //string s; getline(cin,s);
    //cout<<convert(s);
    string s="AbcdEfG";
    cout<<lower(s)<<endl;
    cout<<upper(s)<<endl;
	// your code goes here
	return 0;
}
