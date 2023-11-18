#include <stdio.h>
#include <math.h>
#define STEPS 25
#define EPS 1e-10

int main() {
    double Start, End;
    printf("Enter A and B:");
    scanf_s("%lf %lf", &Start, &End);
    for (double x = Start; x <= End; x += (End - Start) / STEPS) {
        double sum = 1;
        double S = 1;
        double answer = cos(x);

        double i = 0;
        printf("X: %lf\n", x);
        while (fabs(sum - answer) > EPS) {
            S *= -((x * x) / ((i + 1.0) * (i + 2.0)));
            sum += S;
            i += 2;
        }

        printf("Taylor: %.18lf\tReal: %.18lf\tDifference: %.18lf\n", sum, answer, fabs(sum - answer));

    }
    return 0;
}
