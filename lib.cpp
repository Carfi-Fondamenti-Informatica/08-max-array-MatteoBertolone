#include "lib.h"

float array(int d,float a[]){
    for(int i=0; i<d; i++){
        if(a[0]<=a[i]){
            a[0]=a[i];
        }else{
            a[i]=a[0];
        }
    }
    return a[0];
}