#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int h, m;
    
    scanf("%d %d",&h, &m);
    
    if (m<10){
        
    if (h==0){
        printf("%d:0%d AM", 12, m);
    }
    
    else if (h>12){
        printf("%d:0%d PM", h-12, m);
    }
    
    else if (h<12){
        printf("%d:0%d AM", h, m);
    }
    
    else if (h==12){
        printf("%d:0%d PM", 12, m);
    }
        
    }
    
    
    else {
        
        if (h==0){
        printf("%d:%d AM", 12, m);
    }
    
    else if (h>12){
        printf("%d:%d PM", h-12, m);
    }
    
    else if (h<12){
        printf("%d:%d AM", h, m);
    }
    
    else if (h==12){
        printf("%d:%d PM", 12, m);
    }
        
    }
    
    return 0;
}
