#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
    int xmax, ymax, x, y, i;
    int graphic_driver = DETECT, graphic_mode;
    initgraph(&graphic_driver, &graphic_mode, "//turboc3/bgi");
    setcolor(14);
    xmax = getmaxx();
    ymax = getmaxy();
    x = xmax / 2;
    y = ymax / 2;
    line(x - 100, y - 100, x + 300, y - 100);
    delay(200);
    line(x + 300, y - 100, x + 200, y);
    delay(200);
    line(x + 200, y, x - 200, y);
    delay(200);
    for (i = 0; i < 400; i += 10)
    {
        line(x - 200 + i, y, x - 100 + i, y - 100);
        setcolor(8);
        delay(200);
    }
    setcolor(14);
    line(x + 200, y, x + 200, y + 100);
    delay(200);
    line(x + 200, y + 100, x - 150, y + 100);
    delay(200);
    for (i = 0; i < 350; i += 10)
    {
        line(x - 150 + i, y + 100, x - 150 + i, y);
        setcolor(5);
        delay(200);
    }
    setcolor(14);
    for (i = 0; i <= 75; i += 5)
    {
        line(x + 280 - i, y - 80 + i, x + 280 - i, y + 20 + i);
        setcolor(10);
        delay(200);
    }
    setcolor(14);
    line(x + 280, y + 20, x + 200, y + 100);
    delay(200);
    for (i = 0; i < 30; i += 5)
    {
        line(x - 150, y + 35 + i, x - 120, y + 35 + i);
        setcolor(7);
        delay(200);
    }
    setcolor(14);
    for (i = 0; i <= 30; i += 5)
    {
        line(x - 120 - i, y + 35, x - 120 - i, y + 65);
        setcolor(7);
        delay(200);
    }
    setcolor(14);
    line(x - 120, y + 65, x - 150, y + 65);
    delay(200);
    for (i = 0; i < 30; i += 5)
    {
        line(x + 200, y + 35 + i, x + 170, y + 35 + i);
        setcolor(7);
        delay(200);
    }
    setcolor(14);
    for (i = 0; i < 30; i += 5)
    {
        line(x + 170 + i, y + 35, x + 170 + i, y + 65);
        setcolor(7);
        delay(200);
    }
    setcolor(14);
    line(x + 170, y + 65, x + 200, y + 65);
    delay(200);
    for (i = 0; i < 75; i += 5)
    {
        line(x, y + 25 + i, x + 50, y + 25 + i);
        setcolor(3);
        delay(200);
    }
    setcolor(14);
    line(x + 50, y + 25, x + 50, y + 100);
    delay(200);
    for (i = 0; i < 50; i += 5)
    {
        line(x + i, y + 100, x + i, y + 25);
        setcolor(3);
        delay(200);
    }
    setcolor(14);
    line(x + 50, y + 100, x + 50, y + 120);
    delay(200);
    line(x + 50, y + 120, x, y + 120);
    delay(200);
    for (i = 0; i <= 45; i += 5)
    {
        line(x + i, y + 120, x + i, y + 100);
        setcolor(2);
        delay(200);
    }
    setcolor(14);
    line(x + 50, y + 120, x + 65, y + 135);
    delay(200);
    line(x + 65, y + 135, x + 15, y + 135);
    for (i = 0; i <= 45; i += 5)
    {
        line(x + 15 + i, y + 135, x + i, y + 120);
        setcolor(2);
        delay(200);
    }
    setcolor(14);
    line(x + 65, y + 135, x + 65, y + 155);
    delay(200);
    line(x + 65, y + 155, x + 15, y + 155);
    for (i = 0; i <= 45; i += 5)
    {
        line(x + 15 + i, y + 155, x + 15 + i, y + 135);
        setcolor(2);
        delay(200);
    }
    setcolor(6);
    for (i = 30; i >= 1; i--)
    {
        circle(x + 250, y - 150, 30 - i);
        delay(200);
    }
    line(0, y + 50, x - 150, y + 50);
    delay(200);
    line(x + 253, y + 50, xmax, y + 50);
    delay(200);
    setcolor(10);
    for (i = 40; i >= 1; i--)
    {
        arc(0, y + 50, 0, 90, 40 - i);
        arc(80, y + 50, 0, 180, 40 - i);
        arc(160, y + 50, 80, 180, 40 - i);
        arc(xmax - 10, y + 50, 80, 180, 40 - i);
        delay(200);
    }
    setcolor(8);
    for (i = 30; i >= 1; i--)
    {
        arc(x - 700, y + 50, 0, 70, 450 + i);
        arc(x + 150, y + 50, 90, 180, 350 + i);
        delay(200);
    }
    setcolor(10);
    for (i = 100; i >= 1; i--)
    {
        arc(0, 0, 270, 360, 100 - i);
        arc(200, 0, 180, 360, 100 - i);
        delay(200);
    }
    getch();
    closegraph();
    return 0;
}
