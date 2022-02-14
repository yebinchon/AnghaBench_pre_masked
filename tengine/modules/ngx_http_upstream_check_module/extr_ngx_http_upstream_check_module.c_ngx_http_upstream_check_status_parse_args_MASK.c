
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


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_15__ {int * flag; } ;
typedef TYPE_4__ ngx_http_upstream_check_status_ctx_t ;
struct TYPE_12__ {scalar_t__ len; } ;
struct TYPE_16__ {TYPE_3__* connection; TYPE_1__ args; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_17__ {scalar_t__ (* handler ) (TYPE_4__*,int *) ;TYPE_2__ name; } ;
typedef TYPE_6__ ngx_check_status_command_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_upstream_check_status_ctx_t *VAR_5)
{
    ngx_str_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_check_status_command_t *VAR_8;

    if (VAR_4->args.len == 0) {
        return;
    }

    for (VAR_7 = 0; ; VAR_7++) {

        VAR_8 = &VAR_3[VAR_7];

        if (VAR_8->name.len == 0) {
            break;
        }

        if (FUNC_0(VAR_4, VAR_8->name.data, VAR_8->name.len, &VAR_6)
            == VAR_2) {

           if (VAR_8->handler(VAR_5, &VAR_6) != VAR_2) {
               FUNC_1(VAR_1, VAR_4->connection->log, 0,
                             "http upstream check, bad argument: \"%V\"",
                             &VAR_6);
           }
        }
    }

    FUNC_1(VAR_0, VAR_4->connection->log, 0,
            "http upstream check, flag: \"%ui\"", VAR_5->flag);
}
