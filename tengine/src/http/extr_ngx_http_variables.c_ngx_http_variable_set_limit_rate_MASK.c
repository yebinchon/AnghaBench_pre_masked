
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_10__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {int data; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_12__ {int limit_rate_set; scalar_t__ limit_rate; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ssize_t VAR_5;
    ngx_str_t VAR_6;

    VAR_6.len = VAR_3->len;
    VAR_6.data = VAR_3->data;

    VAR_5 = FUNC_1(&VAR_6);

    if (VAR_5 == VAR_0) {
        FUNC_0(VAR_1, VAR_2->connection->log, 0,
                      "invalid $limit_rate \"%V\"", &VAR_6);
        return;
    }

    VAR_2->limit_rate = VAR_5;
    VAR_2->limit_rate_set = 1;
}
