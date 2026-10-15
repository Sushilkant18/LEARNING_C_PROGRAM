#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int (*ptr)(int,int)=add;
    int x=10;
    int *const p=&x;
    *p=50;
    printf("%d",x);
    printf("%d\n",ptr(10,20));
}
