#include "lib.h"

float array(float x[],int y){
	float m=x[0];
    for(int i=1; i<y; i++){
        if(x[i]>m){
        	m=x[i];
        }
    }
    return m;
}