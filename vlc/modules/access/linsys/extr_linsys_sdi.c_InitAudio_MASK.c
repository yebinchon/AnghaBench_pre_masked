
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int i_rate; int i_nb_samples; float i_max_samples; int p_buffer; scalar_t__ i_block_number; scalar_t__ i_right_samples; scalar_t__ i_left_samples; int p_es; int i_id; int i_delay; int i_pair; int i_group; } ;
typedef TYPE_2__ sdi_audio_t ;
typedef int int16_t ;
struct TYPE_11__ {int i_channels; int i_rate; int i_bitspersample; int i_blockalign; int i_physical_channels; } ;
struct TYPE_13__ {int i_bitrate; TYPE_1__ audio; int i_id; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_14__ {int out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_15__ {int i_frame_rate_base; int i_frame_rate; } ;
typedef TYPE_5__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,char*,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (float,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_6, sdi_audio_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_6->p_sys;
    es_format_t VAR_9;

    FUNC_2( VAR_6, "starting audio %u/%u rate:%u delay:%d", VAR_7->i_group,
             VAR_7->i_pair, VAR_7->i_rate, VAR_7->i_delay );

    FUNC_0( &VAR_9, VAR_1, VAR_3 );
    VAR_9.i_id = VAR_7->i_id;
    VAR_9.audio.i_channels = 2;
    VAR_9.audio.i_physical_channels = VAR_0;
    VAR_9.audio.i_rate = VAR_7->i_rate;
    VAR_9.audio.i_bitspersample = 16;
    VAR_9.audio.i_blockalign = VAR_9.audio.i_channels *
                                    VAR_9.audio.i_bitspersample / 8;
    VAR_9.i_bitrate = VAR_9.audio.i_channels * VAR_9.audio.i_rate *
                                    VAR_9.audio.i_bitspersample;
    VAR_7->p_es = FUNC_1( VAR_6->out, &VAR_9 );

    VAR_7->i_nb_samples = VAR_7->i_rate * VAR_8->i_frame_rate_base
                                    / VAR_8->i_frame_rate;
    VAR_7->i_max_samples = (float)VAR_7->i_nb_samples *
                                    (1.f + VAR_2);

    VAR_7->p_buffer = FUNC_4( VAR_7->i_max_samples, sizeof(int16_t) * 2 );
    VAR_7->i_left_samples = VAR_7->i_right_samples = 0;
    VAR_7->i_block_number = 0;

    if( FUNC_3( !VAR_7->p_buffer ) )
        return VAR_4;
    return VAR_5;
}
