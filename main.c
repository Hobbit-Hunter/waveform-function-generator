#include <stdio.h>

typedef struct{
    double timestamp;
    double phase_A_voltage;
    double phase_B_voltage;
    double phase_C_voltage;
    double line_currency;
    double frequency;
    double power_factor;
    double thd_percent;
};
int main(){
    FILE *fp=fopen("","r");
    if(*fp==NULL){
        printf("error: file not found");
        return 1;
    }
}