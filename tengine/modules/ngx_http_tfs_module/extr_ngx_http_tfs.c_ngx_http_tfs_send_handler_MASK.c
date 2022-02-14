
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* tfs_peer; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_13__ {int name; TYPE_5__* connection; } ;
struct TYPE_15__ {int peer_addr_text; TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_request_t ;
struct TYPE_16__ {TYPE_6__* log; TYPE_1__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_17__ {char* action; } ;
struct TYPE_12__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*) ;
 int FUNC_3 (int ,TYPE_6__*,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_2, ngx_http_tfs_t *VAR_3)
{
    ngx_connection_t *VAR_4;
    ngx_http_tfs_peer_connection_t *VAR_5;

    VAR_5 = VAR_3->tfs_peer;
    VAR_4 = VAR_5->peer.connection;

    FUNC_2(VAR_0, VAR_4->log, 0, "http tfs send request");

    VAR_4->log->action = "sending request to tfs";

    if (VAR_4->write->timedout) {
        FUNC_3(VAR_1, VAR_4->log, 0,
                      "connect or send to (%V: %s) timeout", VAR_5->peer.name,
                      VAR_5->peer_addr_text);
        FUNC_0(VAR_3, VAR_5);
        return;
    }

    FUNC_1(VAR_2, VAR_3);
}
