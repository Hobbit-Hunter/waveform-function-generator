#include <stdio.h>
#include "waveform.h"

typedef struct{
    double timestamp;
    double phase_A_voltage;
    double phase_B_voltage;
    double phase_C_voltage;
    double line_currency;
    double frequency;
    double power_factor;
    double thd_percent;
}waveform;
int main(){
    FILE *fp=fopen("test.txt","w");
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