#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isSubsequence(string s, string t) {
        int j=0;
        int c=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j]){
                c++;
                j++;
                if(c==s.size()){
                    break;
                }
            }
        }
        
        if(c==s.size()){
            return true;
        }
        else{
            return false;
        }
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
