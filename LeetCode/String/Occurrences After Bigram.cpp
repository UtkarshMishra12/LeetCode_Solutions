#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

vector<string> findOcurrences(string text, string first, string second) {
		stringstream ss(text);
		string word;
		vector<string> v;

		while(ss >> word) v.push_back(word);

		vector<string> ans;
		for(int i=0;i<v.size()-2;i++){

			if(v[i] == first && v[i+1] == second){
				ans.push_back(v[i+2]);
			}

		}

		return ans;
    }


int main() {
    //Call Func
	// your code goes here
	return 0;
}
 