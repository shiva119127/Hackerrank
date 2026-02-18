#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a-(a/10)*10;
    int d=b-(b/10)*10;
    if(c==d){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
