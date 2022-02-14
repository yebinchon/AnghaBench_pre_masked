
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_encoder; } ;
typedef TYPE_2__ transcode_encoder_t ;
typedef int es_format_t ;
struct TYPE_4__ {int const fmt_in; } ;



const es_format_t *FUNC_0( const transcode_encoder_t *VAR_0 )
{
    return &VAR_0->p_encoder->fmt_in;
}
