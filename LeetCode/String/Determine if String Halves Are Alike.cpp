#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 bool halvesAreAlike(string s) {
        int n=s.size();
        int m=n/2;
        int a=0,b=0;
        for(int i=0;i<m;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                a++;
            }
        }
         
        for(int i=m;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                b++;
            }
        }
        if(a==b){
            return true;
        }
        return false;
 }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
