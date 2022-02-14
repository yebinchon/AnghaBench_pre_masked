
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {scalar_t__ i_codec; int i_cat; } ;
struct TYPE_4__ {TYPE_1__ fmt_out; int pf_encode_sub; int * p_sys; } ;
typedef TYPE_2__ encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0( vlc_object_t *VAR_5 )
{
    encoder_t *VAR_6 = (encoder_t *)VAR_5;

    if( VAR_6->fmt_out.i_codec != VAR_2 )
        return VAR_3;

    VAR_6->p_sys = ((void*)0);

    VAR_6->pf_encode_sub = VAR_0;
    VAR_6->fmt_out.i_cat = VAR_1;
    return VAR_4;
}
