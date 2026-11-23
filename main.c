
#include <stdio.h>
#include <math.h>

void calc_trig(double deg, double *s, double *c, double *t);

int main(void)
{
    double deg;
    double s, c, t;

    scanf("%lf", &deg);

    calc_trig(deg, &s, &c, &t);

    printf("%.4f,%.4f,%.4f", s, c, t);

    return 0;
}

void calc_trig(double deg, double *s, double *c, double *t)
{
    double rad = deg * M_PI / 180.0;

    *s = sin(rad);
    *c = cos(rad);
    *t = tan(rad);
}
