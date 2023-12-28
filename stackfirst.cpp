/* Name: Amrita Kumari, Reg - 22155135010, GEC Vaishali*/ 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n please specify which stack operations you want to Do");
        printf("\n\nplease 1 .push\n 2 .pop\n 3 .Display\n 4 .Exit");
        printf("\n\nplease Enter your choice..");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("\n Dear Student you have Entered Wrong Choice!!..Please Enter Correct Choice");
        }
    }
}
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\n stack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d,&val");
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is empty!!");
    }
    else{
        printf("\nDleted element is %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nstack is empty!!");
    }
    else
    {
        printf("\n The Element You Have Entered in stack is here...\n");
        for(i=top;i>=0;--i)
        printf("%d\n",stack[i]);
    }
}

