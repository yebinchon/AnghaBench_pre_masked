
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int opaque; int (* customFree ) (int ,TYPE_2__*) ;} ;
struct TYPE_8__ {TYPE_1__ customMem; struct TYPE_8__* outBuff; struct TYPE_8__* inBuff; int zd; } ;
typedef TYPE_2__ ZBUFFv07_DCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

size_t FUNC_4(ZBUFFv07_DCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    FUNC_0(VAR_0->zd);
    if (VAR_0->inBuff) VAR_0->customMem.customFree(VAR_0->customMem.opaque, VAR_0->inBuff);
    if (VAR_0->outBuff) VAR_0->customMem.customFree(VAR_0->customMem.opaque, VAR_0->outBuff);
    VAR_0->customMem.customFree(VAR_0->customMem.opaque, VAR_0);
    return 0;
}
