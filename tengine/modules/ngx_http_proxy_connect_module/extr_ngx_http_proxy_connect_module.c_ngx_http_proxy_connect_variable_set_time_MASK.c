
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_11__ {int data; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_12__ {scalar_t__ method; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_http_proxy_connect_ctx_t ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_str_t VAR_7;
    ngx_msec_t *VAR_8, VAR_9;
    ngx_http_proxy_connect_ctx_t *VAR_10;

    if (VAR_4->method != VAR_1) {
        return;
    }

    VAR_7.len = VAR_5->len;
    VAR_7.data = VAR_5->data;

    VAR_9 = FUNC_2(&VAR_7, 0);

    if (VAR_9 == (ngx_msec_t) VAR_0) {
        FUNC_1(VAR_2, VAR_4->connection->log, 0,
                      "proxy_connect: invalid msec \"%V\" (ctx offset=%ui)",
                      &VAR_7, VAR_6);
        return;
    }

    VAR_10 = FUNC_0(VAR_4, VAR_3);

    if (VAR_10 == ((void*)0)) {




        return;
    }

    VAR_8 = (ngx_msec_t *) ((char *) VAR_10 + VAR_6);

    *VAR_8 = VAR_9;
}
