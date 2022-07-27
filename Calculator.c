#include <stdio.h>

int add(int x,int y){
    return x+y;
}

int main(){

    while(1){
        printf("\n1) Addition\n");
        printf("2) Exit\n");
        printf("\nSelect your operation:-\n");
        int x;
        scanf("%d",&x);

        if(x==1){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number \n");
            scanf("%d",&b);
            printf("Sum of %d & %d is: %d\n",a,b,add(a,b)); 
        }
        
        else{
            printf("Invalid Input\n");
        }

    }

    return 0;
}