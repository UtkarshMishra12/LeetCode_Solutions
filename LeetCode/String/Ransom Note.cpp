#include <bits/stdc++.h>
using namespace std;
#define ll long long int
sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int h1[300]={0}, h2[300]={0};
    for(int i=0;i<s1.size();i++){
        h1[s1[i]]++;
    }
      
    for(int i=0;i<s2.size();i++){
        h2[s2[i]]++;
    }
      
    for(int i=0;i<300;i++){
        if(h1[i]>h2[i]){
            return false;
        }
    }
    return true; 
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
