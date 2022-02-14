
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_encoder; } ;
typedef TYPE_2__ transcode_encoder_t ;
struct TYPE_4__ {scalar_t__ p_module; } ;



bool FUNC_0( const transcode_encoder_t *VAR_0 )
{
    return VAR_0->p_encoder && VAR_0->p_encoder->p_module;
}
