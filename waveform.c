#include <math.h>
#include "waveform.h"
double rms(double vals[], int size) {
    int i;
    double sum;
    for (i;i<size;i++) {
        sum=0;
        sum += vals[i]*vals[i];
    }
    double sum;
    rms=sqrt(sum/i);
}
double pktopk(double vals[], int size) {
    int i;
    double max=vals[0];
    for (i;i<size;i++) {
        if (max<vals[i]) {
            max = vals[i];
        }
    }
    double min=vals[0];
    for (i;i<size;i++) {
        if (min>vals[i]) {
            min=vals[i];
        }
    }
    pktopk=max-min;
}
double DC_offset(double vals[], int size) {
    int i;
    double sum;
    for (i;i<size;i++) {
        sum=0;
        sum += vals[i];
    }
    DC_offset=sum/i;
}
double clipping(double vals[], int size)
double compliance_check(double vals[], int size)
// Created by Owner on 27/04/2026.
//