
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int i_codec; } ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {int pf_decode; TYPE_1__ fmt_out; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int f_scale; void* i_height; void* i_width; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_6 )
{
    decoder_t *VAR_7 = (decoder_t*)VAR_6;

    if( VAR_7->fmt_in.i_codec != VAR_2 )
        return VAR_3;

    decoder_sys_t *VAR_8 = FUNC_1( sizeof(decoder_sys_t) );
    if (!VAR_8)
        return VAR_4;
    VAR_7->p_sys = VAR_8;

    VAR_8->i_width = FUNC_3( VAR_6, "svg-width" );
    VAR_8->i_height = FUNC_3( VAR_6, "svg-height" );
    VAR_8->f_scale = FUNC_2( VAR_6, "svg-scale" );



    FUNC_0();



    VAR_7->fmt_out.i_codec = VAR_1;


    VAR_7->pf_decode = VAR_0;

    return VAR_5;
}
