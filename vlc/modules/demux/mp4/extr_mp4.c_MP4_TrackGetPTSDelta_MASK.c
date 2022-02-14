
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {size_t i_chunk; unsigned int i_sample; int i_timescale; TYPE_2__* chunk; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_5__ {unsigned int i_sample_first; unsigned int* p_sample_count_pts; unsigned int i_entries_pts; int * p_sample_offset_pts; } ;
typedef TYPE_2__ mp4_chunk_t ;
typedef int demux_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2( demux_t *VAR_0, mp4_track_t *VAR_1,
                                         vlc_tick_t *VAR_2 )
{
    FUNC_1( VAR_0 );
    mp4_chunk_t *VAR_3 = &VAR_1->chunk[VAR_1->i_chunk];

    unsigned int VAR_4 = 0;
    unsigned int VAR_5 = VAR_1->i_sample - VAR_3->i_sample_first;

    if( VAR_3->p_sample_count_pts == ((void*)0) || VAR_3->p_sample_offset_pts == ((void*)0) )
        return 0;

    for( VAR_4 = 0; VAR_4 < VAR_3->i_entries_pts ; VAR_4++ )
    {
        if( VAR_5 < VAR_3->p_sample_count_pts[VAR_4] )
        {
            *VAR_2 = FUNC_0( VAR_3->p_sample_offset_pts[VAR_4],
                                           VAR_1->i_timescale );
            return 1;
        }

        VAR_5 -= VAR_3->p_sample_count_pts[VAR_4];
    }
    return 0;
}
