#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumres(int num1,int num2){
    int res=num1%10+num2%10;
    return res;
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int ress=sumres(num1,num2);
    printf("The sum of last digits is: %d",ress);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}