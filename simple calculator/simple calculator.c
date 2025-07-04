#include<stdio.h>
int main()
{
    signed int a;
    signed int b;
    int c=2;
    printf("Enter two integer numbers: \n");
    scanf("%d %d",&a,&b);
    printf("You entered a=%d & b=%d.\n",a,b);
    //arethimatic operator
    printf("Addition of %d & %d b is:%d \n",a,b,(a+b));
    printf("Subtraction of %d & %d b is:%d \n",a,b,(a-b));
    printf("Multiplication of %d & %d b is:%d \n",a,b,(a*b));
    printf("Division of %d & %d b is:%d \n",a,b,(a/b));
    printf("Modulus of %d & %d b is:%d \n\n",a,b,(a|b));
    //relational operator
    printf("Integer equality '=' :%d \n",a==b);
    printf("Integer equality '>' :%d \n",a>b);
    printf("Integer equality '<' :%d \n",a<b);
    printf("Integer equality '!=' :%d \n",a!=b);
    printf("Integer equality '<=' :%d \n",a<=b);
    printf("Integer equality '>=' :%d \n",a>=b);
    //logical operator
    if (a>0 && b>0){
        printf(" both are positive. ");
    }
        else{
    printf(" either is negative.");
    }
    return 0;
}
