#ifndef SEGMENT_INTERSECTION_STRUCT_H_INCLUDED
#define SEGMENT_INTERSECTION_STRUCT_H_INCLUDED

struct Point{
    float x;
    float y;
};

// y = kx + b
// (x - x1)/(x2-x1) = (y-y1)/(y2-y1)
struct Line{
    float x1;
    float y1;
    float x2;
    float y2;
    float k = (y2 - y1)/(x1 - x2);
    float b = y1*x2 - x1*y2;
};

#endif // SEGMENT_INTERSECTION_STRUCT_H_INCLUDED
