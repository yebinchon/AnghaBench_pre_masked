
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock_out; int cond; int pp_pics; int picture_pool_has_room; TYPE_3__* p_encoder; int b_threaded; } ;
typedef TYPE_1__ transcode_encoder_t ;
typedef int picture_t ;
typedef int block_t ;
struct TYPE_5__ {int * (* pf_encode_video ) (TYPE_3__*,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

block_t * FUNC_7( transcode_encoder_t *VAR_0, picture_t *VAR_1 )
{
    if( !VAR_0->b_threaded )
    {
        return VAR_0->p_encoder->pf_encode_video( VAR_0->p_encoder, VAR_1 );
    }
    else
    {
        FUNC_6( &VAR_0->picture_pool_has_room );
        FUNC_4( &VAR_0->lock_out );
        FUNC_0( VAR_1 );
        FUNC_1( VAR_0->pp_pics, VAR_1 );
        FUNC_3( &VAR_0->cond );
        FUNC_5( &VAR_0->lock_out );
        return ((void*)0);
    }
}
