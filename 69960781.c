#include<stdio.h>

int mod(int num){
    if(num<0){
        return -num;
    }
    else{
        return num;
    }
}

int main(void){
    int X,Y,T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        fflush(stdin);
        scanf("%d %d",&X,&Y);
        printf("%d\n",mod(X-Y));
    }
    return 0;
}

