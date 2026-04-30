#include <math.h>
#include <stdio.h>
#include "waveform.h"
double rms(double vals[LINES], int size) {
    int i;
    double sum=0;
    for (i=0;i<size;i++) {
        sum += vals[i]*vals[i];
    }
    return sqrt(sum/size);
}
double pktopk(double vals[LINES], int size) {
    int i;
    double max=vals[0];
    for (i=0;i<size;i++) {
        if (max<vals[i]) {
            max = vals[i];
        }
    }
    double min=vals[0];
    for (i=0;i<size;i++) {
        if (min>vals[i]) {
            min=vals[i];
        }
    }
    return max-min;
}
double DC_offset(double vals[LINES], int size) {
    int i;
    double sum=0;
    for (i;i<size;i++) {
        sum += vals[i];
    }
    return sum/size;
}
double clipping(double vals[LINES], int size){
    int i;
    for(i=0;i<size;i++){
        if(fabs(vals[i])>324.9){
            printf("clipping at row: %d", i+1);
        }
    }
}
double compliance_check(double vals[LINES], int size){}
// Created by Owner on 27/04/2026.
//