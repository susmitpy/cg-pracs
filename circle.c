#include <graphics.h>
#include <stdio.h>
#define R RED
#define G GREEN

void pp(int x, int y){
  putpixel(x,y,G);
  delay(20);
}

void symmetry(int x, int y, int xc, int yc){
  pp(xc+x,yc+y);
  pp(xc+x,yc-y);
  pp(xc+y,yc+x);
  pp(xc+y,yc-x);
  pp(xc-x,yc+y);
  pp(xc-x,yc-y);
  pp(xc-y,yc+x);
  pp(xc-y,yc-x);
}

void draw_circle(int xc, int yc, int r){
  int x=0,y=r,p=1-r;
  symmetry(x,y,xc,yc);
  for (x=0;y>x;x++){
    if (p < 0){
      p += 2*x + 3;
    } else {
      p += 2*(x-y) + 5;
      y--;
    }
    symmetry(x,y,xc,yc);
  }
}

int main(){
  int gd=DETECT,gm;
  int x,y,r;

  printf("Center x1,y1: ");
  scanf("%d %d", &x,&y);
  printf("Radius: ");
  scanf("%d", &r);
  initgraph(&gd,&gm,NULL);
  putpixel(x,y,R);
  draw_circle(x,y,r);
  delay(5000);
  closegraph();
  return 0;
}
