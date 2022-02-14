
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * p_sys; int * pf_destroy; int * pf_update; int * pf_validate; } ;
typedef TYPE_1__ subpicture_updater_t ;
struct TYPE_10__ {int b_absolute; int b_fade; int b_subtitle; int i_alpha; TYPE_1__ updater; TYPE_3__* p_private; int * p_region; scalar_t__ i_order; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_11__ {int dst; int src; } ;
typedef TYPE_3__ subpicture_private_t ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

subpicture_t *FUNC_4( const subpicture_updater_t *VAR_0 )
{
    subpicture_t *VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
    if( !VAR_1 )
        return ((void*)0);

    VAR_1->i_order = 0;
    VAR_1->b_absolute = 1;
    VAR_1->b_fade = 0;
    VAR_1->b_subtitle = 0;
    VAR_1->i_alpha = 0xFF;
    VAR_1->p_region = ((void*)0);

    if( VAR_0 )
    {
        subpicture_private_t *VAR_2 = FUNC_2( sizeof(*VAR_2) );
        if( !VAR_2 )
        {
            FUNC_1( VAR_1 );
            return ((void*)0);
        }
        FUNC_3( &VAR_2->src, 0 );
        FUNC_3( &VAR_2->dst, 0 );

        VAR_1->updater = *VAR_0;
        VAR_1->p_private = VAR_2;
    }
    else
    {
        VAR_1->p_private = ((void*)0);

        VAR_1->updater.pf_validate = ((void*)0);
        VAR_1->updater.pf_update = ((void*)0);
        VAR_1->updater.pf_destroy = ((void*)0);
        VAR_1->updater.p_sys = ((void*)0);
    }
    return VAR_1;
}
