#include <iostream>
#include "lib.h"

int main(){
	int l=0;
    cin>>l;
	float a[l]; 
    for(int i=0; i<l; i++){
        cin>>a[i];
    }
    cout<< max(l,a);
 	return 0;
}
