#include<stdio.h>
#include<stdlib.h>
struct Ticket{
    int num;
    char registration;
    double gross;
    double tare;

};

//Net weight
double Helper1(struct Ticket *t){
    double grossW=t->gross;
    double tareW=t->tare;
    double netW=grossW-tareW;
    return netW;
};
//PRINT
void Helper2(struct Ticket *t){
    printf("%d\n",t->num);
    printf("%d\n",t->registration);
    printf("%lf\n",t->gross);
    printf("%lf\n",t->tare);
}

int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);

    struct Ticket *array=malloc(n*sizeof(struct Ticket));
    //Read Inputs
    for(int i=0;i<n;i++){
        scanf("%d",&array[i].num);
        scanf("%s",&array[i].registration);
        scanf("lf",&array[i].gross);
        scanf("%lf",&array[i].tare);
    }

    double total=0;
    int maxIndex=0;
    for(int i=0;i<n;i++){
        double netW=Helper1(&array[i]);
        total+=netW;

        //maximum
        if(netW>Helper1(&array[maxIndex])){
            maxIndex=i;
        }
    }

    //Printing all the values
    printf("WEIGHBRIDGE BOOK");
    for(int i=0;i<n;i++){
        Helper2(&array[i]);
    }

    printf("\nTotal weight : %lf",total);
    printf("\nMaximum value :%f",array[maxIndex].num);

    free(array);

}