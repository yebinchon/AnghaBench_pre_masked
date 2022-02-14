
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int inner_align; int * p_segments; int * p_region_style; int * p_next; } ;
struct TYPE_15__ {TYPE_4__ updt; } ;
typedef TYPE_2__ ttml_region_t ;
struct TYPE_16__ {double margin_ratio; TYPE_4__ region; } ;
typedef TYPE_3__ subtext_updater_sys_t ;
typedef TYPE_4__ substext_updater_region_t ;
struct TYPE_14__ {TYPE_3__* p_sys; } ;
struct TYPE_18__ {TYPE_1__ updater; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_19__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_20__ {int i_align; } ;
typedef TYPE_7__ decoder_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_1, subpicture_t *VAR_2,
                                         ttml_region_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_1->p_sys;
    subtext_updater_sys_t *VAR_5 = VAR_2->updater.p_sys;
    substext_updater_region_t *VAR_6 = ((void*)0);


    for( ttml_region_t *VAR_7 = VAR_3;
         VAR_7; VAR_7 = (ttml_region_t *) VAR_7->updt.p_next )
    {
        if( VAR_6 == ((void*)0) )
        {
            VAR_6 = &VAR_5->region;
        }
        else
        {
            VAR_6 = FUNC_1();
            if( VAR_6 == ((void*)0) )
                break;
            FUNC_0( &VAR_5->region, VAR_6 );
        }


        if( VAR_4->i_align & VAR_0 )
            VAR_5->region.inner_align = VAR_4->i_align;

        VAR_5->margin_ratio = 0.0;


        *VAR_6 = VAR_7->updt;
        VAR_6->p_next = ((void*)0);
        VAR_7->updt.p_region_style = ((void*)0);
        VAR_7->updt.p_segments = ((void*)0);
    }
}
