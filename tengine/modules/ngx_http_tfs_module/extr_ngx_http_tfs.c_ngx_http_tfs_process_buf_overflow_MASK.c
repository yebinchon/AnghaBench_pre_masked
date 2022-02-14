
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {scalar_t__ code; int msg; } ;
struct TYPE_22__ {TYPE_5__ action; } ;
struct TYPE_23__ {scalar_t__ state; scalar_t__ (* process_request_body ) (TYPE_7__*) ;TYPE_6__ r_ctx; int log; TYPE_8__* data; TYPE_4__* tfs_peer; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_24__ {TYPE_1__* connection; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_19__ {TYPE_2__* connection; int name; } ;
struct TYPE_20__ {TYPE_3__ peer; } ;
struct TYPE_18__ {int read; } ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_8__*,TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*,scalar_t__) ;
 int FUNC_3 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_8, ngx_http_tfs_t *VAR_9)
{
    ngx_int_t VAR_10;

    FUNC_4(VAR_5, VAR_8->connection->log, 0,
                  "tfs process buf overflow, %V", VAR_9->tfs_peer->peer.name);

    if ((VAR_9->r_ctx.action.code == VAR_3
         && VAR_9->state == VAR_4))
    {
        VAR_10 = VAR_9->process_request_body(VAR_9);

        if (VAR_10 != VAR_0) {
            if (VAR_10 == VAR_1) {
                FUNC_5(VAR_6, VAR_9->log, 0,
                              "process request body failed");
                FUNC_1(VAR_9->data, VAR_9,
                                              VAR_2);

            } else {
                FUNC_2(VAR_9, VAR_10);
            }
            return;
        }

        if (FUNC_0(VAR_9->tfs_peer->peer.connection->read, 0)
            != VAR_7)
        {
            FUNC_5(VAR_6, VAR_9->log, 0,
                          "ngx handle read event failed");
            FUNC_1(VAR_9->data, VAR_9,
                                          VAR_2);
            return;
        }

        FUNC_3(VAR_8, VAR_9);

        return;

    }

    FUNC_5(VAR_6, VAR_9->log, 0,
                  "action: %V should not come to here process buf overflow",
                  &VAR_9->r_ctx.action.msg);

    FUNC_1(VAR_8, VAR_9, VAR_2);
}
