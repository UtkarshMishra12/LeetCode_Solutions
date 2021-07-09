#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 bool selfDivide(int num){
        int left = num;
        int remainder;
        while(left){
            remainder = left%10;
            if(remainder==0 || num%remainder != 0) return false;
            left/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            if(selfDivide(i)) result.push_back(i);
        }
        return result;
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
