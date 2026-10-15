#include<stdio.h>
int main(){
    int N=4;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}