
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int i_entries; unsigned int i_tracks; scalar_t__ i_last_time; void* pi_pos; void* p_times; } ;
typedef TYPE_1__ mp4_fragments_index_t ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 void* FUNC_1 (unsigned int,int) ;
 TYPE_1__* FUNC_2 (int) ;

mp4_fragments_index_t * FUNC_3( unsigned VAR_1, unsigned VAR_2 )
{
    if( !VAR_1 || !VAR_2 || VAR_0 / VAR_2 < VAR_1 )
        return ((void*)0);
    mp4_fragments_index_t *VAR_3 = FUNC_2( sizeof(*VAR_3) );
    if( VAR_3 )
    {
        VAR_3->p_times = FUNC_1( (size_t)VAR_2 * VAR_1, sizeof(*VAR_3->p_times) );
        VAR_3->pi_pos = FUNC_1( VAR_2, sizeof(*VAR_3->pi_pos) );
        if( !VAR_3->p_times || !VAR_3->pi_pos )
        {
            FUNC_0( VAR_3 );
            return ((void*)0);
        }
        VAR_3->i_entries = VAR_2;
        VAR_3->i_last_time = 0;
        VAR_3->i_tracks = VAR_1;
    }
    return VAR_3;
}
