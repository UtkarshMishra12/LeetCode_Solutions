#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxProduct(vector<int>& nums) {
        int best=INT_MIN;
        int min_prod=1,max_prod=1;
        
        for(auto &e:nums)
        {
            if(e<0) swap(min_prod,max_prod);    //swap because in case of -ve numbers i.e. if a and b such that a>b then negative of them will be reversed -a<-b
            
            max_prod=max(max_prod*e,e);     //to track maxm product
            min_prod=min(min_prod*e,e);     //to track minm product
            
            best=max(best,max_prod);
        }
        return best;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
