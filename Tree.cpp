#include <stdio.h>
#include <graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void DrawTree()
{
    int x = 500, y = 50, r = 25;
    line(x, y, x + 75, y + 50);
    line(x, y, x - 75, y + 50);
    line(x + 75, y + 50, x + 125, y + 125);
    line(x + 75, y + 50, x + 30, y + 125);
    line(x - 75, y + 50, x - 30, y + 125);
    line(x - 75, y + 50, x - 125, y + 125);
    circle(x, y, r);             //level 0
    circle(x - 75, y + 50, r);   //level 1
    circle(x + 75, y + 50, r);   //level 1
    circle(x - 125, y + 125, r); //level 2
    circle(x + 125, y + 125, r); //level 2
    circle(x - 30, y + 125, r);  //level 2
    circle(x + 30, y + 125, r);  //level 2
    setfillstyle(1, 0);
    fillellipse(x, y, r, r);
    fillellipse(x + 75, y + 50, r, r);
    fillellipse(x - 75, y + 50, r, r);
    fillellipse(x + 125, y + 125, r, r);
    fillellipse(x - 125, y + 125, r, r);
    fillellipse(x - 30, y + 125, r, r);
    fillellipse(x + 30, y + 125, r, r);
    outtextxy(x - 5, y - 5, "A");
    outtextxy(x + 75 - 5, y + 50 - 5, "C");
    outtextxy(x - 75 - 5, y + 50 - 5, "B");
    outtextxy(x + 125 - 5, y + 125 - 5, "G");
    outtextxy(x - 125 - 5, y + 125 - 5, "D");
    outtextxy(x - 30 - 5, y + 125 - 5, "E");
    outtextxy(x + 30 - 5, y + 125 - 5, "F");
}

void preorder()
{
    outtextxy(450, 300, "PRE-ORDER TRAVERSAL");
    int x = 500, y = 50, r = 25;
    int i = 1;
    switch (i)
    {
    case 1: //A
        setcolor(YELLOW);
        circle(x, y, r);
        delay(1500);
        setcolor(RED);
        circle(x, y, r);
    case 2: //B
        setcolor(YELLOW);
        circle(x - 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x - 75, y + 50, r);
    case 3: //D
        setcolor(YELLOW);
        circle(x - 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 125, y + 125, r);
    case 4: //E
        setcolor(YELLOW);
        circle(x - 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 30, y + 125, r);
    case 5: //C
        setcolor(YELLOW);
        circle(x + 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x + 75, y + 50, r);
    case 6: //F
        setcolor(YELLOW);
        circle(x + 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 30, y + 125, r);
    case 7: //G
        setcolor(YELLOW);
        circle(x + 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 125, y + 125, r);
        break;
    }
}

void inorder() // DBEAFCG
{
    outtextxy(450, 300, "IN-ORDER TRAVERSAL");
    int x = 500, y = 50, r = 25;
    int i = 1;
    switch (i)
    {
    case 1: //D
        setcolor(YELLOW);
        circle(x - 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 125, y + 125, r);
        ;

    case 2: //B
        setcolor(YELLOW);
        circle(x - 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x - 75, y + 50, r);

    case 3: //E
        setcolor(YELLOW);
        circle(x - 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 30, y + 125, r);

    case 4: //A
        setcolor(YELLOW);
        circle(x, y, r);
        delay(1500);
        setcolor(RED);
        circle(x, y, r);

    case 5: //F
        setcolor(YELLOW);
        circle(x + 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 30, y + 125, r);

    case 6: //C
        setcolor(YELLOW);
        circle(x + 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x + 75, y + 50, r);

    case 7: //G
        setcolor(YELLOW);
        circle(x + 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 125, y + 125, r);
        break;
    }
}

//DEBFGCA

void postorder()
{
    outtextxy(450, 300, "POST-ORDER TRAVERSAL");
    int x = 500, y = 50, r = 25;
    int i = 1;
    switch (i)
    {
    case 1: //D
        setcolor(YELLOW);
        circle(x - 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 125, y + 125, r);
        ;

    case 2: //E
        setcolor(YELLOW);
        circle(x - 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x - 30, y + 125, r);

    case 3: //B
        setcolor(YELLOW);
        circle(x - 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x - 75, y + 50, r);

    case 4: //F
        setcolor(YELLOW);
        circle(x + 30, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 30, y + 125, r);

    case 5: //G
        setcolor(YELLOW);
        circle(x + 125, y + 125, r);
        delay(1500);
        setcolor(RED);
        circle(x + 125, y + 125, r);

    case 6: //C
        setcolor(YELLOW);
        circle(x + 75, y + 50, r);
        delay(1500);
        setcolor(RED);
        circle(x + 75, y + 50, r);

    case 7: //A
        setcolor(YELLOW);
        circle(x, y, r);
        delay(1500);
        setcolor(RED);
        circle(x, y, r);
        break;
    }
}

int main()
{
    int gd = DETECT, gm = DETECT;
    int choice = 0;
    while (choice != 4)
    {
        printf("## TREE TRAVERSAL ##\n1.pre-order\n2.in-order\n3. post-order\n4.EXIT\n");
        scanf("%d", &choice);
        initwindow(1500, 1500);
        DrawTree();
        switch (choice)
        {
        case 1:
            preorder();
            break;
        case 2:
            inorder();
            break;
        case 3:
            postorder();
            break;
        case 4:
            exit(0);
        }
    }
    getch();
}
