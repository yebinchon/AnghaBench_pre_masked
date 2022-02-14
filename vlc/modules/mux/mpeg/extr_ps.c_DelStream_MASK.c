
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_12__ {int i_rate_bound; int i_psm_version; int i_instant_bitrate; int i_video_bound; int i_audio_bound; int stream_id_spu; int stream_id_mpga; int stream_id_a52; int stream_id_dts; int stream_id_lpcm; int stream_id_mpgv; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_13__ {TYPE_1__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_4__ sout_input_t ;
struct TYPE_14__ {int i_stream_id; } ;
typedef TYPE_5__ ps_stream_t ;
struct TYPE_10__ {int i_codec; scalar_t__ i_cat; int i_bitrate; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_1 ;






 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_3( sout_mux_t *VAR_2, sout_input_t *VAR_3 )
{
    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;
    ps_stream_t *VAR_5 =(ps_stream_t*)VAR_3->p_sys;

    FUNC_2( VAR_2, "removing input" );
    switch( VAR_3->p_fmt->i_codec )
    {
        case 129:
            FUNC_0( VAR_4->stream_id_mpgv, 0xe0,
                             VAR_5->i_stream_id );
            break;
        case 131:
            FUNC_0( VAR_4->stream_id_lpcm, 0xa0,
                             VAR_5->i_stream_id&0xff );
            break;
        case 132:
            FUNC_0( VAR_4->stream_id_dts, 0x88,
                             VAR_5->i_stream_id&0xff );
            break;
        case 133:
            FUNC_0( VAR_4->stream_id_a52, 0x80,
                             VAR_5->i_stream_id&0xff );
            break;
        case 130:
            FUNC_0( VAR_4->stream_id_mpga, 0xc0,
                             VAR_5->i_stream_id );
            break;
        case 128:
            FUNC_0( VAR_4->stream_id_spu, 0x20,
                             VAR_5->i_stream_id&0xff );
            break;
        default:

            break;
    }

    if( VAR_3->p_fmt->i_cat == VAR_0 )
    {
        VAR_4->i_audio_bound--;
    }
    else if( VAR_3->p_fmt->i_cat == VAR_1 )
    {
        VAR_4->i_video_bound--;
    }


    VAR_4->i_instant_bitrate -= (VAR_3->p_fmt->i_bitrate + 1000);

    VAR_4->i_rate_bound -= (VAR_3->p_fmt->i_bitrate * 2)/(8 * 50);

    VAR_4->i_psm_version++;

    FUNC_1( VAR_5 );
}
