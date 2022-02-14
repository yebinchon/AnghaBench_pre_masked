
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ end; scalar_t__ start; scalar_t__ size; } ;
typedef TYPE_1__ RingBuffer ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

uint16_t FUNC_1(const RingBuffer *VAR_0)
{
    if (FUNC_0(VAR_0))
        return 0;

    return
        VAR_0->end > VAR_0->start ?
        VAR_0->end - VAR_0->start :
        (VAR_0->size - VAR_0->start) + VAR_0->end;
}
