#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 vector<int> twoSum(vector<int>& numbers, int target) {
        /*vector <pair<int,int>> v;
        for(int i=0;i<numbers.size();i++){
            v.push_back({numbers[i],i});
        }
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=v[i].first+v[j].first;
            if(sum==target){
                 return {v[i].second+1, v[j].second+1};
            }
            if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};*/
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                return {i+1,j+1};
            }
            else if(sum<target){
                i++;
            }
            else{
                --j;
            }
        }
        return {};
    }
int main() {
   
	// your code goes here
	return 0;
}
 