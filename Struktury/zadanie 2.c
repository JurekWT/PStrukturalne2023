#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct Point
{
    int x;
    int y;
} Point;

typedef struct Triangle
{
    Point a;
    Point b;
    Point c;
} Triangle;

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy);

Triangle makeTriangleFromPoints(const Point *a, const Point *b, const Point *c);

void show(const Triangle *s);

double area(const Triangle *s);

double abss(double a);

void move(Triangle *s, int deltaX, int deltaY);

int main() {
    Triangle trojkat1 = makeTriangle(0,1,6,1,3,10);
    show(&trojkat1);
    Point p1 = {5,7};
    Point p2 = {3,4};
    Point p3 = {2,13};
    Triangle trojkat2 = makeTriangleFromPoints(&p1, &p2, &p3);
    show(&trojkat2);
    printf("%.2f\n", area(&trojkat2));
    move(&trojkat2, 4, 7);
    show(&trojkat2);
    printf("%.2f\n", area(&trojkat2));

    return 0;
}

Triangle makeTriangle(int ax, int ay, int bx, int by, int cx, int cy)
{
    Triangle temp;
    temp.a.x = ax;
    temp.a.y = ay;
    temp.b.x = bx;
    temp.b.y = by;
    temp.c.x = cx;
    temp.c.y = cy;
    return temp;
}

void show(const Triangle *s)
{
    printf("<%d,%d> <%d,%d> <%d,%d>\n", s->a.x, s->a.y, s->b.x, s->b.y, s->c.x, s->c.y);
}

Triangle makeTriangleFromPoints(const Point *a, const Point *b, const Point *c)
{
    Triangle temp;
    temp.a.x = a->x;
    temp.a.y = a->y;
    temp.b.x = b->x;
    temp.b.y = b->y;
    temp.c.x = c->x;
    temp.c.y = c->y;
    return temp;
}

double area(const Triangle *s)
{
    double pole = ((s->b.x - s->a.x) * (s->c.y - s->a.y)) - ((s->b.y - s->a.y) * (s->c.x - s->a.x));
    return abss(pole)/2;
}

double abss(double a)
{
    if (a < 0){
        return -a;
    } else
        return a;
}


void move(Triangle *s, int deltaX, int deltaY)
{
    s->a.x += deltaX;
    s->a.y += deltaY;
    s->b.x += deltaX;
    s->b.y += deltaY;
    s->c.x += deltaX;
    s->c.y += deltaY;
}
