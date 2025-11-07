#include <stdio.h>

int main() {
    int units;
    double total_bill;

    // Prompt user to enter units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate total bill based on consumption rules
    if (units >= 0 && units <= 30) {
        total_bill = units * 20;
    } else if (units >= 31 && units <= 60) {
        total_bill = units * 25;
    } else if (units > 60) {
        total_bill = units * 30;
    } else {
        printf("Invalid units entered.\n");
        return 1;
    }

    // Display total bill
    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}
