#include <graphics.h>


int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);

  line(250,0,250,500);
  line(0,250,500,250);


  delay(5000);
  closegraph();
  return 0;
}
