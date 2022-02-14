
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {TYPE_1__* p_skel; } ;
typedef TYPE_2__ logical_stream_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {unsigned char* p_index; scalar_t__ i_indexfirstnum; scalar_t__ i_indexstampden; scalar_t__ i_indexlastnum; int i_index_size; scalar_t__ i_index; } ;


 unsigned char* FUNC_0 (unsigned char const*,unsigned char const*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_1( logical_stream_t *VAR_2, vlc_tick_t VAR_3,
                                      int64_t *VAR_4, int64_t *VAR_5 )
{
    if ( !VAR_2 || !VAR_2->p_skel || !VAR_2->p_skel->p_index ||
         VAR_3 == VAR_1 )
        return 0;

    VAR_3 -= VAR_0;


    if ( VAR_3 < VAR_2->p_skel->i_indexfirstnum
                * VAR_2->p_skel->i_indexstampden ||
         VAR_3 > VAR_2->p_skel->i_indexlastnum
                * VAR_2->p_skel->i_indexstampden ) return 0;


    unsigned const char *VAR_6 = VAR_2->p_skel->p_index;
    struct
    {
        int64_t i_pos;
        vlc_tick_t i_time;
    } VAR_7 = { 0, 0 }, VAR_8 = { -1, -1 };

    uint64_t VAR_9 = 0;

    while( VAR_6 < VAR_6 + VAR_2->p_skel->i_index_size
           && VAR_9 < VAR_2->p_skel->i_index )
    {
        uint64_t VAR_10;
        VAR_6 = FUNC_0( VAR_6,
                        VAR_6 + VAR_2->p_skel->i_index_size, &VAR_10 );
        VAR_7.i_pos += VAR_10;
        VAR_6 = FUNC_0( VAR_6,
                        VAR_6 + VAR_2->p_skel->i_index_size, &VAR_10 );
        VAR_7.i_time += VAR_10 * VAR_2->p_skel->i_indexstampden;
        if ( VAR_7.i_pos < 0 || VAR_7.i_time < 0 ) break;

        VAR_9++;

        if ( VAR_3 <= VAR_7.i_time )
        {
            *VAR_4 = VAR_8.i_pos;
            *VAR_5 = VAR_7.i_pos;
            return ( VAR_3 == VAR_7.i_time );
        }
        VAR_8 = VAR_7;
    }
    return 0;
}
