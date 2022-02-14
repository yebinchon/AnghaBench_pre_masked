
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {scalar_t__ i_vout; int lock_hold; int ** pp_vout; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

vout_thread_t *FUNC_3( input_resource_t *VAR_0 )
{
    FUNC_0( &VAR_0->lock_hold );

    vout_thread_t *VAR_1 = VAR_0->i_vout > 0 ? VAR_0->pp_vout[0] : ((void*)0);
    if( VAR_1 )
        FUNC_2(VAR_1);

    FUNC_1( &VAR_0->lock_hold );

    return VAR_1;
}
