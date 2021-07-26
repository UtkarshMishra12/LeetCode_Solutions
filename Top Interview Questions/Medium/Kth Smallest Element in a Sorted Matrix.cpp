#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int kthSmallest(vector<vector<int>>& matrix, int k) {
        //Time-28ms
        vector <int> v;
        for(auto row:matrix){
            for(auto i:row){
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
        
        //Time-36 ms
        /*priority_queue <int> pq;
        for(auto row:matrix){
            for(auto i:row){
                pq.push(i);
                if(pq.size()>k){
                    pq.top();
                }
            }
        }
        return pq.top();*/
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
