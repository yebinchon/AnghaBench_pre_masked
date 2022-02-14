
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int i_features; int i_style_flags; } ;
typedef TYPE_3__ text_style_t ;
struct TYPE_8__ {int i_codec; } ;
struct TYPE_9__ {scalar_t__ i_codec; } ;
struct TYPE_11__ {TYPE_1__ fmt_out; TYPE_2__ fmt_in; TYPE_3__* p_sys; int pf_decode; } ;
typedef TYPE_4__ decoder_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_10 )
{
    decoder_t *VAR_11 = (decoder_t *) VAR_10;

    if( VAR_11->fmt_in.i_codec != VAR_6 &&
        VAR_11->fmt_in.i_codec != VAR_4 )
        return VAR_7;

    VAR_11->pf_decode = VAR_0;

    VAR_11->p_sys = FUNC_2( VAR_3 );
    if( !VAR_11->p_sys )
        return VAR_8;

    text_style_t *VAR_12 = VAR_11->p_sys;
    VAR_12->i_style_flags |= VAR_1;
    VAR_12->i_features |= VAR_2;

    if( VAR_11->fmt_in.i_codec == VAR_6 )
        FUNC_1( VAR_11 );
    else
        FUNC_0( VAR_11 );

    VAR_11->fmt_out.i_codec = VAR_5;

    return VAR_9;
}
