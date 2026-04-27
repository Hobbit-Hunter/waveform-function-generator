//
// Created by Owner on 27/04/2026.
//

#ifndef WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H
#define WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H
double rms(double vals[], int size);
double pktopk(double vals[], int size);
double DC_offset(double vals[], int size);
double clipping(double vals[], int size);
double compliance_check(double vals[], int size);
#endif //WAVEFORM_FUNCTION_GENERATOR_WAVEFORM_H