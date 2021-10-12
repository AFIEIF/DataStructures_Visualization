#include <stdio.h>
#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void Enqueue(int *x, int* y)
{
    setcolor(0);
    outtextxy(*x-25,200+125,"Rear");
    setcolor(7);
    outtextxy(*y+10,175,"Front");
    *x = *x+50;
    rectangle(*x-50,200,*x,300);
    outtextxy(*x-25,200+75,"EN");
    outtextxy(*x-25,200+125,"Rear");


}

void Dequeue(int *y)
{
    setcolor(0);
    rectangle(*y-50,200,*y,300);
    outtextxy(*y+10,175,"Front");
    *y = *y+50;
    setfillstyle(0,0);
    bar(*y-50,200,*y,201);
    bar(*y-50,300,*y,301);
    setcolor(7);
    outtextxy(*y+10,175,"Front");
    setcolor(0);
    outtextxy(*y-25,200+75,"EN");
}

int main()
{
    int gd = DETECT,gm = DETECT;
    initgraph(&gd,&gm,"");
    outtextxy(10,10,"## Queue Implementation ##");
    outtextxy(10,40,"1.Enqueue");
    outtextxy(10,70,"2.Dequeue");
    outtextxy(10,100,"EXIT");
    int x = 20;
    int y = 20;
    int choice = 0;
    do
    {
        printf("## Queue Implementation ##\n1.Enqueue\n2.Dequeue\n3.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: Enqueue(&x,&y);
                    break;
            case 2: Dequeue(&y);
                    break;
        }
    }
    while(choice != 3);
}
