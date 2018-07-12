#include<iostream>
#include<graphics.h>
using namespace std;

struct vertex
{
    float x;
    float y;
};

void beizer(vertex p0, vertex p1, vertex p2, vertex p3, int xc, int yc)
{
    float x, y;
    for (float t=0; t<=1; t=t+0.001)
    {
        float e = -t*t*t + 3*t*t - 3*t + 1;
        float f = 3*t*t*t - 6*t*t + 3*t;
        float g = -3*t*t*t + 3*t*t;
        float h = t*t*t;

        x = e*p0.x + f*p1.x + g*p2.x + h*p3.x;
        y = e*p0.y + f*p1.y + g*p2.y + h*p3.y;

        putpixel(x+xc, y+yc, WHITE);
    }
}

int main()
{
    int gd=DETECT, gm=0;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    vertex p0 = {10, 100};
    vertex p1 = {20, 130};
    vertex p2 = {40, 130};
    vertex p3 = {50, 100};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {50, 100};
    p1 = {50, 100};
    p2 = {50, 200};
    p3 = {50, 200};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {50, 200};
    p1 = {40, 210};
    p2 = {30, 200};
    p3 = {20, 180};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {50, 200};
    p1 = {65, 180};
    p2 = {70, 150};
    p3 = {70, 140};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {70, 140};
    p1 = {80, 220};
    p2 = {100, 220};
    p3 = {110, 140};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {110, 140};
    p1 = {140, 280};
    p2 = {190, 100};
    p3 = {180, 80};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {180, 80};
    p1 = {170, 100};
    p2 = {170, 170};
    p3 = {170, 200};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {170, 200};
    p1 = {180, 150};
    p2 = {190, 150};
    p3 = {200, 200};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {200, 200};
    p1 = {240,190};
    p2 = {230, 145};
    p3 = {230, 150};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {230, 150};
    p1 = {240, 260};
    p2 = {250, 160};
    p3 = {260, 150};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {260, 150};
    p1 = {266, 150};
    p2 = {290, 170};
    p3 = {280, 200};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {280, 200};
    p1 = {300, 140};
    p2 = {320, 140};
    p3 = {340, 200};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {340, 200};
    p1 = {360, 180};
    p2 = {380, 130};
    p3 = {400, 160};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {400, 160};
    p1 = {350, 160};
    p2 = {380, 240};
    p3 = {400, 165};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {400, 165};
    p1 = {420, 180};
    p2 = {440, 220};
    p3 = {460, 210};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {460, 210};
    p1 = {460, 210};
    p2 = {30, 250};
    p3 = {30, 250};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {30, 250};
    p1 = {30, 250};
    p2 = {420, 230};
    p3 = {420, 230};
    beizer(p0, p1, p2, p3, 0, 0);

    p0 = {230, 100};
    p1 = {220, 105};
    p2 = {240, 115};
    p3 = {230, 110};
    beizer(p0, p1, p2, p3, 0, 0);

    getch();
    closegraph();
    return 0;
}
