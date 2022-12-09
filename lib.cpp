#include "lib.h"

float max(int y, float x[]){
    float m=x[0];
    for(int j=1; j<y; j++){
        if(x[j]>m){
            m=x[j];
				}
    }
    return m;
}
