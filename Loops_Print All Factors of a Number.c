#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        if(num%i==0)
            printf("%d ",i);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}