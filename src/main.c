# include <stdio.h>
# include <math.h>

int main() {
    double a, z1, z2;

    printf("Enter alpha (in radians): ");
    scanf("%lf", &a);

    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(a), 2));
    z2 = 2 * sin(a);

    printf("z1 = %.10lf\n", z1);
    printf("z2 = %.10lf\n", z2);

    return 0;
}