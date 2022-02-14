
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_stream_session_t ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_5__ {int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(ngx_event_t *VAR_0)
{
    ngx_connection_t *VAR_1;
    ngx_stream_session_t *VAR_2;

    VAR_1 = VAR_0->data;
    VAR_2 = VAR_1->data;

    FUNC_0(VAR_2);
}
