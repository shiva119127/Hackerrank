#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int pro=1,summ=0;
    while(n>0){
        int m=n%10;
        pro=pro*m;
        summ=summ+m;
        n=n/10;
    }
    printf("%d",pro-summ);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}