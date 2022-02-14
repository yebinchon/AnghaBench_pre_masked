
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int lock_sink; int i_seq_sent_next; int sinkv; int sinkc; int p_stream; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;
struct TYPE_6__ {int member_0; int * rtcp; int * member_1; } ;
typedef TYPE_2__ rtp_sink_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int ,TYPE_2__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6( sout_stream_id_sys_t *VAR_2, int VAR_3, bool VAR_4, uint16_t *VAR_5 )
{
    rtp_sink_t VAR_6 = { VAR_3, ((void*)0) };
    VAR_6.rtcp = FUNC_0( FUNC_2( VAR_2->p_stream ), VAR_3, VAR_0,
                          VAR_4 );
    if( VAR_6.rtcp == ((void*)0) )
        FUNC_3( VAR_2->p_stream, "RTCP failed!" );

    FUNC_4( &VAR_2->lock_sink );
    FUNC_1(VAR_2->sinkc, VAR_2->sinkv, VAR_6);
    if( VAR_5 != ((void*)0) )
        *VAR_5 = VAR_2->i_seq_sent_next;
    FUNC_5( &VAR_2->lock_sink );
    return VAR_1;
}
