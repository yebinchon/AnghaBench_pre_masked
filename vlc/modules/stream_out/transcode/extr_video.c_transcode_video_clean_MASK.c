
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_3__ {scalar_t__ p_spu; scalar_t__ p_spu_blender; int p_final_conv_static; int p_uf_chain; int p_conv_static; int p_conv_nonstatic; int p_f_chain; int decoder_out; int fmt_input_video; int encoder; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8( sout_stream_t *VAR_0,
                                   sout_stream_id_sys_t *VAR_1 )
{
    FUNC_0(VAR_0);


    FUNC_4( VAR_1->encoder );
    FUNC_5( VAR_1->encoder );

    FUNC_7( &VAR_1->fmt_input_video );
    FUNC_1( &VAR_1->decoder_out );


    FUNC_6( &VAR_1->p_f_chain );
    FUNC_6( &VAR_1->p_conv_nonstatic );
    FUNC_6( &VAR_1->p_conv_static );
    FUNC_6( &VAR_1->p_uf_chain );
    FUNC_6( &VAR_1->p_final_conv_static );
    if( VAR_1->p_spu_blender )
        FUNC_2( VAR_1->p_spu_blender );
    if( VAR_1->p_spu )
        FUNC_3( VAR_1->p_spu );
}
