
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_event; TYPE_1__** pp_event; TYPE_1__* p_current; } ;
typedef TYPE_2__ vlc_epg_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ i_start; } ;



void FUNC_0( vlc_epg_t *VAR_0, int64_t VAR_1 )
{
    size_t VAR_2;
    VAR_0->p_current = ((void*)0);
    if( VAR_1 < 0 )
        return;

    for( VAR_2 = 0; VAR_2 < VAR_0->i_event; VAR_2++ )
    {
        if( VAR_0->pp_event[VAR_2]->i_start == VAR_1 )
        {
            VAR_0->p_current = VAR_0->pp_event[VAR_2];
            break;
        }
    }
}
