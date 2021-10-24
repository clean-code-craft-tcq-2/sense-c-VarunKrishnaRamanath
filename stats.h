#if defined (__cplusplus)
extern "C" {
#endif

typedef struct{
    float min;
    float max;
    float average;
}Stats;

typedef void (*alerter_funcptr)();

extern int emailAlertCallCount;
extern int ledAlertCallCount;

extern void emailAlerter(void);
extern void ledAlerter(void);
Stats* compute_statistics(const float* numberset, int setlength);
void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], Stats computedStats);

#if defined (__cplusplus)
}
#endif
