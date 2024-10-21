#include <stdio.h>

int main(){
    int a;
    int *ptr=&a;
    scanf("%d",ptr);
    printf("%d...%d\n",*ptr/10,*ptr%10);
    return 0;
}