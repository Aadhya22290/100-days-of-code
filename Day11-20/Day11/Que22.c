//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, profit, loss, profit_percentage, loss_percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        profit_percentage = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_percentage);
    } else {
        loss = cp - sp;
        loss_percentage = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_percentage);
    }

    return 0;
}