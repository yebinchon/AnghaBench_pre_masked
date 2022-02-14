
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int margin_ratio; int region; } ;
typedef TYPE_2__ subtext_updater_sys_t ;
typedef int substext_updater_region_t ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
struct TYPE_13__ {int b_ephemer; int b_absolute; int b_subtitle; scalar_t__ i_stop; scalar_t__ i_start; TYPE_1__ updater; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_14__ {scalar_t__ b_visible; scalar_t__ b_defined; } ;
typedef TYPE_4__ cea708_window_t ;
struct TYPE_15__ {scalar_t__ i_clock; TYPE_4__* window; int p_dec; } ;
typedef TYPE_5__ cea708_t ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int ) ;

__attribute__((used)) static subpicture_t *FUNC_6( cea708_t *VAR_2 )
{
    subpicture_t *VAR_3 = FUNC_5( VAR_2->p_dec );
    if( !VAR_3 )
        return ((void*)0);

    subtext_updater_sys_t *VAR_4 = VAR_3->updater.p_sys;
    substext_updater_region_t *VAR_5 = &VAR_4->region;

    VAR_4->margin_ratio = VAR_0;

    bool VAR_6 = 1;

    for(size_t VAR_7=0; VAR_7<VAR_1; VAR_7++)
    {
        cea708_window_t *VAR_8 = &VAR_2->window[VAR_7];
        if( VAR_8->b_defined && VAR_8->b_visible && FUNC_1( VAR_8 ) )
        {
            if( !VAR_6 )
            {
                substext_updater_region_t *VAR_9 =
                        FUNC_3();
                if( VAR_9 == ((void*)0) )
                    break;
                FUNC_2( VAR_5, VAR_9 );
                VAR_5 = VAR_9;
            }
            VAR_6 = 0;


            FUNC_0( VAR_8, VAR_5 );
        }
    }

    VAR_3->i_start = VAR_2->i_clock;
    VAR_3->i_stop = VAR_2->i_clock + FUNC_4(10);

    VAR_3->b_ephemer = 1;
    VAR_3->b_absolute = 0;
    VAR_3->b_subtitle = 1;

    return VAR_3;
}
