#include <stdio.h>
#include <string.h>

int main() {
    int month, year;
    scanf("%d", &month);
    scanf("%d", &year);

    int valid = 1;

    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
        valid = 0;
    }

    if (year < 1) {
        printf("Invalid Year\n");
        valid = 0;
    }

    if (!valid) {
        return 0;
    }

    int isLeap = 0;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        isLeap = 1;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        printf("31");
    }
    else if (month == 2) {
        if (isLeap)
            printf("29");
        else
            printf("28");
    }
    else if(month==4 || month==6 || month==9 || month==11) {
        printf("30");
    }

    return 0;
}
