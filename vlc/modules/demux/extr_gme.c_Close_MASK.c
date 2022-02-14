
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {unsigned int titlec; int emu; struct TYPE_6__* titlev; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__) ;

__attribute__((used)) static void FUNC_3 (vlc_object_t *VAR_0)
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    for (unsigned VAR_3 = 0, VAR_4 = VAR_2->titlec; VAR_3 < VAR_4; VAR_3++)
        FUNC_2 (VAR_2->titlev[VAR_3]);
    FUNC_0 (VAR_2->titlev);
    FUNC_1 (VAR_2->emu);
    FUNC_0 (VAR_2);
}
