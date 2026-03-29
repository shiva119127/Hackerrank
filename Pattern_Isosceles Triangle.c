#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>1){
            for(int i=1;i<=n;i++){
        for(int k=1;k<n-i+1;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int m=2;m<=i;m++){
            printf("*");
        }
        printf("\n");
    }
        
    }
    else{
        printf("Shape Not Possible");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}