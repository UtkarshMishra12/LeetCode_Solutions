#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
        int index  = 0;
        if(ruleKey == "color")          index = 1;
        else if(ruleKey == "name")      index = 2;
    
        int counter = 0;
        for(int i = 0; i < items.size();i++){
            if(items[i][index] == ruleValue){
                counter++;
            }
        }
        return counter;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 