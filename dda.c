#include <graphics.h>

int main(){
  int gd=DETECT,gm;
  int x1,y1,x2,y2,steps,dx,dy,i;
  int xi,yi;
  x1 = 1; y1 = 1;
  x2 = 20; y2 = 20;

  dx = abs(x2-x1);
  dy = abs(y2-y1);

  if (dx > dy){
    steps = dx;
  } else{
    steps = dy;
  }

  xi = dx/steps;
  yi = dy/steps;

  initgraph(&gd,&gm,NULL);

  putpixel(x1,y1,RED);
  for(i=0;i<steps;i++){
    x1 += xi;
    y1 += yi;
    putpixel(x1,y1,RED);
  }




  initgraph(&gd,&gm,NULL);




  delay(5000);
  closegraph();
  return 0;
}
