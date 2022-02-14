
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


typedef int int64_t ;
struct TYPE_25__ {int out; int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_24__ {int i_bytes; int i_frames; int i_frame_samples; } ;
struct TYPE_22__ {scalar_t__ b_use_word; } ;
struct TYPE_26__ {int b_start; int b_initial_sync_failed; int i_bitrate_avg; int b_estimate_bitrate; TYPE_9__* p_packetizer; TYPE_3__ xing; scalar_t__ p_es; int b_big_endian; TYPE_1__ codec; int i_packet_size; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_27__ {scalar_t__ i_buffer; struct TYPE_27__* p_next; int i_dts; int i_pts; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_23__ {int i_rate; } ;
struct TYPE_21__ {int b_packetized; int i_bitrate; TYPE_2__ audio; } ;
struct TYPE_28__ {TYPE_12__ fmt_out; TYPE_6__* (* pf_packetize ) (TYPE_9__*,TYPE_6__**) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_6__***,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_12__*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 TYPE_6__* FUNC_7 (TYPE_9__*,TYPE_6__**) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 TYPE_6__* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static bool FUNC_12( demux_t *VAR_2, block_t **VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    block_t *VAR_5, *VAR_6;

    *VAR_3 = ((void*)0);

    if( VAR_4->codec.b_use_word )
    {

        int64_t VAR_7 = FUNC_11( VAR_2->s );
        if( (VAR_7 & 1) && FUNC_10( VAR_2->s, ((void*)0), 1 ) != 1 )
            return 1;
    }

    VAR_5 = FUNC_9( VAR_2->s, VAR_4->i_packet_size );
    bool VAR_8 = VAR_5 == ((void*)0);

    if( VAR_5 )
    {
        if( VAR_4->codec.b_use_word && !VAR_4->b_big_endian && VAR_5->i_buffer > 0 )
        {

            block_t *VAR_9 = VAR_5;
            VAR_5 = FUNC_1( VAR_5->i_buffer );
            if( VAR_5 )
            {
                FUNC_3( VAR_5, VAR_9 );
                FUNC_8( VAR_9->p_buffer, VAR_5->p_buffer, VAR_9->i_buffer );
            }
            FUNC_4( VAR_9 );
        }

        if( VAR_5 )
        {
            VAR_5->i_pts =
            VAR_5->i_dts = (VAR_4->b_start || VAR_4->b_initial_sync_failed) ?
                                 VAR_0 : VAR_1;
        }
    }
    VAR_4->b_initial_sync_failed = VAR_4->b_start;

    while( ( VAR_6 = VAR_4->p_packetizer->pf_packetize( VAR_4->p_packetizer, VAR_5 ? &VAR_5 : ((void*)0) ) ) )
    {
        VAR_4->b_initial_sync_failed = 0;
        while( VAR_6 )
        {
            if( !VAR_4->p_es )
            {
                VAR_4->p_packetizer->fmt_out.b_packetized = 1;
                VAR_4->p_es = FUNC_5( VAR_2->out,
                                          &VAR_4->p_packetizer->fmt_out);



                if( VAR_4->xing.i_bytes && VAR_4->xing.i_frames &&
                    VAR_4->xing.i_frame_samples )
                {
                    VAR_4->i_bitrate_avg = VAR_4->xing.i_bytes * FUNC_0(8) *
                        VAR_4->p_packetizer->fmt_out.audio.i_rate /
                        VAR_4->xing.i_frames / VAR_4->xing.i_frame_samples;

                    if( VAR_4->i_bitrate_avg > 0 )
                        VAR_4->b_estimate_bitrate = 0;
                }

                if( VAR_4->b_estimate_bitrate )
                    VAR_4->i_bitrate_avg = VAR_4->p_packetizer->fmt_out.i_bitrate;
            }

            block_t *VAR_10 = VAR_6->p_next;
            VAR_6->p_next = ((void*)0);

            FUNC_2( &VAR_3, VAR_6 );

            VAR_6 = VAR_10;
        }
    }

    if( VAR_4->b_initial_sync_failed )
        FUNC_6( VAR_2, "did not sync on first block" );
    VAR_4->b_start = 0;

    return VAR_8;
}
