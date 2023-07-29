#include<stdio.h>
int main()
{
    float si, prin, roi, noy;
    printf("Enter Principle, Rate of interest, Number of years");
    scanf("%f%f%f", &prin, &roi, &noy);
    si=prin*roi*noy/100;
    printf("Principle=%f\nSimple Interest=%f", prin, si);
    return 0;
}
