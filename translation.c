#include <graphics.h>
#include <stdio.h>

int main(){
  int gd=DETECT,gm;
  int x1,y1,x2,y2;
  int x3,y3,x4,y4;
  int tx,ty;

  printf("Enter Coords of Rectangle\n");
  printf("X1, Y1: ");
  scanf("%d %d",&x1,&y1);
  printf("X2, Y2: ");
  scanf("%d %d",&x2,&y2);

  printf("Enter Translation Factors tx, ty: ");
  scanf("%d %d",&tx,&ty);

  x3 = x1+tx;
  x4 = x2+tx;
  y3 = y1+ty;
  y4 = y2+ty;

  initgraph(&gd,&gm,NULL);

  rectangle(x1,y1,x2,y2);
  outtextxy(x1+4,y1+4,"Original");

  rectangle(x3,y3,x4,y4);
  outtextxy(x3+4,y3+4,"Translated");



  delay(5000);
  closegraph();
  return 0;
}
