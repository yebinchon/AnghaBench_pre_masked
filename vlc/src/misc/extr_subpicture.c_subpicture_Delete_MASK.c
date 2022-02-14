
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* pf_destroy ) (TYPE_2__*) ;} ;
struct TYPE_7__ {struct TYPE_7__* p_private; int dst; int src; TYPE_1__ updater; int * p_region; } ;
typedef TYPE_2__ subpicture_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( subpicture_t *VAR_0 )
{
    FUNC_2( VAR_0->p_region );
    VAR_0->p_region = ((void*)0);

    if( VAR_0->updater.pf_destroy )
        VAR_0->updater.pf_destroy( VAR_0 );

    if( VAR_0->p_private )
    {
        FUNC_3( &VAR_0->p_private->src );
        FUNC_3( &VAR_0->p_private->dst );
    }

    FUNC_0( VAR_0->p_private );
    FUNC_0( VAR_0 );
}
