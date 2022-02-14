
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* group; void* user; } ;
typedef TYPE_1__ DynamicCreds ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;

void FUNC_2(DynamicCreds *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->user = FUNC_1(VAR_0->user);
        VAR_0->group = FUNC_1(VAR_0->group);
}
