#include<stdio.h>
#include<graphics.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"

void drawArray(int *x,int *index)
{
    char i[3];
    sprintf(i,"%d",*index);
    rectangle(100,100,*x,150);
    outtextxy(*x+15,120,i);
    *index = *index+1;
    *x=*x+50;
}
int main()
{
    int gd = DETECT,gm = DETECT;
    int x = 50;
    printf("Enter Size of Array : \n");
    int sz;
    scanf("%d",&sz);
    initgraph(&gd,&gm,"");
    int index = 0;
    for(int i=0; i<sz; i++)
    {
        drawArray(&x,&index);
        rectangle(100,100,x,150);
    }
    getch();
}