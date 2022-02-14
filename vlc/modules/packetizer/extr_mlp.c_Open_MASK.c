
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {scalar_t__ i_rate; } ;
struct TYPE_9__ {scalar_t__ i_codec; TYPE_2__ audio; } ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_10__ {int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_3__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_11__ {int b_mlp; int b_discontinuity; int bytestream; int end_date; int i_state; } ;
typedef TYPE_5__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 TYPE_5__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_8 )
{
    decoder_t *VAR_9 = (decoder_t*)VAR_8;
    decoder_sys_t *VAR_10;

    if( VAR_9->fmt_in.i_codec != VAR_3 &&
        VAR_9->fmt_in.i_codec != VAR_4 )
        return VAR_5;


    VAR_9->p_sys = VAR_10 = FUNC_2( sizeof(*VAR_10) );
    if( !VAR_10 )
        return VAR_6;


    VAR_10->i_state = VAR_2;
    FUNC_1( &VAR_10->end_date, 1, 1 );

    FUNC_0( &VAR_10->bytestream );
    VAR_10->b_mlp = 0;
    VAR_10->b_discontinuity = 0;


    VAR_9->fmt_out.i_codec = VAR_9->fmt_in.i_codec;
    VAR_9->fmt_out.audio.i_rate = 0;


    VAR_9->pf_packetize = VAR_1;
    VAR_9->pf_flush = VAR_0;
    VAR_9->pf_get_cc = ((void*)0);
    return VAR_7;
}
