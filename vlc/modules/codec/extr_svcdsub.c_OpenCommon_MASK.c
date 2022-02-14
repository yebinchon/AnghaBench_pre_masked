
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
struct TYPE_8__ {int pf_decode; int pf_packetize; TYPE_1__ fmt_out; TYPE_4__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int i_image; int * p_spu; int i_state; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_7, bool VAR_8 )
{
    decoder_t *VAR_9 = (decoder_t*)VAR_7;
    decoder_sys_t *VAR_10;

    if( VAR_9->fmt_in.i_codec != VAR_3 )
        return VAR_4;

    VAR_9->p_sys = VAR_10 = FUNC_0( 1, sizeof( decoder_sys_t ) );
    if( VAR_10 == ((void*)0) )
        return VAR_5;


    VAR_10->i_image = -1;

    VAR_10->i_state = VAR_2;
    VAR_10->p_spu = ((void*)0);

    VAR_9->fmt_out.i_codec = VAR_3;

    if( VAR_8 )
        VAR_9->pf_packetize = VAR_1;
    else
        VAR_9->pf_decode = VAR_0;

    return VAR_6;
}
