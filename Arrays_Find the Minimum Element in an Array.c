#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num=arr[0];
    for( int i=0;i<n;i++){
        if(arr[i]<num){
            num=arr[i];
        }
    }
    printf("%d",num);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}