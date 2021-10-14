#include <stdio.h>
#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void push(int *x,int *counter)
{
    *counter = *counter + 1;
    if(*counter == -1)
    {
        setcolor(0);
        outtextxy(10,130,"STACK EMPTY!");
    }
    char c[3];
    sprintf(c,"%d",*counter);
    setcolor(0);
    outtextxy(430,*x-25,"TOS");
    outtextxy(470,*x-25,c);
    setcolor(7);
    *x = *x-50;
    rectangle(500,*x-50,600,*x);
    outtextxy(525,*x-25,"Pushed");
    outtextxy(430,*x-25,"TOS");
    outtextxy(470,*x-25,c);
}

void pop(int *x, int *counter)
{
    *counter = *counter - 1;
    char c[3];
    sprintf(c,"%d",*counter);
    if(*counter == -1)
    {
        setcolor(14);
        outtextxy(10,130,"STACK EMPTY!");
        return;
    }
    setcolor(0);
    rectangle(500,*x-50,600,*x);
    outtextxy(525,*x-25,"Pushed");
    outtextxy(430,*x-25,"TOS");
    outtextxy(470,*x-25,c);
    setcolor(7);
    bar(500,*x+1,600,*x);
    setcolor(0);
    *x = *x+50;
    setcolor(7);
    outtextxy(430,*x-25,"TOS");
    outtextxy(470,*x-25,c);
    setcolor(0);
}

int main()
{
    int gd = DETECT,gm = DETECT;
    initgraph(&gd,&gm,"");
    outtextxy(10,10,"## Stack Implementation ##");
    outtextxy(10,40,"1.Push");
    outtextxy(10,70,"2.Pop");
    outtextxy(10,100,"3.EXIT");
    int x = 400;
    int counter =-1;
    int choice = 0;
    do
    {
        printf("## Stack Implementation ##\n1.Push\n2.Pop\n3.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(&x,&counter);
                    break;
            case 2: pop(&x,&counter);
                    break;
        }
    }
    while(choice != 3);
}
