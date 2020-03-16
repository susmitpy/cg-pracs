#include <graphics.h>
#include <stdio.h>

int main(){
  int gd=DETECT,gm;
  int cx,cy,cr;
  int rx1,ry1,rx2,ry2;
  int ex,ey,es,ee,ew,eh;
  int hex,hey,hes,hee,hew,heh;
  int xm,ym;

  xm = 250;
  ym = 250;


  cx = xm-125;
  cy = ym-125;
  cr = 50;

  rx1 = xm + 100;
  ry1 = ym - 150;
  rx2 = xm + 200;
  ry2 = ym - 50;

  ex = xm + 125;
  ey = ym + 125;
  es = 0;
  ee = 360;
  ew = 50;
  eh = 70;

  hex = xm - 125;
  hey = ym + 125;
  hes = 0;
  hee = 180;
  hew = 50;
  heh = 70;


  initgraph(&gd,&gm,NULL);
  line(0,250,500,250); // X axis
  line(250,0,250,500); // Y axis

  circle(cx,cy,cr);
  outtextxy(cx-cr/2,cy,"Circle");

  rectangle(rx1,ry1,rx2,ry2);
  outtextxy(rx1+30,ry1+30,"Rectangle");

  ellipse(ex,ey,es,ee,ew,eh);
  outtextxy(ex,ey,"Ellipse");

  ellipse(hex,hey,hes,hee,hew,heh);
  outtextxy(hex-20,hey,"Half Ellipse");

  delay(5000);
  closegraph();
  return 0;
}
