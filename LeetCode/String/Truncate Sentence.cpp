#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string truncateSentence(string s, int k) {
        stringstream ss(s);
        string x;
        string r="";
        while(getline(ss,x,' ') && k--){
            r+=x+" ";
        }
    return r.substr(0,r.size()-1);
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
