
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i_rate; scalar_t__ i_bytes_per_frame; int i_physical_channels; int i_channels; int i_chan_mode; int i_frame_length; } ;
struct TYPE_12__ {int i_bitrate; TYPE_1__ audio; } ;
struct TYPE_14__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_13__ {scalar_t__ i_rate; scalar_t__ i_frame_size; int i_frame_length; int i_bitrate; int i_physical_channels; int i_chan_mode; } ;
struct TYPE_15__ {int b_date_set; int end_date; TYPE_3__ first; int i_input_size; int i_pts; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_16__ {scalar_t__ i_pts; int i_nb_samples; scalar_t__ i_length; scalar_t__ i_dts; } ;
typedef TYPE_6__ block_t ;


 TYPE_6__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_4__*,char*,scalar_t__,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static block_t *FUNC_7( decoder_t *VAR_0 )
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;

    if( !VAR_1->b_date_set
     || VAR_0->fmt_out.audio.i_rate != VAR_1->first.i_rate )
    {
        FUNC_5( VAR_0, "DTS samplerate:%d bitrate:%d",
                 VAR_1->first.i_rate, VAR_1->first.i_bitrate );

        FUNC_3( &VAR_1->end_date, VAR_1->first.i_rate, 1 );
        FUNC_4( &VAR_1->end_date, VAR_1->i_pts );
        VAR_1->b_date_set = 1;
    }

    VAR_0->fmt_out.audio.i_rate = VAR_1->first.i_rate;
    if( VAR_0->fmt_out.audio.i_bytes_per_frame < VAR_1->first.i_frame_size )
        VAR_0->fmt_out.audio.i_bytes_per_frame = VAR_1->first.i_frame_size;
    VAR_0->fmt_out.audio.i_frame_length = VAR_1->first.i_frame_length;

    VAR_0->fmt_out.audio.i_chan_mode = VAR_1->first.i_chan_mode;
    VAR_0->fmt_out.audio.i_physical_channels = VAR_1->first.i_physical_channels;
    VAR_0->fmt_out.audio.i_channels =
        FUNC_6( VAR_0->fmt_out.audio.i_physical_channels );

    VAR_0->fmt_out.i_bitrate = VAR_1->first.i_bitrate;

    block_t *VAR_2 = FUNC_0( VAR_1->i_input_size );
    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    VAR_2->i_nb_samples = VAR_1->first.i_frame_length;
    VAR_2->i_pts = VAR_2->i_dts = FUNC_1( &VAR_1->end_date );
    VAR_2->i_length =
        FUNC_2( &VAR_1->end_date, VAR_2->i_nb_samples ) - VAR_2->i_pts;
    return VAR_2;
}
