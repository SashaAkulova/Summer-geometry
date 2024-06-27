#include "Point.h"
#include "Vector.h"
#include "Determinant.h"
#include "Point_intersection.h"
#include<limits>
#include <cmath>

float Section_intersection (const Point& a1, const Point& a2, const Point& a3, const Point& a4) {
    //Point res;
    const float x1 = a1.x;
    const float y1 = a1.y;

    const float x2 = a2.x;
    const float y2 = a2.y;

    const float x3 = a3.x;
    const float y3 = a3.y;

    const float x4 = a4.x;
    const float y4 = a4.y;


    Vector d1;
    d1.x = x1 - x2;
    d1.y = y1 - y2;

    Vector d2;
    d2.x = x3 - x4;
    d2.y = y3 - y4;


    Vector d3;
    d3.x = x1 - x3;
    d3.y = y1 - y3;

    const float det  = determinant(d1, d2);
    const float det1 = determinant(d3, d2);
    const float det2 = determinant(d1, d3);

    const float t1 = det1 / det;
    const float t2 = -det2 / det;

    //res.x = x1 + t * (x2 - x1);
    //res.y = y1 + t * (y2 - y1);

    if(det == 0 && det1 == 0 || det == 0 && det2 == 0) {
        return  std::numeric_limits<float>::infinity();
    }

    if(det = 0) {
        return  std::numeric_limits<float>::quiet_NaN();
    }

    return  std::pair<t1, t2>;

}
