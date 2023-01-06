#pragma once
#ifndef __SELECTIONSORT_H__
#define __SELECTIONSORT_H__

#include "Strategy.h"

class SelectionSort :
    public Strategy
{
public:
    SelectionSort();
    virtual ~SelectionSort();

protected:
    virtual void sort(int arr[], int N);
};

#endif // !__SELECTIONSORT_H__
