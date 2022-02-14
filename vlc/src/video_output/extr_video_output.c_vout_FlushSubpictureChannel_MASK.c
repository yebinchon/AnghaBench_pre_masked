
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_5__ {scalar_t__ spu; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,size_t) ;

void FUNC_2( vout_thread_t *VAR_0, size_t VAR_1 )
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;
    FUNC_0(!VAR_2->dummy);
    if (VAR_2->spu)
        FUNC_1(VAR_2->spu, VAR_1);
}
