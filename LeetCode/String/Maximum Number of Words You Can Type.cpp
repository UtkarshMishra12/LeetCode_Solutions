#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int canBeTypedWords(string text, string brokenLetters) {
        /*vector <string> v;
        string s="";
        for(int i=0;i<text.size();i++){
            if(text[i]==32){
                v.push_back(s);
                s="";
            }
            else{
                s+=text[i];
            }
        }
        int c=2;
        for(auto i:v){
            if(i.find(brokenLetters)){
                c--;
            }
        }
        return c;
        */
       stringstream ss(text);
       string w;
       int c=0,k=0;
       while(ss>>w){
           for(auto x:brokenLetters){
               if(w.find(x)!=string::npos){
                   c++;
                   break;
               }
           }
           k++;
       }
        
        return k-c;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 