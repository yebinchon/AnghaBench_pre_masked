
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ stime_t ;
struct TYPE_3__ {scalar_t__ i_last_time; int i_entries; unsigned int i_tracks; scalar_t__* p_times; int * pi_pos; } ;
typedef TYPE_1__ mp4_fragments_index_t ;



bool FUNC_0( mp4_fragments_index_t *VAR_0, stime_t *VAR_1,
                                 uint64_t *VAR_2, unsigned VAR_3 )
{
    if( *VAR_1 >= VAR_0->i_last_time || VAR_0->i_entries < 1 ||
        VAR_3 >= VAR_0->i_tracks )
        return 0;

    for( size_t VAR_4=1; VAR_4<VAR_0->i_entries; VAR_4++ )
    {
        if( VAR_0->p_times[VAR_4 * VAR_0->i_tracks + VAR_3] > *VAR_1 )
        {
            *VAR_1 = VAR_0->p_times[(VAR_4 - 1) * VAR_0->i_tracks + VAR_3];
            *VAR_2 = VAR_0->pi_pos[VAR_4 - 1];
            return 1;
        }
    }

    *VAR_1 = VAR_0->p_times[(size_t)(VAR_0->i_entries - 1) * VAR_0->i_tracks];
    *VAR_2 = VAR_0->pi_pos[VAR_0->i_entries - 1];
    return 1;
}
