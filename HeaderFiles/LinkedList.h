#include <stdio.h>
#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings" git

void drawLL(int *x, int *data)
{
    char d[1];
    char s[5];
    static int address = 1000;
    sprintf(s, "%d", address);
    sprintf(d, "%d", *data);
    outtextxy(*x + 20, 120, d); // data
    if (address != 1008)
    {
        outtextxy(*x + 55, 120, s);  // next ptr
        outtextxy(*x + 125, 160, s); //address of element
    }
    else
    {
        outtextxy(*x + 55, 120, "NULL");
    }
    outtextxy(*x + 105, 120, "-->");
    rectangle(*x, 100, *x + 50, 150);
    rectangle(*x + 50, 100, *x + 100, 150);
    *x = *x + 125;
    address = address + 2;
}
int RunLinkedList()
{
    int gd = DETECT, gm = DETECT;
    initwindow(1000, 500);
    int x = 10;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter data to insert in LL :\n");
        int data;
        scanf("%d", &data);
        drawLL(&x, &data);
        moveto(x, 100);
    }
    setcolor(0);
    x = x - 125;
    outtextxy(x + 105, 120, "-->");
    getch();
}