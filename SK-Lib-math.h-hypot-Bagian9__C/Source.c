
#include <math.h>
#include <stdio.h>
#include <conio.h>

/*  Source by Microsoft
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    double x = 7.0, y = 9.0;

    printf("If a right triangle has sides %2.1f and %2.1f, its hypotenuse is %2.1f\n", x, y, _hypot(x, y));
    _getch();
    return 0;
}