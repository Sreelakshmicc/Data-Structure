#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}
*top,*top1,*temp;
void push(int element);
void pop();
void display();
void main()
{
int number,choice;
printf("\n SINGLY LINKED STACK");
printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n");
while(1)
{
printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the element:");
scanf("%d",&number);
push(number);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
printf("\nExist print\n");
break;
default:
printf("\n Invalid Choice!!!");
break;
}
}
}
void push(int element)
{
if(top==NULL)
{
top=(struct node*)malloc(1*sizeof(struct node));
top->link=NULL;
top->data=element;
}
else
{
temp=(struct node*)malloc(1*sizeof(struct node));
temp->link=top;
temp->data=element;
top=temp;
}
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("Empty");
return;
}
else
{
top1=top1->link;
printf("\n Popped element is %d \n",top->data);
free(top);
top=top1;
}
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("\nEmpty stack\n");
return;
}
while(top1!=NULL)
{
printf("\n %d\n",top1->data);
top1=top1->link;
}
}


