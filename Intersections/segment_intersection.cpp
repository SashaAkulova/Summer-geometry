#include <cmath>
#include "segment_intersection_struct.h"
#include "segment_intersection_function.h"

bool Point_on_segment (Point& A, Point& B, Point& O) {
    return((O.x <= max(A.x, B.x)) && (O.x >= min(A.x, B.x)) && (O.y <= max(A.y, B.y)) && (O.y >= min(A.y, B.y)))
}

bool Parallel (const Line& l1, const Line& l2) {
    return((l1.k == l2.k) && (l1.b != l2.b));
}
bool Same (const Line& l1, const Line& l2) {
    if((l1.k == l2.k) && (l1.b == l2.b)){ // если отрезки лежат на одной прямой, тогда проверяем принадлежит ли начало одного другому
        Point A, B, C, D;
        A.x = l1.x1;
        A.y = l1.y1;
        B.x = l1.x2;
        B.y = l1.y2;
        C.x = l2.x1;
        C.y = l2.y1;
        D.x = l2.x2;
        D.y = l2.y2;
        return(Point_on_segment(A, B, C) || Point_on_segment(A, B, D));
    }
    return false;
}
Point Intersection_point (const Line& l1, const Line& l2) {
    Point res;
    res.x = (l2.b - l1.b)/(l1.k - l2.k);
    res.y = l1.k*res.x + l1.b;
    Point A, B, C, D;
    A.x = l1.x1;
    A.y = l1.y1;
    B.x = l1.x2;
    B.y = l1.y2;
    C.x = l2.x1;
    C.y = l2.y1;
    D.x = l2.x2;
    D.y = l2.y2;
    if(Point_on_segment(A, B, res) && Point_on_segment(C, D, res)) {
        return res;
    }
    return 0;

}
