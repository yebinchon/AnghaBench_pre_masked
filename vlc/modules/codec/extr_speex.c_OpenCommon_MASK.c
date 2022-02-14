
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {int i_rate; } ;
struct TYPE_12__ {scalar_t__ i_codec; scalar_t__ i_original_fourcc; TYPE_3__ audio; } ;
struct TYPE_10__ {scalar_t__ i_codec; } ;
struct TYPE_13__ {int pf_flush; int pf_decode; TYPE_4__ fmt_in; TYPE_2__ fmt_out; int pf_packetize; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_9__ {scalar_t__ buf_size; } ;
struct TYPE_14__ {int b_packetizer; int b_has_headers; scalar_t__ i_frame_in_packet; int * p_header; int * p_state; int end_date; int rtp_rate; TYPE_1__ bits; } ;
typedef TYPE_6__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_10, bool VAR_11 )
{
    decoder_t *VAR_12 = (decoder_t*)VAR_10;
    decoder_sys_t *VAR_13;

    if( VAR_12->fmt_in.i_codec != VAR_5 )
        return VAR_6;


    if( ( VAR_12->p_sys = VAR_13 = FUNC_2(sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_7;
    VAR_13->bits.buf_size = 0;
    VAR_13->b_packetizer = VAR_11;
    VAR_13->rtp_rate = VAR_12->fmt_in.audio.i_rate;
    VAR_13->b_has_headers = 0;

    FUNC_1( &VAR_13->end_date, VAR_9 );

    if( VAR_11 )
    {
        VAR_12->fmt_out.i_codec = VAR_5;
        VAR_12->pf_packetize = VAR_3;
    }
    else
    {

        VAR_12->fmt_out.i_codec = VAR_4;







        if (VAR_12->fmt_in.i_original_fourcc == FUNC_0('s', 'p', 'x', 'r'))
        {
            FUNC_3( VAR_12, "Using RTP version of Speex decoder @ rate %d.",
            VAR_12->fmt_in.audio.i_rate );
            VAR_12->pf_decode = VAR_1;
        }
        else
        {
            VAR_12->pf_decode = VAR_0;
        }
    }
    VAR_12->pf_flush = VAR_2;

    VAR_13->p_state = ((void*)0);
    VAR_13->p_header = ((void*)0);
    VAR_13->i_frame_in_packet = 0;

    return VAR_8;
}
