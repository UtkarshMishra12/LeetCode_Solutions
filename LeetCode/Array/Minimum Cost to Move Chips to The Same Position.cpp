#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int minCostToMoveChips(vector<int>& position) {
        int even_cnt = 0;
        int odd_cnt = 0;
        for (int i : position) {
            if (i % 2 == 0) {
                even_cnt++;
            } else {
                odd_cnt++;
            }
        }
    return min(odd_cnt, even_cnt);
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
