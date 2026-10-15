#include<stdio.h>
int main(){
    int N=5;
    //upper half
    for(int i=1;i<=N;i++){
        //left stars
        for(int j=1;j<=i;j++){
            printf("*");
        }
        //spaces
        for(int j=1;j<=2*(N-i);j++){
            printf(" ");
        }
        //Right stars
        for(int j=1;j<=i;j++){
            printf("*"); 
        }
        printf("\n");

    }
    for(int i=N;i>=1;i--){
        //left stars
        for(int j=1;j<=i;j++){
            printf("*");
        }
        //spaces
        for(int j=1;j<=2*(N-i);j++){
            printf(" ");
        }
        //Right stars
        for(int j=1;j<=i;j++){
            printf("*"); 
        }
        printf("\n");

    }
    
    
    
    return 0;
}