
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stime_t ;
struct TYPE_3__ {int i_entries; size_t i_tracks; int * p_times; } ;
typedef TYPE_1__ mp4_fragments_index_t ;



stime_t FUNC_0( mp4_fragments_index_t *VAR_0, unsigned VAR_1 )
{
    return VAR_0->p_times[(size_t)(VAR_0->i_entries - 1) * VAR_0->i_tracks + VAR_1];
}
