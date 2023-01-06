#pragma once
#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__

#include "Strategy.h"

class BubbleSort :
    public Strategy
{
public:
    BubbleSort();
    virtual ~BubbleSort();

protected:
    virtual void sort(int arr[], int N);
};

#endif // !__BUBBLESORT_H__
