#include <stdio.h>

int main() {
    int budget, numGuests;
    int foodCostPerGuest, decorationCost, musicCost, extraExpenses;

    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    int totalFoodCost = foodCostPerGuest * numGuests;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;

    if (totalCost <= budget) {
        if (numGuests > 5 && numGuests <= 50) {
            if (decorationCost < (0.3 * budget) || totalFoodCost < (0.5 * budget)) {
                if (numGuests > 25) {
                    if (musicCost > 0) {
                        printf("Celebration Approved");
                    } else {
                        printf("Celebration Denied");
                    }
                } else {
                    printf("Celebration Approved");
                }
            } else {
                printf("Celebration Denied");
            }
        } else {
            printf("Celebration Denied");
        }
    } else {
        printf("Celebration Denied");
    }

    return 0;
}
