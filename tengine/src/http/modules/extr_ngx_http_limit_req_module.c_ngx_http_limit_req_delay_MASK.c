
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* write_event_handler ) (TYPE_2__*) ;int read_event_handler; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ delayed; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_8__ {int read; TYPE_3__* write; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_event_t *VAR_5;

    FUNC_4(VAR_1, VAR_4->connection->log, 0,
                   "limit_req delay");

    VAR_5 = VAR_4->connection->write;

    if (VAR_5->delayed) {

        if (FUNC_1(VAR_5, 0) != VAR_2) {
            FUNC_3(VAR_4, VAR_0);
        }

        return;
    }

    if (FUNC_0(VAR_4->connection->read, 0) != VAR_2) {
        FUNC_3(VAR_4, VAR_0);
        return;
    }

    VAR_4->read_event_handler = VAR_3;
    VAR_4->write_event_handler = FUNC_2;

    FUNC_2(VAR_4);
}
