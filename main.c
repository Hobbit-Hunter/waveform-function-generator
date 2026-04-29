#include <stdio.h>
#include "waveform.h"

int main(){
    FILE *fp=fopen("../power_quality_log.csv","r");
    if(fp==NULL){
        printf("error: file not found");
        return 1;
    }
    //file has been opened
    char line[257];
    int row;
    waveform w;

    while(fgets(line,sizeof(line),fp)!=NULL){
        row++;
        sscanf(line,"%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
               &w.timestamp,
               &w.phase_A_voltage,
               &w.phase_B_voltage,
               &w.phase_C_voltage,
               &w.line_currency,
               &w.frequency,
               &w.power_factor,
               &w.thd_percent);
    }
    //while loop has gone through each line of csv file
    rms(w.phase_A_voltage);
    printf("root mean squared : %lf", rms);
}