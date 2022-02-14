
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sinkc; int lock_sink; TYPE_2__* sinkv; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;
struct TYPE_6__ {int member_0; int rtp_fd; int rtcp; int * member_1; } ;
typedef TYPE_2__ rtp_sink_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( sout_stream_id_sys_t *VAR_0, int VAR_1 )
{
    rtp_sink_t VAR_2 = { VAR_1, ((void*)0) };


    FUNC_3( &VAR_0->lock_sink );
    for( int VAR_3 = 0; VAR_3 < VAR_0->sinkc; VAR_3++ )
    {
        if (VAR_0->sinkv[VAR_3].rtp_fd == VAR_1)
        {
            VAR_2 = VAR_0->sinkv[VAR_3];
            FUNC_1(VAR_0->sinkc, VAR_0->sinkv, VAR_3);
            break;
        }
    }
    FUNC_4( &VAR_0->lock_sink );

    FUNC_0( VAR_2.rtcp );
    FUNC_2( VAR_2.rtp_fd );
}
