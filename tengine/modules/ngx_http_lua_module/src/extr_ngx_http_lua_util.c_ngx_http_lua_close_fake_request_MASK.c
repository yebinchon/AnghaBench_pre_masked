
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; TYPE_2__* connection; struct TYPE_6__* main; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_7__ {int log; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_2)
{
    ngx_connection_t *VAR_3;

    VAR_2 = VAR_2->main;
    VAR_3 = VAR_2->connection;

    FUNC_2(VAR_1, VAR_3->log, 0,
                   "http lua fake request count:%d", VAR_2->count);

    if (VAR_2->count == 0) {
        FUNC_3(VAR_0, VAR_3->log, 0, "http lua fake request "
                      "count is zero");
    }

    VAR_2->count--;

    if (VAR_2->count) {
        return;
    }

    FUNC_1(VAR_2);
    FUNC_0(VAR_3);
}
