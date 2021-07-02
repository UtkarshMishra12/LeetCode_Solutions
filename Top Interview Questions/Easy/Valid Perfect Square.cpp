#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int ValidSqrt(int num){
       long long int s=0;
       long long int e=num;
        while(s<=e){
           long long int mid=(s+e)/2;
           if(mid*mid==num){
               return true;
           }
           if(mid*mid<num){
            s=mid+1;
           }
           else{
             e=mid-1;  
           } 
        }    
    return false; 
}
int main() {
    int n;cin>>n;
    cout<<ValidSqrt(n);
	// your code goes here
	return 0;
}
