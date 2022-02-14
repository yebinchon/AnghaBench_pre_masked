
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_5__ {int * spu; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;
typedef int subpicture_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( vout_thread_t *VAR_0, subpicture_t *VAR_1 )
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;
    FUNC_0(!VAR_2->dummy);

    if (VAR_2->spu != ((void*)0))
        FUNC_1(VAR_2->spu, VAR_1);
    else
        FUNC_2(VAR_1);
}
