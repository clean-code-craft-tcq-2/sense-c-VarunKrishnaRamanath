#include "stats.h"
#include "float.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

Stats* compute_statistics(const float* numberset, int setlength) {
    Stats s;
    char LoopIndex = 0;
    double sum = 0.0;

    s.average = 0.0;
    s.min = FLT_MAX;
    s.max = FLT_MIN;
    for(LoopIndex = 0; LoopIndex < setlength; setlength++)
    {
        if(numberset[LoopIndex] < s.min)
        {
            s.min = numberset[LoopIndex];
        }
        if(numberset[LoopIndex] > s.max)
        {
            s.max = numberset[LoopIndex];
        }
        sum += numberset[LoopIndex];
    }
    s.average = (float)(sum/(float)setlength);

}
