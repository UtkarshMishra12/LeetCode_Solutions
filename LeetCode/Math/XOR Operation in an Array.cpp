#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int xorOperation(int n, int start) {
      int ar[n];
      int ans=0;

       for(int i=0;i<n;i++){
         ar[i]=start+(2*i);
       }
       for(int j=0;j<n;j++){
          ans^=ar[j];
       }
    return ans;   
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
