
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_a52_header_t ;
struct TYPE_7__ {scalar_t__ i_rate; } ;
struct TYPE_8__ {int i_codec; TYPE_2__ audio; } ;
struct TYPE_6__ {int i_codec; TYPE_2__ audio; } ;
struct TYPE_9__ {int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_3__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_10__ {int b_discontuinity; int bytestream; int frame; int i_prev_bytestream_pts; int end_date; int i_state; } ;
typedef TYPE_5__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_7 )
{
    decoder_t *VAR_8 = (decoder_t*)VAR_7;
    decoder_sys_t *VAR_9;

    switch( VAR_8->fmt_in.i_codec )
    {
    case 128:
    case 129:
        break;
    default:
        return VAR_3;
    }


    if( ( VAR_8->p_sys = VAR_9 =
          (decoder_sys_t *)FUNC_2(sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_4;


    VAR_9->i_state = VAR_2;
    FUNC_1( &VAR_9->end_date, VAR_6 );
    VAR_9->b_discontuinity = 0;
    VAR_9->i_prev_bytestream_pts = VAR_6;
    FUNC_3(&VAR_9->frame, 0, sizeof(vlc_a52_header_t));

    FUNC_0( &VAR_9->bytestream );


    VAR_8->fmt_out.i_codec = VAR_8->fmt_in.i_codec;
    VAR_8->fmt_out.audio = VAR_8->fmt_in.audio;
    VAR_8->fmt_out.audio.i_rate = 0;


    VAR_8->pf_packetize = VAR_0;
    VAR_8->pf_flush = VAR_1;
    VAR_8->pf_get_cc = ((void*)0);
    return VAR_5;
}
