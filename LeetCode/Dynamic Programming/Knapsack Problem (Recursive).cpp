#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int knapsack(int wts[],int prices[], int N, int W){
    //base case
    if(N==0 || W==0){
        return 0;
    }
    //rec case
    int inc=0,exc=0;
    if(wts[N-1]<=W){
        inc= prices[N-1] + knapsack(wts,prices,N-1,W-wts[N-1]);
    }
    exc= knapsack(wts,prices,N-1,W);
    return max(inc,exc);
}
int main() {
    int wts[]={2,7,3,4};
    int prices[]={5,20,20,10};
    int N=4;
    int W=11;
    cout<<knapsack(wts,prices,N,W);
	// your code goes here
	return 0;
}
