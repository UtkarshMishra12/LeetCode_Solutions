#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> twoSum(vector<int>& numbers, int target) {
        vector <pair<int,int>> v;
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
    return {};
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
