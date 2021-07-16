#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum=0;
        double n=salary.size();
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
        }
    double t=n-2;
    return sum/t;
}
int main() {
    
	// your code goes here
	return 0;
}
