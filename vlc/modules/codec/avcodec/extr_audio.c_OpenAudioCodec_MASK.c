
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int i_rate; int i_bitspersample; int i_blockalign; int i_channels; } ;
struct TYPE_13__ {int i_bitrate; TYPE_1__ audio; int b_packetized; } ;
struct TYPE_14__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_15__ {TYPE_6__* p_codec; TYPE_5__* p_context; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_17__ {scalar_t__ id; int name; } ;
struct TYPE_16__ {scalar_t__ extradata_size; int sample_rate; int bit_rate; int bits_per_coded_sample; int block_align; int channels; } ;
typedef TYPE_5__ AVCodecContext ;
typedef TYPE_6__ AVCodec ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*,TYPE_6__ const*) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static int FUNC_2( decoder_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_3->p_sys;
    AVCodecContext *VAR_5 = VAR_4->p_context;
    const AVCodec *VAR_6 = VAR_4->p_codec;

    if( VAR_5->extradata_size <= 0 )
    {
        if( VAR_6->id == VAR_2 ||
            ( VAR_6->id == VAR_0 &&
              !VAR_3->fmt_in.b_packetized ) )
        {
            FUNC_1( VAR_3, "waiting for extra data for codec %s",
                      VAR_6->name );
            return 1;
        }
    }

    VAR_5->sample_rate = VAR_3->fmt_in.audio.i_rate;
    VAR_5->channels = VAR_3->fmt_in.audio.i_channels;
    VAR_5->block_align = VAR_3->fmt_in.audio.i_blockalign;
    VAR_5->bit_rate = VAR_3->fmt_in.i_bitrate;
    VAR_5->bits_per_coded_sample = VAR_3->fmt_in.audio.i_bitspersample;

    if( VAR_6->id == VAR_1 &&
        VAR_5->bit_rate > 0 &&
        VAR_5->sample_rate > 0)
        VAR_5->bits_per_coded_sample = VAR_5->bit_rate / VAR_5->sample_rate;

    return FUNC_0( VAR_3, VAR_5, VAR_6 );
}
