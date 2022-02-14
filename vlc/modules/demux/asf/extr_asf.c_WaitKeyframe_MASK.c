
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int msftime_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_12__ {int i_seek_track; int i_wait_keyframe; scalar_t__ b_canfastseek; TYPE_6__** track; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_10__ {TYPE_2__* p_esp; TYPE_1__* p_sp; } ;
struct TYPE_13__ {scalar_t__ i_cat; TYPE_3__ info; scalar_t__ b_selected; } ;
typedef TYPE_6__ asf_track_t ;
struct TYPE_9__ {int i_average_time_per_frame; } ;
struct TYPE_8__ {int i_stream_number; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    if ( ! VAR_4->i_seek_track )
    {
        for ( int VAR_5=0; VAR_5<VAR_0; VAR_5++ )
        {
            asf_track_t *VAR_6 = VAR_4->track[VAR_5];
            if ( VAR_6 && VAR_6->info.p_sp && VAR_6->i_cat == VAR_2 && VAR_6->b_selected )
            {
                VAR_4->i_seek_track = VAR_6->info.p_sp->i_stream_number;
                break;
            }
        }
    }

    if ( VAR_4->i_seek_track )
    {

        asf_track_t *VAR_7 = VAR_4->track[VAR_4->i_seek_track];
        if ( VAR_7->info.p_esp && VAR_7->info.p_esp->i_average_time_per_frame )
        {


            msftime_t VAR_8 = FUNC_0( VAR_4->b_canfastseek ? 60 : 5);
            uint64_t VAR_9 = VAR_8 / VAR_7->info.p_esp->i_average_time_per_frame;
            VAR_4->i_wait_keyframe = FUNC_1( VAR_9, VAR_1 );
        }
        else
        {
            VAR_4->i_wait_keyframe = ( VAR_4->b_canfastseek ) ? 25 * 30 : 25 * 5;
        }
    }
    else
    {
        VAR_4->i_wait_keyframe = 0;
    }

}
