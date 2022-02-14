
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_vout; int * p_vout_free; int lock_hold; int ** pp_vout; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (scalar_t__,int **,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( input_resource_t *VAR_0 )
{
    FUNC_1( VAR_0->i_vout == 0 || VAR_0->p_vout_free == VAR_0->pp_vout[0] );

    if( VAR_0->p_vout_free )
    {
        FUNC_2(&VAR_0->lock_hold);
        FUNC_0(VAR_0->i_vout, VAR_0->pp_vout, VAR_0->p_vout_free);
        FUNC_3(&VAR_0->lock_hold);

        FUNC_4( VAR_0->p_vout_free );
        VAR_0->p_vout_free = ((void*)0);
    }
}
