#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main(){
  int gd=DETECT,gm;
  double x1,y1,x2,y2;
  double x3,y3,x4,y4;
  double a,t;

  printf("X1, Y1: ");
  scanf("%lf %lf",&x1,&y1);

  printf("X2, Y2: ");
  scanf("%lf %lf",&x2,&y2);

  printf("Angel of Rotation: ",&a);
  scanf("%lf",&a);

  t = a * 3.14/180;
  x3 = x1*cos(t) - y1*sin(t);
  y3 = x1*sin(t) + y1*cos(t);

  x4 = x2*cos(t) - y2*sin(t);
  y4 = x2*sin(t) + y2*cos(t);

  initgraph(&gd,&gm,NULL);
  line(x1,y1,x2,y2);
  line(x3,y3,x4,y4);

  delay(5000);
  closegraph();
  return 0;
}
