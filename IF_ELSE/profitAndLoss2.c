#include <stdio.h>

int main() {
    int cp, sp, profit = 0, loss = 0;
    printf("Enter CP: ");
    scanf("%d", &cp);

    printf("Enter SP: ");
    scanf("%d", &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Wow, Profit: %d\n", profit);
    } else if (cp > sp) {
        loss = cp - sp;
        printf("Loss: %d\n", loss);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
