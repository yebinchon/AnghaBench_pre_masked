
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ i_rate; scalar_t__ i_bytes_per_frame; int i_physical_channels; int i_chan_mode; int i_frame_length; int i_channels; } ;
struct TYPE_22__ {int i_bitrate; TYPE_3__ audio; } ;
struct TYPE_24__ {TYPE_4__ fmt_out; TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_18__ {scalar_t__ i_divider_num; } ;
struct TYPE_23__ {scalar_t__ i_rate; scalar_t__ i_size; int i_samples; int i_bitrate; int i_channels_conf; int i_chan_mode; int i_channels; } ;
struct TYPE_20__ {TYPE_1__* p_block; } ;
struct TYPE_25__ {scalar_t__ i_prev_bytestream_pts; TYPE_10__ end_date; TYPE_5__ frame; TYPE_2__ bytestream; int i_input_size; } ;
typedef TYPE_7__ decoder_sys_t ;
struct TYPE_26__ {scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; int i_nb_samples; } ;
typedef TYPE_8__ block_t ;
struct TYPE_19__ {scalar_t__ i_pts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_8__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (TYPE_10__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_10__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,char*,int ,scalar_t__,int ) ;

__attribute__((used)) static block_t *FUNC_8( decoder_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->frame.i_rate > 0 );

    block_t *VAR_3 = FUNC_1( VAR_2->i_input_size );
    if( VAR_3 == ((void*)0) )
        return ((void*)0);

    if( VAR_1->fmt_out.audio.i_rate != VAR_2->frame.i_rate )
    {
        FUNC_7( VAR_1, "A/52 channels:%d samplerate:%d bitrate:%d",
                 VAR_2->frame.i_channels, VAR_2->frame.i_rate, VAR_2->frame.i_bitrate );
        if( VAR_2->end_date.i_divider_num )
            FUNC_2( &VAR_2->end_date, VAR_2->frame.i_rate, 1 );
        else
            FUNC_5( &VAR_2->end_date, VAR_2->frame.i_rate, 1 );
    }

    if( VAR_2->bytestream.p_block->i_pts != FUNC_3( &VAR_2->end_date ) &&
        VAR_2->bytestream.p_block->i_pts != VAR_0 )
    {


        if( VAR_2->bytestream.p_block->i_pts != VAR_2->i_prev_bytestream_pts )
            FUNC_6( &VAR_2->end_date, VAR_2->bytestream.p_block->i_pts );
        VAR_2->i_prev_bytestream_pts = VAR_2->bytestream.p_block->i_pts;
        VAR_2->bytestream.p_block->i_pts = VAR_0;
    }

    VAR_1->fmt_out.audio.i_rate = VAR_2->frame.i_rate;
    VAR_1->fmt_out.audio.i_channels = VAR_2->frame.i_channels;
    if( VAR_1->fmt_out.audio.i_bytes_per_frame < VAR_2->frame.i_size )
        VAR_1->fmt_out.audio.i_bytes_per_frame = VAR_2->frame.i_size;
    VAR_1->fmt_out.audio.i_frame_length = VAR_2->frame.i_samples;

    VAR_1->fmt_out.audio.i_chan_mode = VAR_2->frame.i_chan_mode;
    VAR_1->fmt_out.audio.i_physical_channels = VAR_2->frame.i_channels_conf;

    VAR_1->fmt_out.i_bitrate = VAR_2->frame.i_bitrate;

    VAR_3->i_nb_samples = VAR_2->frame.i_samples;
    VAR_3->i_pts = VAR_3->i_dts = FUNC_3( &VAR_2->end_date );
    if( VAR_3->i_pts != VAR_0 )
        VAR_3->i_length = FUNC_4( &VAR_2->end_date,
                                            VAR_3->i_nb_samples ) - VAR_3->i_pts;

    return VAR_3;
}
