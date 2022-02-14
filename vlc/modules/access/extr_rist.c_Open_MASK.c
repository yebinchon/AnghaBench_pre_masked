
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {int psz_host; int member_0; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_18__ {int pf_control; int pf_block; int psz_url; TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_19__ {int b_flag_discontinuity; int b_disablenacks; int b_sendnacks; int thread; int * p_fifo; TYPE_10__* flow; void* i_poll_timeout; void* i_max_packet_size; void* nack_type; void* b_sendblindnacks; int b_ismulticast; int lock; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_16__ {void* reorder_buffer; void* retry_interval; void* latency; void* rtp_latency; void* max_retries; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,char*,void*) ;
 int VAR_6 ;
 TYPE_10__* FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 void* FUNC_9 (TYPE_2__*,char*) ;
 void* FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_14 (int *) ;
 TYPE_3__* FUNC_15 (int *,int,int) ;

__attribute__((used)) static int FUNC_16(vlc_object_t *VAR_7)
{
    stream_t *VAR_8 = (stream_t*)VAR_7;
    stream_sys_t *VAR_9 = ((void*)0);
    vlc_url_t VAR_10 = { 0 };

    VAR_9 = FUNC_15( VAR_7, 1, sizeof( *VAR_9 ) );
    if( FUNC_8( VAR_9 == ((void*)0) ) )
        return VAR_3;

    VAR_8->p_sys = VAR_9;

    FUNC_14( &VAR_9->lock );

    if ( FUNC_12( &VAR_10, VAR_8->psz_url ) == -1 )
    {
        FUNC_4( VAR_8, "Failed to parse input URL (%s)",
            VAR_8->psz_url );
        goto failed;
    }


    VAR_9->b_ismulticast = FUNC_3(VAR_10.psz_host);
    VAR_9->flow = FUNC_6(VAR_8, &VAR_10, VAR_9->b_ismulticast);
    FUNC_11( &VAR_10 );
    if (!VAR_9->flow)
    {
        FUNC_4( VAR_8, "Failed to open rist flow (%s)",
            VAR_8->psz_url );
        goto failed;
    }

    VAR_9->b_flag_discontinuity = 0;
    VAR_9->b_disablenacks = FUNC_9( VAR_8, "disable-nacks" );
    VAR_9->b_sendblindnacks = FUNC_9( VAR_8, "mcast-blind-nacks" );
    if (VAR_9->b_sendblindnacks && VAR_9->b_disablenacks == 0)
        VAR_9->b_sendnacks = 1;
    else
        VAR_9->b_sendnacks = 0;
    VAR_9->nack_type = FUNC_10( VAR_8, "nack-type" );
    VAR_9->i_max_packet_size = FUNC_10( VAR_8, "packet-size" );
    VAR_9->i_poll_timeout = FUNC_10( VAR_8, "maximum-jitter" );
    VAR_9->flow->retry_interval = FUNC_10( VAR_8, "retry-interval" );
    VAR_9->flow->max_retries = FUNC_10( VAR_8, "max-retries" );
    VAR_9->flow->latency = FUNC_10( VAR_8, "latency" );
    if (VAR_9->b_disablenacks)
        VAR_9->flow->reorder_buffer = VAR_9->flow->latency;
    else
        VAR_9->flow->reorder_buffer = FUNC_10( VAR_8, "reorder-buffer" );
    FUNC_5(VAR_8, "Setting queue latency to %d ms", VAR_9->flow->latency);


    VAR_9->flow->rtp_latency = FUNC_7(FUNC_1(VAR_9->flow->latency));
    VAR_9->flow->retry_interval = FUNC_7(FUNC_1(VAR_9->flow->retry_interval));
    VAR_9->flow->reorder_buffer = FUNC_7(FUNC_1(VAR_9->flow->reorder_buffer));

    VAR_9->p_fifo = FUNC_2();
    if( FUNC_8(VAR_9->p_fifo == ((void*)0)) )
        goto failed;


    if (FUNC_13(&VAR_9->thread, VAR_6, VAR_8, VAR_5))
    {
        FUNC_4(VAR_8, "Failed to create worker thread.");
        goto failed;
    }

    VAR_8->pf_block = VAR_0;
    VAR_8->pf_control = VAR_1;

    return VAR_4;

failed:
    FUNC_0( VAR_8 );
    return VAR_2;
}
