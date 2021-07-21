#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int numJewelsInStones(string jewels, string stones) {
        int num=0;
        for(auto i:jewels){
            for(auto n:stones){
                if(i==n){
                    num++;
                }
            }
        }
    return num;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
