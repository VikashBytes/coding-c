#include <stdio.h>

int main() {
    float p, r, t, si, totalamount;

    // Principal amount, Rate of interest, Time period
    printf("Enter principal : ");
    scanf("%f",&p); // Principal
    printf("Enter rate: ");
    scanf("%f",&r); // Rate of interest
    printf("Enter Time : ");   
    scanf("%f",&t); // Time in years

    // Calculate simple interest
    si = (p * r * t) / 100;

    // Print the result
    printf("Simple Interest: %.2f\n", si); // Formatting to two decimal places
    totalamount = (si + p);
    printf("totalamount : %.2f",totalamount);
    return 0;
}