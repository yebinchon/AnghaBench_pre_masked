
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* p_encoder; } ;
typedef TYPE_1__ transcode_encoder_t ;
typedef int subpicture_t ;
typedef int block_t ;
struct TYPE_5__ {int * (* pf_encode_sub ) (TYPE_3__*,int *) ;} ;


 int * FUNC_0 (TYPE_3__*,int *) ;

block_t * FUNC_1( transcode_encoder_t *VAR_0, subpicture_t *VAR_1 )
{
    return VAR_0->p_encoder->pf_encode_sub( VAR_0->p_encoder, VAR_1 );
}
