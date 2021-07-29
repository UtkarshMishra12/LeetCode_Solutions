#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 vector<int> productExceptSelf(vector<int>& nums) {
        //Brute Force TLE
        /*vector <int> v;
        int n=nums.size();
        int j=0;
        while(j!=n){
            int prod=1;
             for(int i=0;i<n;i++){
                 if(j==i){
                     continue;
                 }
                 prod*=nums[i];
             }
             v.push_back(prod);
             j++;
        }
       return v;*/
        
        // Optimal Solution Time O(N) & Auxiliary Space O(1)
        int n=nums.size();
        vector<int> res;
        if(n<1)
            return res;
        
        int prod=1; 
        
        for(int i=0;i<n;++i){   
            prod*= nums[i];
            res.push_back(prod);            
        }
        
        
        prod=1;
        for(int i=n-1;i>0;i--){  
            res[i]=res[i-1]*prod;
            prod*=nums[i];
        } 

        res[0]=prod;
        return res;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
