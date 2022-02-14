
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int * chained_demux; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1 (demux_t *VAR_0, void *VAR_1)
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if (VAR_1)
    {
        FUNC_0(VAR_1);
        VAR_2->chained_demux = ((void*)0);
    }
}
