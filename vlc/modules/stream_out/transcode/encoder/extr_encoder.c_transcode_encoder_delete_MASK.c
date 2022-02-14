
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_encoder; int lock_out; int pp_pics; int p_buffers; } ;
typedef TYPE_1__ transcode_encoder_t ;
struct TYPE_8__ {scalar_t__ i_cat; } ;
struct TYPE_7__ {TYPE_5__ fmt_out; TYPE_5__ fmt_in; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6( transcode_encoder_t *VAR_1 )
{
    if( VAR_1->p_encoder )
    {
        if( VAR_1->p_encoder->fmt_in.i_cat == VAR_0 )
        {
            FUNC_0( VAR_1->p_buffers );
            FUNC_3( VAR_1->pp_pics );
            FUNC_4( &VAR_1->lock_out );
        }
        FUNC_1( &VAR_1->p_encoder->fmt_in );
        FUNC_1( &VAR_1->p_encoder->fmt_out );
        FUNC_5(VAR_1->p_encoder);
    }
    FUNC_2( VAR_1 );
}
