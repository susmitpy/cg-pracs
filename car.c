#include <stdio.h>
#include <graphics.h>

void main(){
  int gd=DETECT,gm;
  int r1x1,r1y1,r1x2,r1y2,r2x1,r2y1,r2x2,r2y2;
  int c1x,c1y,c1r,c2x,c2y,c2r;
  int i,inc = 10;
  r1x1 = 50; r1y1 = 200; r1x2 = 200; r1y2 = 350;
  r2x1 = 200; r2y1 = 300; r2x2 = 250; r2y2 = 350;
  c1x = 80; c1y = 370; c1r = 20;
  c2x = 170; c2y = 370; c2r = 20;
  initgraph(&gd,&gm,NULL);
  for (i=1;i<26;i++){
    cleardevice();
    rectangle(r1x1,r1y1,r1x2,r1y2);
    rectangle(r2x1,r2y1,r2x2,r2y2);
    circle(c1x,c1y,c1r);
    circle(c2x,c2y,c2r);
    r1x1 += inc; r1x2 += inc; r2x1 += inc; r2x2 += inc;
    c1x += inc; c2x += inc;
    delay(100);
  }

  delay(5000);
  closegraph();
}
