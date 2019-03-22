//exp0408 Written By Zhuzhenwu 071840214
#include<stdio.h>
int main(){
    int n;
    double sum=1,outputsum;
    scanf_s("%d",&n);
    for(int i=1;i<=n;i++){
    sum*=((2*i)*(2*i))/((2*i-1)/(2i*+1));
    }
    outputsum=2*sum;
    printf("%lf",outputsum);
}
