
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_encoder; } ;
typedef TYPE_3__ transcode_encoder_t ;
typedef int block_t ;
struct TYPE_8__ {int i_cat; } ;
struct TYPE_9__ {TYPE_1__ fmt_in; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int **) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int **) ;

int FUNC_3( transcode_encoder_t *VAR_2, block_t **VAR_3 )
{
    if( !FUNC_1( VAR_2 ) )
        return VAR_0;

    switch( VAR_2->p_encoder->fmt_in.i_cat )
    {
        case 128:
            return FUNC_2( VAR_2, VAR_3 );
        case 130:
            return FUNC_0( VAR_2, VAR_3 );
        case 129:
            return VAR_1;
        default:
            return VAR_0;
    }
}
