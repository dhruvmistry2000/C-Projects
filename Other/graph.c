#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
  int gd = DETECT, gm;
  int y = 0, x = 10, m[20], k[20], n, a[20], i;
  float b[20];
  initgraph(&gd, &gm, "c:\tc\bgi");
  printf("nntGenerating the Graphsnn");
  printf("nEnter the no. of inputst");
  scanf("%d", &n);
  printf("nEnter the input sizes and corresponding time takenn");
  for (i = 0; i < n; i++)
  {
    printf("nEnter input sizet");
    scanf("%d", &a[i]);
    printf("nEnter time takent");
    scanf("%f", &b[i]);
  }
  cleardevice();
  //represents y axis
  line(10, 0, 10, 400);
  //represents x axis
  line(10, 400, 600, 400);
  while (y <= 400)
  {
    line(0, y, 10, y);
    y = y + 20;
  }
  while (x <= 600)
  {
    line(x, 400, x, 410);
    x = x + 20;
  }
  outtextxy(20, 440, "1unit=20 pixels , origin is (10,400)");
  outtextxy(
      20,
      450,
      "x axis represents inputs(0,10000,20000,----), yaxis rep time(0,0.05,0.1,0.15---)");
  setcolor(5);
  for (i = 0; i < n; i++)
  {
    k[i] = (a[i] * 0.002);
    m[i] = (400 - (b[i] * 400));
    putpixel(k[i], m[i], 11);
  }
  for (i = 0; i < n - 1; i++)
    line(k[i], m[i], k[i + 1], m[i + 1]);
  getch();
}