#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool PalindromeNumber(int x){
    int num = x;
    // Make the reverse integer as unsigned int to increase the range 
    unsigned int rev=0;
    
    // For negative integers reverse will not be a palindrome
    while(num>0){
        rev = rev*10+num%10;
        num = num/10;
    }
    //If actual number  and reverse is same return true
    if(rev==x)
        return true;
    return false;
}
int main() {
    int x;cin>>x;
    cout<<PalindromeNumber(x);
	// your code goes here
	return 0;
}
