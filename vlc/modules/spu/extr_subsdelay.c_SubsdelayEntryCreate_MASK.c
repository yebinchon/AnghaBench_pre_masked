
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int b_update_stop; int b_update_position; int b_check_empty; int b_last_region_saved; scalar_t__ i_last_region_align; scalar_t__ i_last_region_y; scalar_t__ i_last_region_x; int i_new_stop; int b_update_ephemer; int * p_next; int * p_filter; TYPE_3__* p_source; TYPE_3__* p_subpic; } ;
typedef TYPE_1__ subsdelay_heap_entry_t ;
struct TYPE_11__ {int pf_destroy; int pf_update; int pf_validate; TYPE_1__* p_sys; } ;
typedef TYPE_2__ subpicture_updater_t ;
struct TYPE_12__ {int i_stop; int b_ephemer; } ;
typedef TYPE_3__ subpicture_t ;
typedef int filter_t ;


 TYPE_3__* FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static subsdelay_heap_entry_t * FUNC_3( subpicture_t *VAR_3, filter_t *VAR_4 )
{
    subsdelay_heap_entry_t *VAR_5;

    subpicture_t *VAR_6;

    subpicture_updater_t VAR_7;



    VAR_5 = (subsdelay_heap_entry_t *) FUNC_2( sizeof( subsdelay_heap_entry_t ) );

    if( !VAR_5 )
    {
        return ((void*)0);
    }



    VAR_7.p_sys = VAR_5;
    VAR_7.pf_validate = VAR_2;
    VAR_7.pf_update = VAR_1;
    VAR_7.pf_destroy = VAR_0;



    VAR_6 = FUNC_0( VAR_3, &VAR_7 );

    if( !VAR_6 )
    {
        FUNC_1( VAR_5 );
        return ((void*)0);
    }



    VAR_5->p_subpic = VAR_6;
    VAR_5->p_source = VAR_3;
    VAR_5->p_filter = VAR_4;
    VAR_5->p_next = ((void*)0);
    VAR_5->b_update_stop = 1;
    VAR_5->b_update_ephemer = VAR_3->b_ephemer;
    VAR_5->b_update_position = 1;
    VAR_5->b_check_empty = 1;
    VAR_5->i_new_stop = VAR_3->i_stop;
    VAR_5->b_last_region_saved = 0;
    VAR_5->i_last_region_x = 0;
    VAR_5->i_last_region_y = 0;
    VAR_5->i_last_region_align = 0;

    return VAR_5;
}
