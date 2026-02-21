#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1;
    int flag=0;
    scanf("%d",&num1);
    if(num1>1){
        for(int i=2;i<=num1-1;i++){
            if(num1%i==0){
                flag=1;
                break;
            }
            // else{
            //     printf("Prime");
            //     break;
            // }
        }
        if(flag==0){
            printf("Prime");
        }
        else{
            printf("Composite");
        }
    }
    else{
        printf("None");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}