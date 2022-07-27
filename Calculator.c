#include <stdio.h>

int add(int x,int y){
    return x+y;
}

int subtract(int x,int y){
    return x-y;
}

int multiply(int x,int y){
    return x*y;
}

int main(){

    while(1){
        printf("\n1) Addition\n");
        printf("2) Subtraction\n");
        printf("3) Multiplication\n");
        printf("4) Exit\n");
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
        else if(x==2){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number \n");
            scanf("%d",&b);
            printf("Difference of %d & %d is: %d\n",a,b,subtract(a,b)); 
        }
        else if(x==3){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number \n");
            scanf("%d",&b);
            printf("Multiplication of %d & %d is: %d\n",a,b,multiply(a,b)); 
        }
        else if(x==4){
            printf("Calculator Stopped");
            return 0;
        }
        else{
            printf("Invalid Input\n");
        }

    }

    return 0;
}