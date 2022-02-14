
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_10__ {size_t i_chunk; unsigned int i_sample; size_t i_elst; unsigned int i_elst_time; int i_timescale; TYPE_5__* (* BOXDATA ) (int ) ;scalar_t__ p_elst; TYPE_2__* chunk; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_11__ {unsigned int i_sample_first; unsigned int i_first_dts; unsigned int i_entries_dts; unsigned int* p_sample_count_dts; unsigned int* p_sample_delta_dts; } ;
typedef TYPE_2__ mp4_chunk_t ;
typedef unsigned int int64_t ;
struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {int i_timescale; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {scalar_t__* i_media_rate_integer; scalar_t__* i_media_rate_fraction; scalar_t__* i_media_time; scalar_t__ i_entry_count; } ;
typedef TYPE_5__ MP4_Box_data_elst_t ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;

__attribute__((used)) static inline vlc_tick_t FUNC_3( demux_t *VAR_1, mp4_track_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;
    const mp4_chunk_t *VAR_4 = &VAR_2->chunk[VAR_2->i_chunk];

    unsigned int VAR_5 = 0;
    unsigned int VAR_6 = VAR_2->i_sample - VAR_4->i_sample_first;
    int64_t VAR_7 = VAR_4->i_first_dts;

    while( VAR_6 > 0 && VAR_5 < VAR_4->i_entries_dts )
    {
        if( VAR_6 > VAR_4->p_sample_count_dts[VAR_5] )
        {
            VAR_7 += VAR_4->p_sample_count_dts[VAR_5] *
                VAR_4->p_sample_delta_dts[VAR_5];
            VAR_6 -= VAR_4->p_sample_count_dts[VAR_5];
            VAR_5++;
        }
        else
        {
            VAR_7 += VAR_6 * VAR_4->p_sample_delta_dts[VAR_5];
            break;
        }
    }

    vlc_tick_t VAR_8 = FUNC_0( VAR_7, VAR_2->i_timescale );


    if( VAR_2->p_elst && VAR_2->BOXDATA(VAR_0)->i_entry_count )
    {
        MP4_Box_data_elst_t *VAR_9 = VAR_2->BOXDATA(VAR_0);


        if( ( VAR_9->i_media_rate_integer[VAR_2->i_elst] > 0 ||
              VAR_9->i_media_rate_fraction[VAR_2->i_elst] > 0 ) &&
            VAR_9->i_media_time[VAR_2->i_elst] > 0 )
        {
            VAR_8 -= FUNC_0( VAR_9->i_media_time[VAR_2->i_elst], VAR_2->i_timescale );
        }


        VAR_8 += FUNC_0( VAR_2->i_elst_time, VAR_3->i_timescale );

        if( VAR_8 < 0 ) VAR_8 = 0;
    }

    return VAR_8;
}
