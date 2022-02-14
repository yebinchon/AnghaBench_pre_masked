
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef unsigned int stime_t ;
struct TYPE_4__ {size_t i_chunk; unsigned int i_sample; int i_timescale; TYPE_2__* chunk; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_5__ {unsigned int i_sample_first; unsigned int i_entries_dts; unsigned int* p_sample_count_dts; unsigned int* p_sample_delta_dts; } ;
typedef TYPE_2__ mp4_chunk_t ;
typedef unsigned int int64_t ;
typedef int demux_t ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline vlc_tick_t FUNC_2( demux_t *VAR_0, mp4_track_t *VAR_1,
                                              unsigned VAR_2 )
{
    FUNC_1( VAR_0 );

    const mp4_chunk_t *VAR_3 = &VAR_1->chunk[VAR_1->i_chunk];
    stime_t VAR_4 = 0;


    unsigned VAR_5 = 0;
    unsigned VAR_6 = 0;
    for( unsigned VAR_7 = VAR_3->i_sample_first;
         VAR_7<VAR_1->i_sample && VAR_5 < VAR_3->i_entries_dts; )
    {
        if( VAR_1->i_sample - VAR_7 >= VAR_3->p_sample_count_dts[VAR_5] )
        {
            VAR_7 += VAR_3->p_sample_count_dts[VAR_5];
            VAR_5++;
        }
        else
        {
            VAR_6 = VAR_1->i_sample - VAR_7;
            break;
        }
    }


    while( VAR_2 > 0 && VAR_5 < VAR_3->i_entries_dts )
    {
        if( VAR_2 >= VAR_3->p_sample_count_dts[VAR_5] - VAR_6 )
        {
            VAR_4 += (VAR_3->p_sample_count_dts[VAR_5] - VAR_6) *
                          (int64_t) VAR_3->p_sample_delta_dts[VAR_5];
            VAR_2 -= (VAR_3->p_sample_count_dts[VAR_5] - VAR_6);
            VAR_5++;
            VAR_6 = 0;
        }
        else
        {
            VAR_4 += VAR_2 * VAR_3->p_sample_delta_dts[VAR_5];
            break;
        }
    }

    return FUNC_0( VAR_4, VAR_1->i_timescale );
}
