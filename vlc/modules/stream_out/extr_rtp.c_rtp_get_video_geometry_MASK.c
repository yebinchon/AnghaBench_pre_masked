
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fmtp; } ;
struct TYPE_5__ {TYPE_1__ rtp_fmt; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int*,int*) ;

void FUNC_2( sout_stream_id_sys_t *VAR_0, int *VAR_1, int *VAR_2 )
{
    int VAR_3 = FUNC_1( VAR_0->rtp_fmt.fmtp, "%*s width=%d; height=%d; ", VAR_1, VAR_2 );
    FUNC_0( VAR_3 == 2 );
}
