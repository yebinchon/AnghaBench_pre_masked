
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {scalar_t__ i_codec; scalar_t__ i_extra; } ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_12__ {TYPE_2__ fmt_in; TYPE_1__ fmt_out; int pf_decode; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_13__ {int i_align; int pp_images; int i_images; int pp_ssa_styles; int i_ssa_styles; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_5 )
{
    decoder_t *VAR_6 = (decoder_t*)VAR_5;
    decoder_sys_t *VAR_7;

    if( VAR_6->fmt_in.i_codec != VAR_1 )
        return VAR_2;


    if( ( VAR_6->p_sys = VAR_7 = FUNC_3(1, sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_3;

    VAR_6->pf_decode = VAR_0;
    VAR_6->fmt_out.i_codec = 0;


    FUNC_2( VAR_7->i_ssa_styles, VAR_7->pp_ssa_styles );
    FUNC_2( VAR_7->i_images, VAR_7->pp_images );



    VAR_7->i_align = FUNC_5( VAR_6, "subsdec-align" );

    FUNC_0( VAR_6 );

    if( FUNC_4( VAR_6, "subsdec-formatted" ) )
    {
        if( VAR_6->fmt_in.i_extra > 0 )
            FUNC_1( VAR_6 );
    }

    return VAR_4;
}
