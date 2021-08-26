#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

void moveZeroes(vector<int>& nums) {
         //O(N) O(N)
        /*vector <int> v;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        while(c--){
            v.push_back(0);
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }*/
        //O(N) O(1)
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        for(int i=j;i<nums.size();i++){
            nums[i]=0;
        }
    }

int main() {
    //Call Func
   	// your code goes here
	return 0;
}
 