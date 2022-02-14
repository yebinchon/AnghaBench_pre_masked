
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_9__ {int i_seekpoint; int seekpoint_changed; TYPE_1__* p_title; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_7__ {scalar_t__ i_time_offset; } ;
struct TYPE_6__ {int i_seekpoint; TYPE_2__** seekpoint; } ;



__attribute__((used)) static void FUNC_0( demux_t *VAR_0, vlc_tick_t VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;
    int VAR_3;
    if( !VAR_2->p_title )
        return;
    for( VAR_3 = 0; VAR_3 < VAR_2->p_title->i_seekpoint; VAR_3++ )
    {
        if( VAR_1 < VAR_2->p_title->seekpoint[VAR_3]->i_time_offset )
            break;
    }
    VAR_3--;

    if( VAR_3 != VAR_2->i_seekpoint && VAR_3 >= 0 )
    {
        VAR_2->i_seekpoint = VAR_3;
        VAR_2->seekpoint_changed = 1;
    }
}
