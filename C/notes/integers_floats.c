// DS Int float notes
#include <stdio.h>
#include <math.h>


int main(){
    int people = 11;
    int apples = 24;
    int room = 200;
    printf("People: %d, apples: %d,room: %d\n", people, apples, room);
    printf("Each person gets %f apples\n", (float) apples/people);
    const float pi = 3.1415;
    float liters = 2.4;
    float fahrenheit = 72.8;
    printf("pi = %.4f, liters = %.2f, fahrenheit = %.1f\n", pi, liters, fahrenheit);
    printf("%d\n", (int) round(liters));
    printf("%f is 2 to the power of 3.\n", pow(2,3));
    printf("%.3f\n", sqrt(10));

    return 0;
}