#include <stdio.h>


int main() {
    int units;
    float bill = 0.0;

    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid Input!");
        return 0;
    }

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 300) {
        bill = (100 * 5) + (units - 100) * 7;
    } else {
        bill = (100 * 5) + (200 * 7) + (units - 300) * 10;
    }

    if (bill <= 1200) {
        bill = bill - (0.10 * bill);
    }

    printf("The electricity bill is: %.2f.", bill);

    return 0;
}
