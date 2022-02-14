
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock_out; int * p_buffers; } ;
typedef TYPE_1__ transcode_encoder_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

block_t * FUNC_2( transcode_encoder_t *VAR_0 )
{
    FUNC_0( &VAR_0->lock_out );
    block_t *VAR_1 = VAR_0->p_buffers;
    VAR_0->p_buffers = ((void*)0);
    FUNC_1( &VAR_0->lock_out );
    return VAR_1;
}
