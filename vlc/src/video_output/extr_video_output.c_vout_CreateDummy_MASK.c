
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_6__ {int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;
typedef int vlc_object_t ;


 TYPE_1__* FUNC_0 (int *) ;

vout_thread_t *FUNC_1(vlc_object_t *VAR_0)
{
    vout_thread_t *VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1)
        return ((void*)0);

    vout_thread_sys_t *VAR_2 = VAR_1->p;
    VAR_2->dummy = 1;
    return VAR_1;
}
