
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_encoder; } ;
typedef TYPE_2__ transcode_encoder_t ;
typedef int es_format_t ;
struct TYPE_4__ {int fmt_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;

void FUNC_2( transcode_encoder_t *VAR_0, const es_format_t *VAR_1 )
{
    FUNC_0( &VAR_0->p_encoder->fmt_out );
    FUNC_1( &VAR_0->p_encoder->fmt_out, VAR_1 );
}
