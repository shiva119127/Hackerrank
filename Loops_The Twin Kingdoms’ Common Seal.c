#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int new=1;
    int temp=0;
    if(a>b){
        temp=a;
    }
    else{
        temp=b;
    }
    for(int i=2;i<=temp;i++){
        if(a%i==0 && b%i==0){
            if(new<i){
                new=i;
            }
        }
    }
    printf("%d",new);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}