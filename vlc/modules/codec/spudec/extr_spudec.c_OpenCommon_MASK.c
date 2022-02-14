
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {scalar_t__ i_codec; } ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_7__ {int pf_decode; TYPE_5__ fmt_out; TYPE_6__ fmt_in; int pf_packetize; TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int b_packetizer; int * p_block; scalar_t__ i_spu; scalar_t__ i_spu_size; int b_disabletrans; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_6, bool VAR_7 )
{
    decoder_t *VAR_8 = (decoder_t*)VAR_6;
    decoder_sys_t *VAR_9;

    if( VAR_8->fmt_in.i_codec != VAR_2 )
        return VAR_3;

    VAR_8->p_sys = VAR_9 = FUNC_1( sizeof( decoder_sys_t ) );
    if( !VAR_9 )
        return VAR_4;

    VAR_9->b_packetizer = VAR_7;
    VAR_9->b_disabletrans = FUNC_2( VAR_8, "dvdsub-transparency" );
    VAR_9->i_spu_size = 0;
    VAR_9->i_spu = 0;
    VAR_9->p_block = ((void*)0);

    if( VAR_7 )
    {
        VAR_8->pf_packetize = VAR_1;
        FUNC_0( &VAR_8->fmt_out, &VAR_8->fmt_in );
        VAR_8->fmt_out.i_codec = VAR_2;
    }
    else
    {
        VAR_8->fmt_out.i_codec = VAR_2;
        VAR_8->pf_decode = VAR_0;
    }

    return VAR_5;
}
