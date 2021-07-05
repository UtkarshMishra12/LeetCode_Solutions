#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int getSum(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10) * (n%10);
            n/=10;
        }
    return sum;
    
}
bool isHappy(int n) {
    if(n==1 || n==7)
        return 1;
            
    if(n<10)
        return 0;
            
    return isHappy(getSum(n));
}
int main() {
    cout<<isHappy(29);
	// your code goes here
	return 0;
}
