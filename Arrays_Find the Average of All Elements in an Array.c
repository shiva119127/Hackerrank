#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long n;
    scanf("%ld",&n);
    long arr[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    long summ=0;
    for(int i=0;i<n;i++){
        summ+=arr[i];
    }
    double val=(double)summ/n;
    printf("%f",val);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}