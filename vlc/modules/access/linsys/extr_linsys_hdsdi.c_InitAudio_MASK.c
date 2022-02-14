
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int i_channel; int p_es; int i_id; int i_delay; } ;
typedef TYPE_2__ hdsdi_audio_t ;
struct TYPE_10__ {int i_channels; int i_rate; int i_bitspersample; int i_blockalign; int i_physical_channels; } ;
struct TYPE_12__ {int i_bitrate; TYPE_1__ audio; int i_id; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_13__ {int out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_14__ {int i_sample_rate; int i_ablock_size; int i_frame_rate_base; int i_frame_rate; int i_aincr; int i_next_adate; TYPE_2__* p_audios; } ;
typedef TYPE_5__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,char*,int,int,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    es_format_t VAR_8;

    for ( int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
    {
        hdsdi_audio_t *VAR_10 = &VAR_7->p_audios[VAR_9];

        if ( VAR_10->i_channel == -1 ) continue;

        FUNC_2( VAR_6, "starting audio %u/%u rate:%u delay:%d",
                 1 + VAR_10->i_channel / 2, 1 + (VAR_10->i_channel % 2),
                 VAR_7->i_sample_rate, VAR_10->i_delay );

        FUNC_0( &VAR_8, VAR_1, VAR_4 );
        VAR_8.i_id = VAR_10->i_id;
        VAR_8.audio.i_channels = 2;
        VAR_8.audio.i_physical_channels = VAR_0;
        VAR_8.audio.i_rate = VAR_7->i_sample_rate;
        VAR_8.audio.i_bitspersample = 16;
        VAR_8.audio.i_blockalign = VAR_8.audio.i_channels *
            VAR_8.audio.i_bitspersample / 8;
        VAR_8.i_bitrate = VAR_8.audio.i_channels * VAR_8.audio.i_rate *
            VAR_8.audio.i_bitspersample;
        VAR_10->p_es = FUNC_1( VAR_6->out, &VAR_8 );
    }

    VAR_7->i_next_adate = VAR_3;
    VAR_7->i_ablock_size = VAR_7->i_sample_rate * 4 * VAR_7->i_frame_rate_base / VAR_7->i_frame_rate;
    VAR_7->i_aincr = FUNC_3(VAR_7->i_ablock_size, VAR_7->i_sample_rate * 4);

    return VAR_5;
}
