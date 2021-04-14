#include "point2d.h"
#include <stdlib.h>

struct _p
{
    double x, y;
};

typedef struct _p Point2D;

Point2D *point2D_new(double x, double y)
{
    Point2D *p = malloc(sizeof(Point2D)); // crio o ponto
    p->x = x;
    p->y = y;
    return p;
}

void point2D_destroy(Point2D *p)
{
    free(p);
}

double point2D_get_x(Point2D *p)
{
    return p->x;
}

double point2D_get_y(Point2D *p)
{
    return p->y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2)
{
    return point2D_new(p1->x + p2->x, p1->y + p2->y);
}

double point2D_theta(Point2D *p1, Point2D *p2)
{
    double a = (p2->y - p1->y)/(p2->x - p1->x);
    return a;
}

Point2D *point2D_scale(Point2D *p, double s){

    return point2D_new(p->x * s, p->y * s);
}
