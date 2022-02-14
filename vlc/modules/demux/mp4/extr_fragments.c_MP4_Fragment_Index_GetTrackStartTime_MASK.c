
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int stime_t ;
struct TYPE_3__ {size_t i_entries; scalar_t__* pi_pos; size_t i_tracks; int * p_times; } ;
typedef TYPE_1__ mp4_fragments_index_t ;



stime_t FUNC_0( mp4_fragments_index_t *VAR_0,
                                              unsigned VAR_1, uint64_t VAR_2 )
{
    for( size_t VAR_3=0; VAR_3<VAR_0->i_entries; VAR_3++ )
    {
        if( VAR_0->pi_pos[VAR_3] >= VAR_2 )
            return VAR_0->p_times[VAR_3 * VAR_0->i_tracks + VAR_1];
    }
    return 0;
}
