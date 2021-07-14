#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 string reverseWords(string s) {
      stringstream x(s);
      string r;
      string word;
      
      while(x>>word)
      {
          reverse(word.begin(),word.end());
          r+=word+" ";
      }
    return r.substr(0,r.length()-1); 
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
