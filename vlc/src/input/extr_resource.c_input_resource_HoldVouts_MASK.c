
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {size_t i_vout; int lock_hold; int ** pp_vout; } ;
typedef TYPE_1__ input_resource_t ;


 int ** FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( input_resource_t *VAR_0, vout_thread_t ***VAR_1,
                               size_t *VAR_2 )
{
    vout_thread_t **VAR_3;

    *VAR_2 = 0;
    *VAR_1 = ((void*)0);

    FUNC_1( &VAR_0->lock_hold );

    if( VAR_0->i_vout <= 0 )
        goto exit;

    VAR_3 = FUNC_0( VAR_0->i_vout, sizeof(*VAR_3) );
    if( !VAR_3 )
        goto exit;

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_0->i_vout;

    for( int VAR_4 = 0; VAR_4 < VAR_0->i_vout; VAR_4++ )
    {
        VAR_3[VAR_4] = VAR_0->pp_vout[VAR_4];
        FUNC_3(VAR_3[VAR_4]);
    }

exit:
    FUNC_2( &VAR_0->lock_hold );
}
