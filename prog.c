#include <stdio.h> 

int main(){
    int x,y,z;  
    scanf("%d", &x);   
    scanf("%d", &y);  
    scanf("%d", &z);
    if (x>y && x>z) {
        int s=y+z;
        if (x>s)
            printf("%d\n", x);
        else
            printf("%d\n", s-x);
    } else if (y>x && y>z){
        int s=x+z;
        if (y>s)
            printf("%d\n", y);
        else
            printf("%d\n", s-y);
    } else if (z>x && z>y){
        int s=x+y;
        if (z>s)
            printf("%d\n", z);
        else
            printf("%d\n", s-z);
    } else 
        printf("неприавльные значения\n");
    return 0;
}
