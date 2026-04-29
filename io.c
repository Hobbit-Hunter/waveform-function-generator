//
// Created by Owner on 29/04/2026.
#include <stdio.h>
#include "io.h"
#include "waveform.h"
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
fclose(fp);
return row;