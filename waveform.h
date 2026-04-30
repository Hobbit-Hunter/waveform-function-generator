//
// Created by Owner on 27/04/2026.
//

#ifndef WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H
#define WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H

#define LINES 1000

typedef struct{
    double timestamp[LINES];
    double phase_A_voltage[LINES];
    double phase_B_voltage[LINES];
    double phase_C_voltage[LINES];
    double line_currency[LINES];
    double frequency[LINES];
    double power_factor[LINES];
    double thd_percent[LINES];
}waveform;
double rms(double vals[], int size);
double pktopk(double vals[], int size);
double DC_offset(double vals[], int size);
double clipping(double vals[], int size);
double compliance_check(double vals[], int size);
#endif //WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H