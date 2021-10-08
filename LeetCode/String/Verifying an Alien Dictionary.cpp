#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 bool compare(string& a, string& b, string& order) {
        int i = 0;
        while (i < a.size() && a[i] == b[i]) i++;
        if (a.size() == i) return true;
        else if (b.size() == i) return false;
        return (order.find(a[i]) < order.find(b[i]));
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0; i < words.size()-1; i++) {
            if (!compare(words[i], words[i+1], order)) return false;
        }
        return true;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 