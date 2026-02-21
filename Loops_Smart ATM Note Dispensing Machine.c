#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
    int count1=0;
    int count2=0;
    int count3=0;
    while(a>0){
        if(a>=500){
            count1++;
            a=a-500;
        }
        else if(a>=200){
            count2++;
            a=a-200;
        }
        else{
            count3++;
            a=a-100;
        }
        
    }
    printf("500-rupee notes: %d\n",count1);
    printf("200-rupee notes: %d\n",count2);
    printf("100-rupee notes: %d\n",count3);
    
        
    }
    else{
        printf("Invalid amount");
    }

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
