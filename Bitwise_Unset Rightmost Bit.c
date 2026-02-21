#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    n=n&(n-1);
    printf("%d",n);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}