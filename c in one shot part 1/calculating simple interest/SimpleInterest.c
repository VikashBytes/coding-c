#include <stdio.h>

int main() {
    float p, r, t, si;

    // Principal amount, Rate of interest, Time period
    p = 100; // Principal
    r = 10;  // Rate of interest
    t = 2;   // Time in years

    // Calculate simple interest
    si = (p * r * t) / 100;

    // Print the result
    printf("Simple Interest: %.2f\n", si); // Formatting to two decimal places

    return 0;
}
