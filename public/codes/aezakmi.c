#include<stdio.h>

#include<conio.h>

int stack [100],choice,n,top,x,i;

void push(void);

void pop(void);

void display(void);

int main()
{


top=-1; printf("\n Enter the size of STACK(MAX=100):");

scanf("%d",&n);

printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT"); do

{

printf("\n Enter the Choice of operation:"); scanf("%d",&choice);

switch(choice)

{

case 1:

{

push();

break;

}

case 2:

{

pop(); break;

display(); break;

printf("\n\t EXIT POINT ");

break;

}

case 3:

{

}

case 4:

{

}

default:

{

}

printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");

}
void push()
while(choice!=4); return 0;

}





if(top>=n-1)

{

}

else

{

printf("\n\tSTACK over flow");

printf("Enter a value to be pushed:");

scanf("%d",&x); top++;

stack[top]=x;

