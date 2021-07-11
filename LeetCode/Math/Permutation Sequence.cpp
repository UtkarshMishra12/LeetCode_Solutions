#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string getPermutation(int n, int k) {
        string s="1";
        for(int i=2;i<=n;i++)
            s+=to_string(i);
        k--;
        
        while(next_permutation(s.begin(),s.end()) && --k);
        return s;
}
int main(){
    //For finding all the permutations of a given string
    /*string s="1";
    for(int i=2;i<=n;i++){
        s+=to_string(i);
    }
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<" ";
    }*/
    //Call Func
	// your code goes here
	int n=3;
	int k=3;
cout<< getPermutation(n,k);
	return 0;
}
  