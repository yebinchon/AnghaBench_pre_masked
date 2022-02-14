
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef int ngx_http_upstream_check_peer_t ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {scalar_t__ (* recv ) (TYPE_2__*,int *,int) ;int error; int read; int log; int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_3)
{
    u_char VAR_4[4096];
    ssize_t VAR_5;
    ngx_connection_t *VAR_6;
    ngx_http_upstream_check_peer_t *VAR_7;

    VAR_6 = VAR_3->data;

    FUNC_3(VAR_1, VAR_6->log, 0,
                   "upstream check discard handler");

    if (FUNC_2()) {
        return;
    }

    VAR_7 = VAR_6->data;

    while (1) {
        VAR_5 = VAR_6->recv(VAR_6, VAR_4, 4096);

        if (VAR_5 > 0) {
            continue;

        } else if (VAR_5 == VAR_0) {
            break;

        } else {
            if (VAR_5 == 0) {
                FUNC_3(VAR_1, VAR_6->log, 0,
                               "peer closed its half side of the connection");
            }

            goto check_discard_fail;
        }
    }

    if (FUNC_0(VAR_6->read, 0) != VAR_2) {
        goto check_discard_fail;
    }

    return;

 check_discard_fail:
    VAR_6->error = 1;
    FUNC_1(VAR_7);
}
