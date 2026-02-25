// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int angle;
//     scanf("%d",&angle);
//     if(angle<90){
//         printf("Acute Angle");
//     }
//     else if(angle==90){
//         printf("Right Angle");
//     }
//     else if(angle<180){
//         printf("Obtuse Angle");
//     }
//     else if(angle==180){
//         printf("Straight Angle");
//     }
//     else if(angle<360){
//         printf("Reflex Angle");
//     }
//     else if(angle==360){
//         printf("Full Rotation");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x == 0) {
        printf("Acute Angle");
        return 0;
    }

    int a = x % 360;

    if (a == 0) {
        printf("Full Rotation");
    }
    else if (a < 90) {
        printf("Acute Angle");
    }
    else if (a == 90) {
        printf("Right Angle");
    }
    else if (a < 180) {
        printf("Obtuse Angle");
    }
    else if (a == 180) {
        printf("Straight Angle");
    }
    else if (a < 360) {
        printf("Reflex Angle");
    }

    return 0;
}
