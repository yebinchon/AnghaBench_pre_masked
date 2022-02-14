
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_http_upstream_check_peer_t ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_7__ {int error; int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_upstream_check_peer_t *VAR_3;

    if (FUNC_2()) {
        return;
    }

    VAR_2 = VAR_1->data;
    VAR_3 = VAR_2->data;

    if (FUNC_3(VAR_2) == VAR_0) {
        FUNC_4(VAR_3, 1);

    } else {
        VAR_2->error = 1;
        FUNC_4(VAR_3, 0);
    }

    FUNC_0(VAR_3);

    FUNC_1(VAR_1);
}
