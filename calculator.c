#include<stdio.h>
int main()
{
    float x,y;
    int choice;
    printf("enter x any y");
    scanf("%f%f",&x,&y);
    printf("enter your choice\n1.Addition\n2.subtraction\n3.multiplicatio\n4.division\n");
    scanf("%d",&choice);
    switch(choice)
    {
<<<<<<< HEAD
        case 1: printf("addition is %f",x+y);
        case 3: printf("multiplication is %f",x*y);
        case 4: printf("division is %f",x/y);
}