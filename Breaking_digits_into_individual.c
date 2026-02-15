#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int num1){
    int a=num1/100;
    int b=(num1/10)%10;
    int c=num1%10;
    printf("%d %d %d",a,b,c);
}

int main() {
    int num1;
    scanf("%d",&num1);
    split(num1);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}