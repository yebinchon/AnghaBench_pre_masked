
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_vout_dummy; int lock; int lock_hold; int * p_aout; int rc; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7( input_resource_t *VAR_0 )
{
    if( !FUNC_4( &VAR_0->rc ) )
        return;

    FUNC_0( VAR_0 );
    FUNC_1( VAR_0 );
    if( VAR_0->p_aout != ((void*)0) )
        FUNC_2( VAR_0->p_aout );

    FUNC_5( &VAR_0->lock_hold );
    FUNC_5( &VAR_0->lock );
    FUNC_6( VAR_0->p_vout_dummy );
    FUNC_3( VAR_0 );
}
