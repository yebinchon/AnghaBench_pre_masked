
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {void* chained_demux; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void *FUNC_2 (demux_t *VAR_0, const char *VAR_1)
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if (VAR_2->chained_demux != ((void*)0))
        return ((void*)0);
    VAR_2->chained_demux = FUNC_1(FUNC_0(VAR_0), VAR_1,
                                                 VAR_0->out);
    return VAR_2->chained_demux;
}
