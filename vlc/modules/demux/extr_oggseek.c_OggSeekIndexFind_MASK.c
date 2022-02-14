
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* idx; } ;
typedef TYPE_1__ logical_stream_t ;
typedef int int64_t ;
struct TYPE_5__ {scalar_t__ i_value; struct TYPE_5__* p_next; int i_pagepos; } ;
typedef TYPE_2__ demux_index_entry_t ;



__attribute__((used)) static bool FUNC_0 ( logical_stream_t *VAR_0, vlc_tick_t VAR_1,
                               int64_t *VAR_2, int64_t *VAR_3 )
{
    demux_index_entry_t *VAR_4 = VAR_0->idx;

    while ( VAR_4 != ((void*)0) )
    {
        if ( VAR_4->i_value <= VAR_1 )
        {
            if ( !VAR_4->p_next )
            {
                *VAR_2 = VAR_4->i_pagepos;
                return 1;
            }
            if ( VAR_4->p_next->i_value > VAR_1 )
            {
                *VAR_2 = VAR_4->i_pagepos;
                *VAR_3 = VAR_4->p_next->i_pagepos;
                return 1;
            }
        }
        VAR_4 = VAR_4->p_next;
    }

    return 0;
}
