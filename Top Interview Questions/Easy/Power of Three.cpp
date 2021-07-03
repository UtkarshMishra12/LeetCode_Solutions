#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPowerOfThree(int n) {
    if(n<=0){ 
        return false;
    }        
    int c=ceil(log(n)/log(3));
    if(n==pow(3,c)){
     return true;
    }  
    return false;
}
int main() {
    int n;cin>>n;
    cout<isPowerOfThree(n);
	// your code goes here
	return 0;
}
