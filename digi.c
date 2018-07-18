#include <stdio.h>

int main(){
    int count=0,n;
    scanf("%d",&n);
    do
    {
        n/=10;
        ++count;
    } while(n!=0);
    
    switch (count)
    {
        case 1:
            printf("1");
            break;
    
        case 2:
            printf("2");
            break;
    
        case 3:
            printf("3");
            break;
    
        default:
            printf("More than 3 digits\n");
            break;
    }
    return 0;
}