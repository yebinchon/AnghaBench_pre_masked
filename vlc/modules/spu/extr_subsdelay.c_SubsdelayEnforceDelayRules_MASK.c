
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_10__ {scalar_t__ i_new_stop; TYPE_2__* p_source; } ;
typedef TYPE_3__ subsdelay_heap_entry_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {int i_count; TYPE_3__** p_list; } ;
struct TYPE_12__ {int i_overlap; scalar_t__ i_min_stops_interval; scalar_t__ i_min_stop_start_interval; scalar_t__ i_min_start_stop_interval; TYPE_1__ heap; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_9__ {scalar_t__ i_start; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_0 )
{
    subsdelay_heap_entry_t ** VAR_1;
    int VAR_2, VAR_3;
    vlc_tick_t VAR_4;
    vlc_tick_t VAR_5;
    vlc_tick_t VAR_6;
    vlc_tick_t VAR_7;

    filter_sys_t *VAR_8 = VAR_0->p_sys;

    VAR_1 = VAR_8->heap.p_list;
    VAR_2 = VAR_8->heap.i_count;

    VAR_3 = VAR_8->i_overlap;
    VAR_5 = VAR_8->i_min_stops_interval;
    VAR_6 = VAR_8->i_min_stop_start_interval;
    VAR_7 = VAR_8->i_min_start_stop_interval;
    for( int VAR_9 = 0; VAR_9 < VAR_2 - 1; VAR_9++ )
    {
        VAR_1[VAR_9 + 1]->i_new_stop = FUNC_1( VAR_1[VAR_9 + 1]->i_new_stop,
                VAR_1[VAR_9]->i_new_stop + VAR_5 );
    }
    for( int VAR_10 = 0; VAR_10 < VAR_2; VAR_10++ )
    {
        for( int VAR_11 = VAR_10 + 1; VAR_11 < FUNC_2( VAR_2, VAR_10 + 1 + VAR_3 ); VAR_11++ )
        {
            VAR_4 = VAR_1[VAR_11]->p_source->i_start - VAR_1[VAR_10]->i_new_stop;

            if( VAR_4 <= 0 )
            {
                continue;
            }

            if( VAR_4 < VAR_6 )
            {
                VAR_1[VAR_10]->i_new_stop = VAR_1[VAR_11]->p_source->i_start;
            }

            break;
        }
    }
    for( int VAR_12 = 0; VAR_12 < VAR_2; VAR_12++ )
    {
        for( int VAR_13 = VAR_12 + 1; VAR_13 < FUNC_2( VAR_2, VAR_12 + 1 + VAR_3 ); VAR_13++ )
        {
            VAR_4 = VAR_1[VAR_12]->i_new_stop - VAR_1[VAR_13]->p_source->i_start;

            if( VAR_4 <= 0 )
            {
                break;
            }

            if( VAR_4 < VAR_7 )
            {
                VAR_1[VAR_12]->i_new_stop = VAR_1[VAR_13]->p_source->i_start;
                break;
            }
        }
    }
    for( int VAR_14 = 0; VAR_14 < VAR_2 - VAR_3; VAR_14++ )
    {
        VAR_1[VAR_14]->i_new_stop = FUNC_2(VAR_1[VAR_14]->i_new_stop, VAR_1[VAR_14 + VAR_3]->p_source->i_start);
    }



    for( int VAR_15 = 0; VAR_15 < VAR_2; VAR_15++ )
    {
        FUNC_0( VAR_1[VAR_15] );
    }
}
