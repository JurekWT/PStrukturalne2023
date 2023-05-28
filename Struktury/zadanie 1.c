#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct Point
{
    int x;
    int y;
} Point;

typedef struct LineSegment
{
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by);

LineSegment makeLineSegmentFromPoints(const Point *a, const Point *b);

void show(const LineSegment *s);

double length(const LineSegment *s);

double square(double a);

bool parallel(const LineSegment *s1, const LineSegment *s2);

bool perpendicular(const LineSegment *s1, const LineSegment *s2);

void move(LineSegment *s, int deltaX, int deltaY);

int main() {
    LineSegment linia1 = makeLineSegment(4,5,2,5);
    show(&linia1);
    Point p1 = {5,7};
    Point p2 = {3,7};
    LineSegment linia2 = makeLineSegmentFromPoints(&p1,&p2);
    show(&linia2);
    printf("%f\n", length(&linia2));
    printf("%d\n", parallel(&linia1, &linia2));
    printf("%d\n", perpendicular(&linia1, &linia2));
    move(&linia2, 4, 7);
    show(&linia2);
    return 0;
}

LineSegment makeLineSegment(int ax, int ay, int bx, int by)
{
    LineSegment temp;
    temp.a.x = ax;
    temp.a.y = ay;
    temp.b.x = bx;
    temp.b.y = by;
    return temp;
}

void show(const LineSegment *s)
{
    printf("<%d,%d> <%d,%d>\n", s->a.x, s->a.y, s->b.x, s->b.y);
}

LineSegment makeLineSegmentFromPoints(const Point *a, const Point *b)
{
    LineSegment temp;
    temp.a.x = a->x;
    temp.a.y = a->y;
    temp.b.x = b->x;
    temp.b.y = b->y;
    return temp;
}

double length(const LineSegment *s)
{
    double len;
    len = sqrt(square(s->b.x - s->a.x) + square(s->b.y - s->a.y));
    return len;
}

double square(double a) {
    return a*a;
}

bool parallel(const LineSegment *s1, const LineSegment *s2)
{
    Point AB;
    AB.x = s1->a.x - s1->b.x;
    AB.y = s1->a.y - s1->a.y;
    Point CD;
    CD.x = s2->a.x - s2->b.x;
    CD.y = s2->a.y - s2->a.y;
    int wyznacznik = (AB.x * CD.y) - (AB.y * CD.x);
    if (wyznacznik == 0){
        return true;
    }
    else
        return false;
}

bool perpendicular(const LineSegment *s1, const LineSegment *s2)
{
    Point AB;
    AB.x = s1->a.x - s1->b.x;
    AB.y = s1->a.y - s1->a.y;
    Point CD;
    CD.x = s2->a.x - s2->b.x;
    CD.y = s2->a.y - s2->a.y;
    int skalar = (AB.x * CD.x) + (AB.y * CD.y);
    if (skalar == 0){
        return true;
    }
    else
        return false;
}

void move(LineSegment *s, int deltaX, int deltaY)
{
    s->a.x += deltaX;
    s->a.y += deltaY;
    s->b.x += deltaX;
    s->b.y += deltaY;
}
