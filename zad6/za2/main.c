#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int N =100;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d",&n);
    if(n<=0||n>N){
        printf("Liczba elementow musi by� z przedzia�u [1, %d\n]!", N);
        return 1;
    }
short lim=999;
srand(time(0));
for (short*p=tab; p<tab+n;++p){
    *p = rand()%lim+1;
}
for (short*p=tab; p<tab+n;++p){
    printf("%5d",*p);
}
printf("\n");
for (short*p=tab;p<tab+n;++p){
    if(*p<=0){
        continue;
    }
    if(*p%2==1){
            *p=2 * *p;
    }else *p=-*p;
}
printf("\n");

for (short*p=tab; p<tab+n;++p)
printf("%5d",*p);
for (short*p=tab;p<tab+n;++p){
    if(*p>0){
            *p=1;
    }else *p=-1;
}
printf("\n");
for (short*p=tab; p<tab+n;++p)
printf("%5d",*p);
return 0;
}
