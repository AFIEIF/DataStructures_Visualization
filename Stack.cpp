#include <stdio.h>
#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void push(int *x)
{
    setcolor(0);
    outtextxy(450,*x-25,"TOS");
    setcolor(7);
    *x = *x-50;
    rectangle(500,*x-50,600,*x);
    outtextxy(525,*x-25,"Pushed");
    outtextxy(450,*x-25,"TOS");
}

void pop(int *x)
{
    setcolor(0);
    rectangle(500,*x-50,600,*x);
    outtextxy(525,*x-25,"Pushed");
    outtextxy(450,*x-25,"TOS");
    setcolor(7);
    bar(500,*x+1,600,*x);
    setcolor(0);
    *x = *x+50;
    setcolor(7);
    outtextxy(450,*x-25,"TOS");
    setcolor(0);
}

int main()
{
    int gd = DETECT,gm = DETECT;
    initgraph(&gd,&gm,"");
    int x = 400;
    int choice = 0;
    do
    {
        printf("## Stack Implementation ##\n1.Push\n2.Pop\n3.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(&x);
                    break;
            case 2: pop(&x);
                    break;
        }
    }
    while(choice != 3);
}
