#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int subtractProductAndSum(int n) {
    int sum=0;
    int prod=1;
    while(n!=0){
        int a=n%10;
        prod*=a;
        sum+=a;
        n=n/10;
    }
    return prod-sum;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
