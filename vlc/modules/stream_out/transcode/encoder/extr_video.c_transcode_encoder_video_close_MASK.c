
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_abort; int picture_pool_has_room; int cond; TYPE_3__* p_encoder; int thread; int lock_out; scalar_t__ b_threaded; } ;
typedef TYPE_1__ transcode_encoder_t ;
struct TYPE_5__ {int * p_module; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7( transcode_encoder_t *VAR_0 )
{
    if( VAR_0->b_threaded && !VAR_0->b_abort )
    {
        FUNC_4( &VAR_0->lock_out );
        VAR_0->b_abort = 1;
        FUNC_2( &VAR_0->cond );
        FUNC_5( &VAR_0->lock_out );
        FUNC_3( VAR_0->thread, ((void*)0) );
    }


    FUNC_0( VAR_0->p_encoder, VAR_0->p_encoder->p_module );
    VAR_0->p_encoder->p_module = ((void*)0);

    FUNC_1( &VAR_0->cond );
    FUNC_6( &VAR_0->picture_pool_has_room );
}
