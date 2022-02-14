
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int lock_hold; int lock; int * p_parent; int rc; int p_vout_dummy; } ;
typedef TYPE_1__ input_resource_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

input_resource_t *FUNC_5( vlc_object_t *VAR_0 )
{
    input_resource_t *VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
    if( !VAR_1 )
        return ((void*)0);

    VAR_1->p_vout_dummy = FUNC_4(VAR_0);
    if( !VAR_1->p_vout_dummy )
    {
        FUNC_1( VAR_1 );
        return ((void*)0);
    }

    FUNC_2( &VAR_1->rc );
    VAR_1->p_parent = VAR_0;
    FUNC_3( &VAR_1->lock );
    FUNC_3( &VAR_1->lock_hold );
    return VAR_1;
}
