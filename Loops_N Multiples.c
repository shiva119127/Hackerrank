#include <stdio.h>

int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        printf("%d ",x*i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}