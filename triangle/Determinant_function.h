#ifndef DETERMINANT_FUNCTION_H_INCLUDED
#define DETERMINANT_FUNCTION_H_INCLUDED

#include "Vector_struct.h"
float determinant(const Vector& a1, const Vector& a2){
    return a1.x * a2.y - a1.y * a2.x;
}


#endif // DETERMINANT_FUNCTION_H_INCLUDED
