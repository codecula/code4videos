// function sdf_line calculates signed distance of point P and line defined by points A, B
real sdf_line(pnt2 P, pnt2 A, pnt2 B)
{
    vec2 u = B-A;
    vec2 v = P-A;
    return (u.y*v.x-u.x*v.y)/length(u);
}
