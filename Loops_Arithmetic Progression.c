#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,d;
//     int ap=0;
//     scanf("%d %d",&a,&d);
//     // a+(n-1)d
//     printf("%d ",a);
//     for(int i=2;i<=n;i++){
//         ap=a+d;
//         printf("%d ",ap);
//         a=ap;
        
//     }
    scanf("%d %d",&a,&d);
    for(int i=0;i<n;i++){
        printf("%d ",a+i*d);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}