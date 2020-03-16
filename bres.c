#include <graphics.h>
#include <stdio.h>

int main(){
  int gd=DETECT,gm;
  int x1,y1,x2,y2,dx,dy,i;
  int xi,yi;
  int tdx,tdy,p;

  printf("X1, Y1: ");
  scanf("%d %d",&x1,&y1);

  printf("X2, Y2: ");
  scanf("%d %d",&x2,&y2);

  initgraph(&gd,&gm,NULL);

  dx = abs(x2-x1);
  dy = abs(y2-y1);
  tdx = 2*dx;
  tdy = 2*dy;

  p = tdy-dx;
  putpixel(x1,y1,GREEN);
  for(i=x1;i<=x2;i++){
    if (p<0){
      x1++;
      p += tdy;
    } else{
      x1++;
      y1++;
      p += tdy-tdx;
    }
    putpixel(x1,y1,GREEN);
    delay(20);
  }


  delay(5000);
  closegraph();
  return 0;
}
