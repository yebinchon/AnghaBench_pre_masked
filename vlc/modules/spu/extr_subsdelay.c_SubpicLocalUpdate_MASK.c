
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int subsdelay_heap_t ;
struct TYPE_18__ {int b_check_empty; int b_update_stop; int b_update_position; int i_last_region_y; int i_last_region_align; int i_last_region_x; scalar_t__ b_last_region_saved; TYPE_2__* p_source; scalar_t__ i_new_stop; int b_update_ephemer; TYPE_6__* p_filter; } ;
typedef TYPE_4__ subsdelay_heap_entry_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
struct TYPE_19__ {int b_ephemer; int b_absolute; TYPE_3__* p_region; int i_alpha; int i_start; int i_stop; TYPE_1__ updater; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_20__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_21__ {int heap; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_17__ {int i_y; int i_align; int i_x; int p_text; } ;
struct TYPE_16__ {int i_alpha; scalar_t__ i_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( subpicture_t* VAR_2, vlc_tick_t VAR_3 )
{
    subsdelay_heap_entry_t *VAR_4;
    subsdelay_heap_t *VAR_5;
    filter_t *VAR_6;

    int VAR_7;

    VAR_4 = VAR_2->updater.p_sys;
    if( !VAR_4 || !VAR_4->p_filter )
    {
        return;
    }

    VAR_6 = VAR_4->p_filter;
    filter_sys_t *VAR_8 = VAR_6->p_sys;
    VAR_5 = &VAR_8->heap;

    FUNC_4( VAR_5 );

    if( VAR_4->b_check_empty && VAR_2->p_region )
    {

        if( FUNC_7( VAR_2->p_region->p_text ) )
        {


            VAR_2->b_ephemer = 0;
            VAR_2->i_stop = VAR_2->i_start;

            FUNC_5( VAR_5, VAR_4 );

            FUNC_6( VAR_5 );

            return;
        }

        VAR_4->b_check_empty = 0;
    }

    if( VAR_4->b_update_stop && !VAR_4->b_update_ephemer )
    {
        VAR_4->i_new_stop = VAR_4->p_source->i_start + FUNC_2( VAR_6, VAR_4 );
        VAR_4->b_update_stop = 0;

        FUNC_1( VAR_6 );
    }

    VAR_7 = FUNC_3( VAR_5, VAR_4, VAR_3 );

    VAR_2->i_alpha = FUNC_0( VAR_6, VAR_7, VAR_4->p_source->i_alpha );

    if( VAR_4->b_update_position )
    {
        VAR_2->b_absolute = 0;

        if( VAR_2->p_region )
        {
            VAR_2->p_region->i_x = 0;
            VAR_2->p_region->i_y = 10;
            VAR_2->p_region->i_align = ( VAR_2->p_region->i_align & ( ~VAR_1 ) )
                    | VAR_0;
        }

        VAR_4->b_update_position = 0;
    }
    else if( VAR_4->b_last_region_saved )
    {
        VAR_2->b_absolute = 1;

        if( VAR_2->p_region )
        {
            VAR_2->p_region->i_x = VAR_4->i_last_region_x;
            VAR_2->p_region->i_y = VAR_4->i_last_region_y;
            VAR_2->p_region->i_align = VAR_4->i_last_region_align;
        }
    }

    FUNC_6( VAR_5 );
}
