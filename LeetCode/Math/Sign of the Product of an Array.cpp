#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int arraySign(vector<int>& nums) {
      int p=0,n=0;
      
      for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
              return 0;
              break;
          } 
          if(nums[i]<0){
              n++;
           }   
      }
        if(n%2==0){
           return 1;
        }
        else if(n%2!=0){
            return -1;
        }
        return {};
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
