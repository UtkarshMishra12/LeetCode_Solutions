#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 char nextGreatestLetter(vector<char>& letters, char target) {
       for (auto c: letters)
            if (c > target) return c;
    return letters[0];
}
int main() {
    
	// your code goes here
	return 0;
}
