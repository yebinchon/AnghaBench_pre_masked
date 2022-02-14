
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_14__ {TYPE_4__* p_source; TYPE_3__* p_subpic; } ;
typedef TYPE_5__ subsdelay_heap_entry_t ;
struct TYPE_15__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_16__ {int i_mode; int f_factor; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_13__ {int i_stop; int i_start; } ;
struct TYPE_12__ {TYPE_2__* p_region; } ;
struct TYPE_11__ {TYPE_1__* p_text; } ;
struct TYPE_10__ {int psz_text; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_4( filter_t *VAR_3, subsdelay_heap_entry_t *VAR_4 )
{
    int VAR_5;
    int VAR_6;

    filter_sys_t *VAR_7 = VAR_3->p_sys;

    VAR_5 = VAR_7->i_mode;

    if( VAR_5 == VAR_0 )
    {
        return ( VAR_4->p_source->i_stop - VAR_4->p_source->i_start + FUNC_3( VAR_7->f_factor ) );
    }

    if( VAR_5 == VAR_1 )
    {
        if( VAR_4->p_subpic && VAR_4->p_subpic->p_region && ( VAR_4->p_subpic->p_region->p_text ) )
        {

            VAR_6 = FUNC_0( VAR_4->p_subpic->p_region->p_text->psz_text );

            return FUNC_3( VAR_7->f_factor * VAR_6 );
        }


        VAR_5 = VAR_2;
    }

    if( FUNC_2(VAR_5 == VAR_2) )
    {
        return (vlc_tick_t)( VAR_7->f_factor * ( VAR_4->p_source->i_stop - VAR_4->p_source->i_start ) );
    }

    return FUNC_1(10);
}
