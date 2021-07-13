#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int countSegments(string s) {
       int ans = 0;
    
       stringstream ss(s);
    
       string word;
    
       while(getline(ss, word, ' ')){
           if(word.length())
             ans++;
        }
    
    return ans;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
