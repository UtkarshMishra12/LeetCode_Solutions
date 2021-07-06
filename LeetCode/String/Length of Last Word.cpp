#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int lengthOfLastWord(string s) {
    int i= s.size()-1;
    while(i>=0 && s[i] == ' ') i--;
    int l=0;
    while(i>=0 && s[i--] != ' ') l++;
    return l; 
}
int main() {
    string s="Hello World";
    cout<<lengthOfLastWord(s);
	// your code goes here
	return 0;
}
