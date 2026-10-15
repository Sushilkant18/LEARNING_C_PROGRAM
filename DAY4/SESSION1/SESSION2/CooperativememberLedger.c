#include<stdio.h>
struct Address{
    char village[100];
    int pincode;
};
struct Member{
    int id;
    char name[100];
    double shareCapital;

    struct Address address;
};

int main(){
    struct Member array[1000];
    int n;
    double total=0;
    int maximumShareIndex=0;
    printf("enter the number of  members:");
    scanf("%d",&n);

    //Read the values now
    for(int i=0;i<n;i++){
        scanf("%d",&array[i].id);
        scanf("%s",array[i].name);
        scanf("%f",&array[i].shareCapital);
        scanf("%s",array[i].address.village);
        scanf("%d",&array[i].address.pincode);

        //total Sum of shares
        total+=array[i].shareCapital;
        if(array[i].shareCapital>array[maximumShareIndex].shareCapital){
            maximumShareIndex=i;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\n",array[i].id);
        printf("%s\n",array[i].name);
        printf("%f\n",array[i].shareCapital);
        printf("%s\n",array[i].address.village);
        printf("%d\n",array[i].address.pincode);

    }

    printf("\n\nthe total share Holding;%f",total);


    //highest share hOlder is printed

    printf("%d %s %f",array[maximumShareIndex].id,array[maximumShareIndex].name,array[maximumShareIndex].shareCapital);
}
