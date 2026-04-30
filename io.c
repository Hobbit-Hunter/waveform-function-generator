//
// Created by Owner on 29/04/2026.
#include <stdio.h>
#include "io.h"
#include "waveform.h"
int read_file(char filename[], waveform* w) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("error: file not found");
        return 1;
    }
//file has been opened
    char line[257];
    int row=-1;

    while (fgets(line, sizeof(line), fp) != NULL) {
        if(row>=0){


            sscanf(line, "%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
                   &(w->timestamp[row]),
                   &(w->phase_A_voltage[row]),
                   &(w->phase_B_voltage[row]),
                   &(w->phase_C_voltage[row]),
                   &(w->line_currency[row]),
                   &(w->frequency[row]),
                   &(w->power_factor[row]),
                   &(w->thd_percent[row])); // Dereference the content of the struct,
                   // find the target location for that particular row item, then find the address to send the data to
        }
        row++;
    }
    fclose(fp);
    return 0;
}