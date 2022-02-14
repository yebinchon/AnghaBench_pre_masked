
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; scalar_t__ timedout; int * data; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;

    VAR_2 = VAR_1->data;

    if (VAR_1->timedout) {
        FUNC_0(VAR_2, VAR_0);
        return;
    }

    FUNC_1(VAR_2, VAR_1->write);
}
