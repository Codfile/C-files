#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int a = rand()%100+1;
    int b;
    int c = 0;
    do{
        scanf("%d",&b);
        c++;
        if(b>a){
            printf("big\n");
        }else if(b<a){
            printf("small\n");
        }
    }while(b!=a);
    printf("%d\n",c);
    return 0;
    
    
}
