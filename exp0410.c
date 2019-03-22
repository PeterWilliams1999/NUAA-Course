//exp0410 Written By Zhuzhenwu 071840214
#include <stdio.h>

int Fib1(var){
if(var==0) return 0;
if(var==1) return 1;
if(var>=2){
    return(Fib1(var-2)+Fib2(var-1));
}
}

int Fib2(var){
if(var==1) return 1;
if(var==2) return 1;
if(var>=3) {
    return (Fib2(var-2)+Fib(var-1));
}
}

int main(){
    double i,k,sum=0;
    for(int num=1;num<=20;num++){
        i=Fib1(num);
        k=Fib2(num);
        sum+=i/j;
    }
printf("%lf",sum);
}