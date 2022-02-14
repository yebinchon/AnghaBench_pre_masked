
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int device; } ;
typedef TYPE_1__ SwapEntry ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

SwapEntry* FUNC_2(SwapEntry *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->device);
        FUNC_0(VAR_0->type);

        return FUNC_1(VAR_0);
}
