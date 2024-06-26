#ifndef VECTOR_STRUCT_H_INCLUDED
#define VECTOR_STRUCT_H_INCLUDED

#include "Point.h"
struct Vector{
    float x;
    float y;
};

Vector operator-(const Point& point1, const Point& point2){
    return {point1.x - point2.x, point1.y - point2.y};
}

#endif // VECTOR_STRUCT_H_INCLUDED
