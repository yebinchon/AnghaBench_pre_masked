
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* upstream; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef int ngx_multi_connection_t ;
typedef int ngx_connection_t ;
struct TYPE_5__ {int * connection; } ;
struct TYPE_6__ {TYPE_1__ peer; } ;


 int * FUNC_0 (int *) ;

ngx_multi_connection_t*
FUNC_1(ngx_stream_session_t *VAR_0)
{
    ngx_connection_t *VAR_1;

    VAR_1 = VAR_0->upstream->peer.connection;

    return FUNC_0(VAR_1);
}
