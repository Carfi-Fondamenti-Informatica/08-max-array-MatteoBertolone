#include "lib.h"
float max(int y, float x[]){
    float m=0;
    for(int j=0; j<y; j++){
        if(x[j]>m)
            m=x[j];
    }
    return m;
}
