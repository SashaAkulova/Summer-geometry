#include "Point.h"
#include "Vector.h"
#include "Line.h"
#include "Determinant.h"
#include "Point_intersection.h"
#include<limits>




float Lines_intersection (const Line& l1, const Line& l2) {
    //Point res;
    Vector r = l2.r0 - l1.r0;
    const float det  = determinant(l1.a, -l2.a);
    const float det1 = determinant(r, -l2.a);
    const float det2 = determinant(l1.a, r);

    const float t1 = det1 / det;
    const float t2 = det2 / det;

    //res.x = l1.r0.x + l1.a.x * t1;
    //res.y = l1.r0.y + l1.a.y * t1;

    if(det == 0 && det1 == 0 || det == 0 && det2 == 0) {
        return numeric_limits<float>::infinity();
    }

    if(det = 0) {
        return nullptr;
    }

    return  std::pair<t1, t2>;

}
