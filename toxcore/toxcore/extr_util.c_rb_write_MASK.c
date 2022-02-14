
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int size; int start; void** data; } ;
typedef TYPE_1__ RingBuffer ;



void *FUNC_0(RingBuffer *VAR_0, void *VAR_1)
{
    void *VAR_2 = ((void*)0);

    if ((VAR_0->end + 1) % VAR_0->size == VAR_0->start)
        VAR_2 = VAR_0->data[VAR_0->start];

    VAR_0->data[VAR_0->end] = VAR_1;
    VAR_0->end = (VAR_0->end + 1) % VAR_0->size;

    if (VAR_0->end == VAR_0->start)
        VAR_0->start = (VAR_0->start + 1) % VAR_0->size;

    return VAR_2;
}
