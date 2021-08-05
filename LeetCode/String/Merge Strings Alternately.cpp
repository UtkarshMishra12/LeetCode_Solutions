#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 string mergeAlternately(string word1, string word2) {
        string ss="";
        int i=0;
        int j=0;
        int n=word1.size();
        int m=word2.size();
        int s=max(n,m);
        int k=0;
        while(k<s){
            if(i<n){
                ss+=word1[i];
                i++;
            }
            if(j<m){
                ss+=word2[j];
                j++;
            }
            k++;
        }
        return ss;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
