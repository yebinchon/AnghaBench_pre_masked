
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ sout_stream_t ;
struct TYPE_18__ {int * psz_sdp_file; scalar_t__ b_export_sap; int rtsp; int psz_vod_session; int * p_vod_media; int lock_es; int es; int i_es; } ;
typedef TYPE_5__ sout_stream_sys_t ;
struct TYPE_15__ {int * fd; int thread; } ;
struct TYPE_14__ {TYPE_6__* fmtp; } ;
struct TYPE_19__ {scalar_t__ sinkc; int lock_sink; int * srtp; TYPE_3__* sinkv; TYPE_2__ listen; scalar_t__ rtsp_id; TYPE_1__ rtp_fmt; int * p_fifo; int thread; } ;
typedef TYPE_6__ sout_stream_id_sys_t ;
struct TYPE_16__ {int rtp_fd; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,TYPE_6__*) ;

__attribute__((used)) static void FUNC_16( sout_stream_t *VAR_0, void *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = VAR_0->p_sys;
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;

    FUNC_13( &VAR_2->lock_es );
    FUNC_3( VAR_2->i_es, VAR_2->es, VAR_3 );
    FUNC_14( &VAR_2->lock_es );

    if( FUNC_6(VAR_3->p_fifo != ((void*)0)) )
    {
        FUNC_10( VAR_3->thread );
        FUNC_11( VAR_3->thread, ((void*)0) );
        FUNC_4( VAR_3->p_fifo );
    }

    FUNC_5( VAR_3->rtp_fmt.fmtp );

    if (VAR_2->p_vod_media != ((void*)0))
        FUNC_15(VAR_2->p_vod_media, VAR_2->psz_vod_session, VAR_3);
    if( VAR_3->rtsp_id )
        FUNC_1( VAR_2->rtsp, VAR_3->rtsp_id );
    if( VAR_3->listen.fd != ((void*)0) )
    {
        FUNC_10( VAR_3->listen.thread );
        FUNC_11( VAR_3->listen.thread, ((void*)0) );
        FUNC_7( VAR_3->listen.fd );
    }


    while( VAR_3->sinkc > 0 )
        FUNC_8( VAR_3, VAR_3->sinkv[0].rtp_fd );





    FUNC_12( &VAR_3->lock_sink );


    if( VAR_2->b_export_sap ) FUNC_2( VAR_0 );
    if( VAR_2->psz_sdp_file != ((void*)0) ) FUNC_0( VAR_0 );

    FUNC_5( VAR_3 );
}
