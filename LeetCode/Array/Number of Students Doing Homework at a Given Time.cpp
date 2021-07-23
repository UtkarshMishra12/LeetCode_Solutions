#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int c=0;
        int n=s.size();
        /*for(int i=0;i<n;i++){
            for(int j=s[i];j<=e[i];j++){
                if(j==q){
                    c++;
                }
            }
        }*/
        for(int i = 0 ; i<n ; i++){
           if(max(s[i],e[i]) >= queryTime && startTime[i] <= queryTime){
            count++;
           }
        }
    return c;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
