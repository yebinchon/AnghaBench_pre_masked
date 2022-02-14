
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {size_t start; size_t size; void** data; } ;
typedef TYPE_1__ RingBuffer ;


 size_t FUNC_0 (TYPE_1__ const*) ;

uint16_t FUNC_1(const RingBuffer *VAR_0, void **VAR_1)
{
    uint16_t VAR_2 = 0;

    for (; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        VAR_1[VAR_2] = VAR_0->data[(VAR_0->start + VAR_2) % VAR_0->size];

    return VAR_2;
}
