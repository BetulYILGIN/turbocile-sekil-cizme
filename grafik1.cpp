#include <graphics.h>
#include <conio.h>
int main()
{
 int gd = DETECT, gm,x=300,y=100;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
 cleardevice();
 setcolor(GREEN);
 setfillstyle(SOLID_FILL,7);
 settextstyle(SMALL_FONT,0,4);
 rectangle(x-8,y-3,x+92,y+17);
 bar(x-8,y-5,x+92,y+19);
outtextxy(x+25,y+1,"TIKLA"); 
setcolor(8);
 delay(300);
 cleardevice();
rectangle(x,y,x+100,y+20);
 bar(x,y,x+100,y+20);
 outtextxy(x+33,y+4,"TIKLA");
 delay(300);
 cleardevice();
 rectangle(x-8,y-3,x+92,y+17);
 bar(x-8,y-3,x+92,y+17);
 setcolor(BLACK);
 outtextxy(x+25,y+1,"TIKLA");
 getch();
 return 0;
}

