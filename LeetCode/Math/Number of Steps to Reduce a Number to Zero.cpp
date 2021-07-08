#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int numberOfSteps(int num) {
    int c=0;
    while(num!=0){  
        if(num%2==0){
            c++;
            num=num/2;
        }
        else{
            c++;
            num=num-1;
        }
    }   
    return c;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
