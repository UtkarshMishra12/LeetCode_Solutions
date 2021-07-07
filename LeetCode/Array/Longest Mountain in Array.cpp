#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int longestMountain(vector<int>& v) {
    int n=v.size();
    int largest=0;
    for(int i=1;i<=n-2;){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            int count=1;
            int j=i;
            //Backwards
            while(j>=1 && v[j]>v[j-1]){
                j--;
                count++;
            }
            //Forward
            while(i<=n-2 && v[i]>v[i+1]){
                i++;
                count++;
            }
            largest=max(count,largest);
        }
        else{
            i++;
        }
    }
    return largest;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
