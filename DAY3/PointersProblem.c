#include<stdio.h>
#include<stddef.h>
int main(){
    int arr[]={10,20,30,40,50};

    int *p=&arr[1];
    int *q=&arr[4];
    int result=q-p;
    printf("%d",result);

}