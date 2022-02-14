
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtp_pkt {scalar_t__ fd_in; scalar_t__ fd_nack; scalar_t__ fd_rtcp_m; scalar_t__ i_buffer; struct rtp_pkt* buffer; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int lock; struct rtp_pkt* flow; int * p_fifo; } ;
typedef TYPE_2__ stream_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtp_pkt*) ;
 int FUNC_2 (struct rtp_pkt*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( stream_t *VAR_1 )
{
    stream_sys_t *VAR_2 = VAR_1->p_sys;

    if( FUNC_3(VAR_2->p_fifo != ((void*)0)) )
        FUNC_0( VAR_2->p_fifo );

    if (VAR_2->flow)
    {
        if (VAR_2->flow->fd_in >= 0)
            FUNC_4 (VAR_2->flow->fd_in);
        if (VAR_2->flow->fd_nack >= 0)
            FUNC_4 (VAR_2->flow->fd_nack);
        if (VAR_2->flow->fd_rtcp_m >= 0)
            FUNC_4 (VAR_2->flow->fd_rtcp_m);
        for (int VAR_3=0; VAR_3<VAR_0; VAR_3++) {
            struct rtp_pkt *VAR_4 = &(VAR_2->flow->buffer[VAR_3]);
            if (VAR_4->buffer && VAR_4->buffer->i_buffer > 0) {
                FUNC_1(VAR_4->buffer);
                VAR_4->buffer = ((void*)0);
            }
        }
        FUNC_2(VAR_2->flow->buffer);
        FUNC_2(VAR_2->flow);
    }

    FUNC_5( &VAR_2->lock );
}
