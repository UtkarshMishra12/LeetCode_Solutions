#include <bits/stdc++.h>
using namespace std;
#define ll long long int
static bool comparator(string a, string b){
        return (a+b) > (b+a);
    }
    string largestNumber(vector<int>& nums) {
        
        vector<string> vec;
        
        for(int i = 0; i < nums.size(); i++)
            vec.push_back(to_string(nums[i]));
        
        sort(vec.begin(), vec.end(), comparator);
        
        string str = "";
        
        for(int i = 0; i < vec.size(); i++)
            str += vec[i];
        
        while(str.size() > 1 && str[0] == '0')
            str.erase(str.begin());
        
    return str;
        
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
