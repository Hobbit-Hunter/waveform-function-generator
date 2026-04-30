#include <stdio.h>
#include "waveform.h"
#include "io.h"

int main(){
    waveform w;
    read_file("../power_quality_log.csv",&w);
    //while loop has gone through each line of csv file
    printf("root mean squared : %lf", rms(w.phase_A_voltage, LINES));
}