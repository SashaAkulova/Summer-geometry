#include "line_intersection_struct.h"
#include "line_intersection_function.h"

bool Parallel (const Line& l1, const Line& l2) {
    return((l1.k == l2.k) && (l1.b != l2.b));
}
bool Same (const Line& l1, const Line& l2) {
    return((l1.k == l2.k) && (l1.b == l2.b));
}
Point Intersection_point (const Line& l1, const Line& l2) {
    Point res;
    res.x = (l2.b - l1.b)/(l1.k - l2.k);
    res.y = l1.k*res.x + l1.b;
    return res;
}
