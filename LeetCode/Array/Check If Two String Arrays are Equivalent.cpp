#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(auto i:word1){
            s1+=i;
        }
        for(auto i:word2){
            s2+=i;
        }
        if(s1==s2){
            return true;
        }
    return false;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
