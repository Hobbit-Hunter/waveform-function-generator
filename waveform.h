//
// Created by Owner on 27/04/2026.
//

#ifndef WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H
#define WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H
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
double rms(double vals[], int size);
double pktopk(double vals[], int size);
double DC_offset(double vals[], int size);
double clipping(double vals[], int size);
double compliance_check(double vals[], int size);
#endif //WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H