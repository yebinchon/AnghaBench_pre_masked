
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double vlc_tick_t ;
typedef int video_format_t ;
struct TYPE_12__ {double i_new_stop; TYPE_6__* p_source; TYPE_3__* p_subpic; } ;
typedef TYPE_4__ subsdelay_heap_entry_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
struct TYPE_13__ {TYPE_1__ updater; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_10__ {int (* pf_update ) (TYPE_6__*,int const*,int const*,double) ;} ;
struct TYPE_14__ {double i_start; double i_stop; int p_region; TYPE_2__ updater; } ;
struct TYPE_11__ {int p_region; } ;


 int FUNC_0 (TYPE_5__*,double) ;
 int FUNC_1 (TYPE_6__*,int const*,int const*,double) ;

__attribute__((used)) static void FUNC_2( subpicture_t *VAR_0, const video_format_t *VAR_1,
                                  const video_format_t *VAR_2, vlc_tick_t VAR_3 )
{
    subsdelay_heap_entry_t *VAR_4;
    vlc_tick_t VAR_5;

    VAR_4 = VAR_0->updater.p_sys;
    if( !VAR_4 )
    {
        return;
    }


    if( VAR_4->p_source->updater.pf_update )
    {
        VAR_5 = VAR_4->p_source->i_start +
                   ( (double)( VAR_4->p_source->i_stop - VAR_4->p_source->i_start ) * ( VAR_3 - VAR_4->p_source->i_start ) ) /
                   ( VAR_4->i_new_stop - VAR_4->p_source->i_start );

        VAR_4->p_source->p_region = VAR_4->p_subpic->p_region;

        VAR_4->p_source->updater.pf_update( VAR_4->p_source, VAR_1, VAR_2, VAR_5 );

        VAR_4->p_subpic->p_region = VAR_4->p_source->p_region;
    }

    FUNC_0( VAR_0, VAR_3 );
}
