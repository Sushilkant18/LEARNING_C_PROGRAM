#include<stdio.h>
int main(){
    int N=4;
    for(int i=N;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
       
    }
    return 0;
}