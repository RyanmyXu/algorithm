#include <stdio.h>
#define pi 3.14
#include <math.h>
int main() {
    int r;
    double area;
    scanf("%d",&r);
    area = pi * pow(r,2.0);
    printf("%.7lf",area);
    return 0;
}
