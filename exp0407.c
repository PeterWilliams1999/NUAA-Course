//ex0407 Written By Zhuzhenwu 071840214
#include<stdio.h>
int main(){
    int n;
    double sum=0,sum2;
    scanf_s("%d",&n);
    for(int i=1;i<=n;i++){
    sum2=1;
        for(int k=1;k<=n;k++){
        sum2*=k;}
    sum+=sum2;}
    printf("%lf",sum);
}
