
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_encoder; } ;
typedef TYPE_3__ transcode_encoder_t ;
typedef int transcode_encoder_config_t ;
struct TYPE_8__ {int i_cat; } ;
struct TYPE_9__ {TYPE_1__ fmt_in; } ;





 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int const*) ;
 int FUNC_1 (TYPE_3__*,int const*) ;
 int FUNC_2 (TYPE_3__*,int const*) ;

int FUNC_3( transcode_encoder_t *VAR_1,
                            const transcode_encoder_config_t *VAR_2 )
{
    switch( VAR_1->p_encoder->fmt_in.i_cat )
    {
        case 129:
            return FUNC_1( VAR_1, VAR_2 );
        case 130:
            return FUNC_0( VAR_1, VAR_2 );
        case 128:
            return FUNC_2( VAR_1, VAR_2 );
        default:
            return VAR_0;
    }
}
