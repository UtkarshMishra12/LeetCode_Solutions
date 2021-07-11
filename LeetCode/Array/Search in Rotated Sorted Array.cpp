#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int search(vector<int>& a, int key) {
    int n = a.size();

	//Logic
	int s = 0;
	int e = n - 1;

	while(s<=e){
		int mid = (s+e)/2;

		if(a[mid]==key){
			return mid;
		}

		//2 cases
		if(a[s]<=a[mid]){
			//left
			if(key>=a[s] and key<=a[mid]){
				e = mid - 1;
			}
			else{
				s = mid + 1;
			}

		}
		else{
			//right

			if(key>=a[mid] and key<=a[e]){
				s = mid + 1;
			}
			else{
				e = mid - 1;
			}

		}

	}
	return -1;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
