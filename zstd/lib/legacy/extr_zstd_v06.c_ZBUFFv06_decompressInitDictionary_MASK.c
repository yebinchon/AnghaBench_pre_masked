
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zd; scalar_t__ outEnd; scalar_t__ outStart; scalar_t__ inPos; scalar_t__ lhSize; int stage; } ;
typedef TYPE_1__ ZBUFFv06_DCtx ;


 int VAR_0 ;
 size_t FUNC_0 (int ,void const*,size_t) ;

size_t FUNC_1(ZBUFFv06_DCtx* VAR_1, const void* VAR_2, size_t VAR_3)
{
    VAR_1->stage = VAR_0;
    VAR_1->lhSize = VAR_1->inPos = VAR_1->outStart = VAR_1->outEnd = 0;
    return FUNC_0(VAR_1->zd, VAR_2, VAR_3);
}
