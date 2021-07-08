#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> sumZero(int n) {
        vector<int> result;
        if(n % 2 != 0) result.push_back(0);
        int num = n / 2;
        while(num > 0){
            result.push_back(num);
            result.push_back(-num);
            num--;
        }
    return result;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
