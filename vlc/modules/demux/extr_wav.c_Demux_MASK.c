
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ const int64_t ;
struct TYPE_12__ {int out; int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_10__ {int i_channels; } ;
struct TYPE_11__ {int i_codec; TYPE_1__ audio; } ;
struct TYPE_13__ {unsigned int i_frame_size; scalar_t__ i_data_size; scalar_t__ i_data_pos; int i_frame_samples; int pts; int p_es; TYPE_2__ fmt; int pi_chan_table; scalar_t__ i_chans_to_reorder; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {int i_buffer; int p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 TYPE_5__* FUNC_6 (int ,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    block_t *VAR_4;
    const int64_t VAR_5 = FUNC_7( VAR_2->s );
    unsigned int VAR_6 = VAR_3->i_frame_size;

    if( VAR_3->i_data_size > 0 )
    {
        int64_t VAR_7 = VAR_3->i_data_pos + VAR_3->i_data_size;
        if ( VAR_5 >= VAR_7 )
            return VAR_0;


        if ( VAR_7 < VAR_5 + VAR_6 )
            VAR_6 = VAR_7 - VAR_5;
    }

    if( ( VAR_4 = FUNC_6( VAR_2->s, VAR_6 ) ) == ((void*)0) )
    {
        FUNC_5( VAR_2, "cannot read data" );
        return VAR_0;
    }

    VAR_4->i_dts =
    VAR_4->i_pts = FUNC_1( &VAR_3->pts );


    FUNC_4( VAR_2->out, VAR_4->i_pts );


    if( VAR_3->i_chans_to_reorder )
        FUNC_0( VAR_4->p_buffer, VAR_4->i_buffer,
                             VAR_3->fmt.audio.i_channels,
                             VAR_3->pi_chan_table, VAR_3->fmt.i_codec );

    FUNC_3( VAR_2->out, VAR_3->p_es, VAR_4 );

    FUNC_2( &VAR_3->pts, VAR_3->i_frame_samples );

    return VAR_1;
}
