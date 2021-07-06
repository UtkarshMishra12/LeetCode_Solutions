#include <bits/stdc++.h>
using namespace std;
#define ll long long int
char findTheDifference(string s1, string s2) {
    sort(s1.begin(), s1.end());    
    sort(s2.begin(), s2.end());      
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
             return s2[i];
        }
    }   
    return s2[s2.size()-1];
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
