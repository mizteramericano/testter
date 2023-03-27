#include<stdio.h>
void main()
{
    int n,k,num,max=0,win=0;
    scanf("%d%d",&n,&k);
    int a[100];
    for(int i=0; i<100;i++){
        a[i]=0;
    }
    for(int i=0;i<k;i++){
        scanf("%d", &num);
        a[num]++;
    }
    for(int i=1; i<n;i++){
        if(a[i]>=max){
            max =a[i];
            win =i ;
        }
    }
    printf("%d\n%d",win,max);
}
