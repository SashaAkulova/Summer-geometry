#include "Point.h"
#include "Vector.h"
#include "Triangle.h"
#include "Determinant.h"
#include "Point_in_triangle.h"


bool point_in_triangle(const Point& point, const Triangle& traingle) {

    const Vector d1 = traingle.b - traingle.a;
    const Vector d2 = traingle.c - traingle.a;

    const Vector r  = point - traingle.a;

    const float det  = determinant(d1, d2);
    const float det1 = determinant(r, d2);
    const float det2 = determinant(d1, r);

    const float x1 = det1 / det;
    const float x2 = det2 / det;

    return  x1 >=0 && x2 >=0 && (x1 + x2) <= 1;


}
