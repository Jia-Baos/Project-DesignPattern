#pragma once
#ifndef __INSERTSORT_H__
#define __INSERTSORT_H__

#include "Strategy.h"

class InsertSort :
    public Strategy
{
public:
    InsertSort();
    virtual ~InsertSort();

protected:
    virtual void sort(int arr[], int N);
};

#endif // !__INSERTSORT_H__
