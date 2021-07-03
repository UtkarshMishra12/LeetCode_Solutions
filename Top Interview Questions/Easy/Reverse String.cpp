#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void reverseString(vector<char>& s) {
    reverse(s.begin(),s.end());
}
  
int main() {
    int s;cin>>s;
    cout<<reverseString(s);
	// your code goes here
	return 0;
}
