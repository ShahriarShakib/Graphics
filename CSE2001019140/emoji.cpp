#include <graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //For S
    line(50,50,70,50);
    line(50,50,50,70);
    line(50,70,70,70);
    line(70,70,70,90);
    line(70,90,50,90);

    //For H
    line(90,50,90,90);
    line(110,50,110,90);
    line(110,70,90,70);

    //For A
    line(135,50,120,90);
    line(135,50,150,90);
    line(130,70,140,70);

    //For K
    line(160,50,160,90);
    line(175,50,160,70);
    line(175,90,160,70);

    //For I
    line(190,50,190,90);
    line(185,50,195,50);
    line(185,90,195,90);

    //For B
    line(210,50,210,90);
    line(210,50,230,50);
    line(210,70,230,70);
    line(210,90,230,90);
    line(230,50,230,90);


    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 2
    line(150,110,170,110);
    line(170,110,170,130);
    line(170,130,150,130);
    line(150,130,150,150);
    line(150,150,170,150);

    //For 0
    line(185,110,185,150);
    line(185,110,200,110);
    line(185,150,200,150);
    line(200,110,200,150);

    //For 0
    line(215,110,215,150);
    line(215,110,230,110);
    line(215,150,230,150);
    line(230,110,230,150);

    //For 1
    line(245,110,245,150);

    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 9
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);

    //For 1
    line(345,110,345,150);

    //For 4
    line(360,110,360,130);
    line(375,110,375,150);
    line(360,130,375,130);

    //For 0
    line(390,110,390,150);
    line(410,110,410,150);
    line(410,110,390,110);
    line(390,150,410,150);


    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
   circle(250,250,50);
   floodfill(250,250,YELLOW);

  setcolor(BLACK);
  ellipse(250,270,180,360,25,10);
  ellipse(250,270,180,360,25,11);
  ellipse(250,270,180,360,25,12);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle(240,240,5);
    floodfill(240,240,BLACK);
    circle(260,240,5);
    floodfill(260,240,BLACK);

      for (int i=625;i>=-100; i--){
            setcolor(WHITE);
    outtextxy(i,400,"EMOJI ( HAPPY ) ");
    delay(30);
}



     getch();
    closegraph();
    return 0;


    }
