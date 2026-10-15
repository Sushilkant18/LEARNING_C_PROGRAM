#include<stdio.h.>
void B(int n);
void A(int n){
    if(n>10){
        return;
    }
    printf("%d",n);
    B(n+1);

   
}
void B(int n){
    if(n>10){
        return;
    }
    printf("%d",n);
    A(n+1);

}
int main(){
    B(0);

}