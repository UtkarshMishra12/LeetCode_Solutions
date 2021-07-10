#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<int>> threeSum(vector<int>& arr) {
       int n = arr.size();
        // base condition
        if(n < 3)
            return {};
        //result array
        vector<vector<int>> res;
        
        // array must be sorted
        sort(arr.begin() , arr.end());
        
        // iterate through the array
        for(int i = 0; i < n; i++)
        {
            // skip the duplicates
            if(i > 0 && arr[i] == arr[i-1])
                continue;
            
            // two pointers
            int j = i+1, k = n-1;
            
            // try to decrease this window
            while(j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum < 0)
                    j++;
                else if(sum > 0)
                    k--;
                else
                {
                    // got a triplet
                    res.push_back({arr[i] , arr[j] , arr[k]});
                    
                    //skip the duplicates
                    while(j < k && arr[j] == arr[j+1]) j++;
                    while(j < k && arr[k] == arr[k-1]) k--;
                    j++;
                    k--;
                }
            }
                
        }
        return res;
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
