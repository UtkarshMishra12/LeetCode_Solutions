#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int lengthOfLongestSubstring(string s){
   int ans=0;
   int n=s.size();
   int i=-1,j=-1;
   unordered_map<char,int> mp;
   while(true){
       bool f1=false,f2=false;
       //acquire
       while(i<n-1){
           f1=true;
           i++;
           char ch=s[i];
           mp[ch]++;
           if(mp[ch]==2){
               break;
           }
           else{
               int len=i-j;
               ans=max(ans,len);
           }
       }
       //release
       while(j<i){
           f2=false;
           j++;
           char ch=s[j];
           mp[ch]--;
           if(mp[ch]==1){
               break;
           }
       }
       
       if(f1==false&& f2==false){
           break;
       }
   }
   
   return ans;
}

int main() {
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    //Call Func
	// your code goes here
	return 0;
}
 