#include<Stdio.h>
#include<stdbool.h>
int main(){
    char str[]="aabcbb";
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int index=ch-'a';
        if(hash[index]>0){
            printf("Duplicate");
            return 0;
        }
        else{
            hash[index]=hash[index]+1;
        }
    }
    printf("No Duplicate");
}