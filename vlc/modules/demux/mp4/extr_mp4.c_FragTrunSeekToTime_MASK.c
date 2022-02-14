
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ stime_t ;
struct TYPE_13__ {int i_count; unsigned int i_current; TYPE_7__* p_array; } ;
struct TYPE_14__ {scalar_t__ i_default_sample_duration; scalar_t__ i_default_sample_size; unsigned int i_trun_sample; TYPE_4__ runs; scalar_t__ i_trun_sample_pos; } ;
struct TYPE_15__ {TYPE_5__ context; int b_ok; } ;
typedef TYPE_6__ mp4_track_t ;
struct TYPE_16__ {scalar_t__ i_offset; scalar_t__ i_first_dts; TYPE_2__* p_trun; } ;
typedef TYPE_7__ mp4_run_t ;
struct TYPE_17__ {unsigned int i_sample_count; int i_flags; TYPE_3__* p_samples; } ;
struct TYPE_12__ {scalar_t__ i_duration; scalar_t__ i_size; } ;
struct TYPE_10__ {TYPE_8__* p_trun; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
typedef TYPE_8__ MP4_Box_data_trun_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0( mp4_track_t *VAR_2, stime_t VAR_3 )
{
    if( !VAR_2->b_ok || VAR_2->context.runs.i_count < 1 )
        return;

    unsigned VAR_4 = 0;
    unsigned VAR_5 = 0;
    uint64_t VAR_6 = VAR_2->context.runs.p_array[0].i_offset;
    stime_t VAR_7 = VAR_2->context.runs.p_array[0].i_first_dts;

    for( unsigned VAR_8 = 0; VAR_8 < VAR_2->context.runs.i_count; VAR_8++ )
    {
        const mp4_run_t *VAR_9 = &VAR_2->context.runs.p_array[VAR_8];
        const MP4_Box_data_trun_t *VAR_10 =
                    VAR_2->context.runs.p_array[VAR_8].p_trun->data.p_trun;
        if( VAR_7 > VAR_3 )
            break;

        VAR_4 = VAR_8;
        VAR_7 = VAR_9->i_first_dts;
        VAR_6 = VAR_9->i_offset;
        VAR_5 = 0;

        uint32_t VAR_11 = VAR_2->context.i_default_sample_duration;
        uint32_t VAR_12 = VAR_2->context.i_default_sample_size;
        for ( unsigned VAR_13=0; VAR_13<VAR_10->i_sample_count; VAR_13++ )
        {
            if( VAR_10->i_flags & VAR_0 )
                VAR_11 = VAR_10->p_samples[VAR_13].i_duration;


            if( VAR_7 + VAR_11 > VAR_3 )
                break;

            if( VAR_10->i_flags & VAR_1 )
                VAR_12 = VAR_10->p_samples[VAR_13].i_size;

            VAR_7 += VAR_11;
            VAR_6 += VAR_12;
        }
    }

    VAR_2->context.i_trun_sample = VAR_5;
    VAR_2->context.i_trun_sample_pos = VAR_6;
    VAR_2->context.runs.i_current = VAR_4;
}
