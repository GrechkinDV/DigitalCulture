#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double deg, val, z1, z2;
    val = PI/180;
    scanf("%lf", &deg);

    z1 = cos(deg*val) +  cos(2*deg*val) + cos(6*deg*val) + cos(7*deg*val);
    z2 = 4 * cos(deg*val/2) * cos(deg*val*5/2) * cos(4*deg*val);
    printf("%lf %lf", z1, z2);
}
