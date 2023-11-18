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
        case 1: printf("subtractin is %f",x-y);
    }
}