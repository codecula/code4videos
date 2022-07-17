#include <math.h>

typedef struct vec2 {
    float x;
    float y;
} vec2;

typedef vec2 pnt2;

float length(vec2 u)
{
    return sqrt(u.x*u.x+u.y*u.y);
}

// function sdf_line calculates signed distance of point P and line defined by points A, B
float sdf_line(pnt2 P, pnt2 A, pnt2 B)
{
    vec2 u;
    vec2 v;
    u.x = B.x-A.x;
    u.y = B.y-A.y;
    v.x = P.x-A.x;
    v.y = P.y-A.y;
    return (u.y*v.x-u.x*v.y)/length(u);
}
