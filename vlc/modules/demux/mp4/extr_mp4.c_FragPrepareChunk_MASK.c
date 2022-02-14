
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int stime_t ;
struct TYPE_9__ {TYPE_4__* p_array; scalar_t__ i_count; } ;
struct TYPE_10__ {int b_resync_time_offset; scalar_t__ i_trun_sample; int i_trun_sample_pos; TYPE_1__ runs; } ;
struct TYPE_11__ {int i_time; TYPE_2__ context; } ;
typedef TYPE_3__ mp4_track_t ;
struct TYPE_12__ {int i_first_dts; int i_offset; } ;
typedef TYPE_4__ mp4_run_t ;
struct TYPE_13__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_14__ {unsigned int i_tracks; TYPE_3__* track; } ;
typedef TYPE_6__ demux_sys_t ;
typedef int MP4_Box_t ;


 scalar_t__ FUNC_0 (TYPE_5__*,int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_2, MP4_Box_t *VAR_3,
                             MP4_Box_t *VAR_4, stime_t VAR_5, bool VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_2->p_sys;

    if( VAR_6 )
    {
        for( unsigned VAR_8=0; VAR_8<VAR_7->i_tracks; VAR_8++ )
            VAR_7->track[VAR_8].context.b_resync_time_offset = 1;
    }

    if( FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5 ) == VAR_1 )
    {
        for( unsigned VAR_9=0; VAR_9<VAR_7->i_tracks; VAR_9++ )
        {
            mp4_track_t *VAR_10 = &VAR_7->track[VAR_9];
            if( VAR_10->context.runs.i_count )
            {
                const mp4_run_t *VAR_11 = &VAR_10->context.runs.p_array[0];
                VAR_10->context.i_trun_sample_pos = VAR_11->i_offset;
                VAR_10->context.i_trun_sample = 0;
                VAR_10->i_time = VAR_11->i_first_dts;
            }
        }
        return VAR_1;
    }

    return VAR_0;
}
