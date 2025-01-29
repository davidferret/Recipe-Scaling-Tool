#include <stdio.h>

void scaleRecipe(double originalAmount, double scaleFactor);
void displayFraction(double value);

int main(void) {
    double originalAmount, scaleFactor;

    printf("Enter the original ingredient amount (in cups, tbsp, tsp, or grams): ");
    while (scanf("%lf", &originalAmount) != 1 || originalAmount <= 0) {
        printf("Invalid input! Enter a positive numeric value: ");
        while (getchar() != '\n'); 
    }

    printf("Enter the scaling factor (e.g., 0.5 for half, 2 for double, etc.): ");
    while (scanf("%lf", &scaleFactor) != 1 || scaleFactor <= 0) {
        printf("Invalid input! Enter a positive numeric value: ");
        while (getchar() != '\n'); 
    }


    printf("\n--- Scaled Ingredient Amount ---\n");
    scaleRecipe(originalAmount, scaleFactor);

    return 0;
}


void scaleRecipe(double originalAmount, double scaleFactor) {
    double newAmount = originalAmount * scaleFactor;
    printf("New amount: %.2f (approximate decimal)\n", newAmount);
    printf("Fractional equivalent: ");
    displayFraction(newAmount);
}


void displayFraction(double value) {
    int numerator, denominator = 8; 
    numerator = (int)(value * denominator + 0.5); 

    if (numerator % denominator == 0) {
        printf("%d cups/tbsp/tsp/grams\n", numerator / denominator);
    } else {
        printf("%d/%d cups/tbsp/tsp/grams\n", numerator, denominator);
    }
}
