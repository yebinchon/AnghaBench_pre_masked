
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* p_encoder; } ;
typedef TYPE_2__ transcode_encoder_t ;
struct TYPE_9__ {int psz_name; int i_codec; int p_config_chain; } ;
typedef TYPE_3__ transcode_encoder_config_t ;
struct TYPE_7__ {int i_codec; } ;
struct TYPE_10__ {scalar_t__ p_module; TYPE_1__ fmt_out; int p_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,char*,int ,int) ;

int FUNC_1( transcode_encoder_t *VAR_2,
                                const transcode_encoder_config_t *VAR_3 )
{
    VAR_2->p_encoder->p_cfg = VAR_3->p_config_chain;
    VAR_2->p_encoder->fmt_out.i_codec = VAR_3->i_codec;

    VAR_2->p_encoder->p_module = FUNC_0( VAR_2->p_encoder, "encoder",
                                              VAR_3->psz_name, 1 );

    return ( VAR_2->p_encoder->p_module ) ? VAR_1: VAR_0;
}
