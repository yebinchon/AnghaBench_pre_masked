
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* p_encoder; } ;
typedef TYPE_2__ transcode_encoder_t ;
struct TYPE_6__ {int i_cat; } ;
struct TYPE_8__ {int * p_module; TYPE_1__ fmt_in; } ;



 int FUNC_0 (TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2( transcode_encoder_t *VAR_0 )
{
    if( !VAR_0->p_encoder->p_module )
        return;

    switch( VAR_0->p_encoder->fmt_in.i_cat )
    {
        case 128:
            FUNC_1( VAR_0 );
            break;
        default:
            FUNC_0( VAR_0->p_encoder, VAR_0->p_encoder->p_module );
            break;
    }

    VAR_0->p_encoder->p_module = ((void*)0);
}
