#ifndef ARRAYVEC_H
#define ARRAYVEC_H

#include <cstdlib>

class ArrayVec {
public:
    void randGenArr(int arr[], int num_elem, int range);
    int getSize(const int arr[], int capacity);
};

#endif
