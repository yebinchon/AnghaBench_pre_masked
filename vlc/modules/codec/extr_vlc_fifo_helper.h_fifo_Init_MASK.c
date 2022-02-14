
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_depth; int * p_first; int ** pp_last; } ;
typedef TYPE_1__ fifo_t ;



__attribute__((used)) static inline void FUNC_0(fifo_t *VAR_0)
{
    VAR_0->p_first = ((void*)0);
    VAR_0->pp_last = &VAR_0->p_first;
    VAR_0->i_depth = 0;
}
