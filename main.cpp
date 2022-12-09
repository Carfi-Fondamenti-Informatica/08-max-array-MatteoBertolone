#include <iostream>
#include "lib.h"
int main(){
	int l=0;
    float a[l];
    do{
        cin>>l; 
    }while(l<1);
    for(int i=0; i<l; i++){
        cin>>a[i];
    }
    cout<< max(l,a)<<endl;
 	return 0;
}
