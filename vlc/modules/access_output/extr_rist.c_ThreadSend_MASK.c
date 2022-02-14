
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct rtp_pkt {TYPE_3__* buffer; void* rtp_ts; } ;
struct rist_flow {int reset; int wi; int last_out; int bytes_count; int packets_count; void* hi_timestamp; struct rtp_pkt* buffer; int fd_out; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_10__ {scalar_t__ i_last_stat; scalar_t__ i_retransmit_packets; scalar_t__ i_total_packets; int lock; int fd_lock; int p_fifo; struct rist_flow* flow; scalar_t__ i_ticks_caching; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_11__ {scalar_t__ i_buffer; int p_buffer; scalar_t__ i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static void* FUNC_16( void *VAR_1 )
{
    sout_access_out_t *VAR_2 = VAR_1;
    sout_access_out_sys_t *VAR_3 = VAR_2->p_sys;
    vlc_tick_t VAR_4 = VAR_3->i_ticks_caching;
    struct rist_flow *VAR_5 = VAR_3->flow;

    for (;;)
    {
        ssize_t VAR_6 = 0;
        uint16_t VAR_7 = 0;
        uint32_t VAR_8 = 0;
        block_t *VAR_9 = FUNC_1( VAR_3->p_fifo );

        FUNC_3( VAR_9 );
        FUNC_15 (VAR_9->i_dts + VAR_4);
        FUNC_9();

        VAR_6 = VAR_9->i_buffer;
        int VAR_10 = FUNC_13();

        VAR_7 = FUNC_7(VAR_9->p_buffer);
        VAR_8 = FUNC_8(VAR_9->p_buffer);

        FUNC_10( &VAR_3->fd_lock );
        if (FUNC_6(VAR_5->fd_out, VAR_9->p_buffer, VAR_6) != VAR_6) {
            FUNC_4(VAR_2, "Error sending data packet after 2 tries ...");
        }

        FUNC_11( &VAR_3->fd_lock );


        FUNC_10( &VAR_3->lock );

        struct rtp_pkt *VAR_11;
        VAR_11 = &(VAR_5->buffer[VAR_7]);
        if (VAR_11->buffer)
        {
            FUNC_2(VAR_11->buffer);
            VAR_11->buffer = ((void*)0);
        }
        VAR_11->rtp_ts = VAR_8;
        VAR_11->buffer = VAR_9;

        if (VAR_5->reset == 1)
        {
            FUNC_5(VAR_2, "Traffic detected");

            VAR_5->reset = 0;
        }
        VAR_5->wi = VAR_7;
        VAR_5->hi_timestamp = VAR_8;

        VAR_5->packets_count++;
        VAR_5->bytes_count += VAR_6;
        VAR_5->last_out = VAR_7;
        FUNC_11( &VAR_3->lock );


        uint64_t VAR_12 = FUNC_14();
        uint64_t VAR_13 = (VAR_12 - VAR_3->i_last_stat);
        if ( VAR_13 > FUNC_0(VAR_0) )
        {
            if (VAR_3->i_retransmit_packets > 0)
            {
                float VAR_14 = 100;
                if (VAR_3->i_total_packets > 0)
                    VAR_14 = (float)100 - (float)100*(float)(VAR_3->i_retransmit_packets)
                        /(float)VAR_3->i_total_packets;
                FUNC_5(VAR_2, "STATS: Total %u, Retransmitted %u, Link Quality %.2f%%",
                    VAR_3->i_total_packets, VAR_3->i_retransmit_packets, VAR_14);
            }
            VAR_3->i_last_stat = VAR_12;
            VAR_3->i_retransmit_packets = 0;
            VAR_3->i_total_packets = 0;
        }
        VAR_3->i_total_packets++;

        FUNC_12 (VAR_10);
    }
    return ((void*)0);
}
