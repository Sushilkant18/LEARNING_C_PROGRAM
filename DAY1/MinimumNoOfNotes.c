#include<stdio.h>
int main(){
    int notes[]={100,50,20,10,2,1};
    int N;
    int count=0;
    scanf("%d",&N); 
    int size=sizeof(notes)/sizeof(notes[0]);
    for(int i=0;size;i++){
        if(N==0){
            break;
        }
        count+=N/notes[i];
        N=N%notes[i];
    }
    printf("The min number of notes are:%d",count);
}