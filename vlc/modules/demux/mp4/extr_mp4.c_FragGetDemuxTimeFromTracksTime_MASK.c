
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_9__ {unsigned int i_tracks; TYPE_3__* track; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_6__ {scalar_t__ i_count; } ;
struct TYPE_7__ {TYPE_1__ runs; } ;
struct TYPE_8__ {int i_timescale; int i_time; TYPE_2__ context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static vlc_tick_t FUNC_2( demux_sys_t *VAR_1 )
{
    vlc_tick_t VAR_2 = VAR_0;
    for( unsigned int VAR_3 = 0; VAR_3 < VAR_1->i_tracks; VAR_3++ )
    {
        if( VAR_1->track[VAR_3].context.runs.i_count == 0 )
            continue;
        vlc_tick_t VAR_4 = FUNC_0( VAR_1->track[VAR_3].i_time,
                                             VAR_1->track[VAR_3].i_timescale );
        VAR_2 = FUNC_1( VAR_2, VAR_4 );
    }
    return VAR_2;
}
