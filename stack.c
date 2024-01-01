#include<stdio.h>
#include<stdlib.h>
# define size 5
void push(int);
void pop();
void display();
int stack[size],top=-1;
void main(){
    int op,n;
    while(1){
            printf("Enter the operation\n1.PUSH\n2.POP\n3.DISPLAY\n4.-1 to stop\n");
            scanf("%d",&op);
        if(op==-1){
            printf("Operation completed\n");
            break;
        }
        else{
            switch(op){
                case 1:printf("Enter the value\n");
                       scanf("%d",&n);
                       push(n);
                       break;
                case 2:pop();
                       break;
                case 3:display();
                       break;
                default:printf("Wrong choice\n");
            }
        }
    }
}
void push(int n){
    if(top==size-1){
        printf("Stack overflow condition\n");
        exit(0);
    }
    else{
        top++;
        stack[top]=n;
        printf("PUSH() operation is successfull\n");
    }
}
void pop(){
    if(top==-1){
        printf("Stack underflow condition\n");
        exit(0);
    }
    else{
        printf("%d POP()ed successfully\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}























