
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_rate; int i_bitspersample; } ;
struct TYPE_9__ {TYPE_1__ audio; scalar_t__ i_codec; } ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_11__ {int pf_flush; int pf_decode; TYPE_2__ fmt_out; int pf_packetize; TYPE_5__* p_sys; TYPE_3__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_12__ {int end_date; } ;
typedef TYPE_5__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int,int) ;
 TYPE_5__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( decoder_t *VAR_7, bool VAR_8 )
{
    decoder_sys_t *VAR_9;

    if( VAR_7->fmt_in.i_codec != VAR_3 )
        return VAR_5;


    VAR_7->p_sys = VAR_9 = FUNC_1( sizeof(decoder_sys_t) );

    if( FUNC_2( !VAR_9 ) )
        return VAR_5;


    FUNC_0( &VAR_9->end_date, 48000, 1 );


    VAR_7->fmt_out.audio.i_rate = 48000;


    if( VAR_8 )
    {
        VAR_7->fmt_out.i_codec = VAR_3;

        VAR_7->pf_packetize = VAR_2;
    }
    else
    {
        VAR_7->fmt_out.i_codec = VAR_4;
        VAR_7->fmt_out.audio.i_bitspersample = 16;

        VAR_7->pf_decode = VAR_0;
    }
    VAR_7->pf_flush = VAR_1;
    return VAR_6;
}
