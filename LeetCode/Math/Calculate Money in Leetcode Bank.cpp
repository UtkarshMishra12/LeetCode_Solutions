#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int totalMoney(int n) {
        int sum = 0;
        int k = 0;
        for(int i = 0;i<n;){
            for(int j=1;j<=7 and i<n;j++,i++){
                sum+=k+j;
            }
            k++;
        }
    return sum;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
