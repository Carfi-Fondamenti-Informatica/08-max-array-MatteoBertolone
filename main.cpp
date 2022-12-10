#include <iostream>
#include "lib.h"
using namespace std;
int main(){
	int n;
	cin>>n;
	float arr [n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<< numeri(arr,n) <<endl;
	return 0;
}
