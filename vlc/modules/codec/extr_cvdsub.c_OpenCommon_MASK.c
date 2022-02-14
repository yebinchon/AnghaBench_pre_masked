
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {scalar_t__ i_codec; } ;
struct TYPE_7__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {TYPE_1__ fmt_out; int pf_decode; int pf_packetize; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int b_packetizer; int * p_spu; int i_state; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_8, bool VAR_9 )
{
    decoder_t *VAR_10 = (decoder_t*)VAR_8;
    decoder_sys_t *VAR_11;

    if( VAR_10->fmt_in.i_codec != VAR_3 )
        return VAR_5;

    VAR_10->p_sys = VAR_11 = FUNC_0( sizeof( decoder_sys_t ) );
    if( !VAR_11 )
        return VAR_6;

    VAR_11->b_packetizer = VAR_9;

    VAR_11->i_state = VAR_2;
    VAR_11->p_spu = ((void*)0);

    if( VAR_9 )
    {
        VAR_10->pf_packetize = VAR_1;
        VAR_10->fmt_out.i_codec = VAR_3;
    }
    else
    {
        VAR_10->pf_decode = VAR_0;
        VAR_10->fmt_out.i_codec = VAR_4;
    }

    return VAR_7;
}
