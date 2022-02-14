
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {int log_error; int log; } ;
struct TYPE_12__ {TYPE_3__* request; TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_13__ {TYPE_4__* u; } ;
typedef TYPE_5__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3,
    ngx_http_proxy_connect_ctx_t *VAR_4)
{
    ngx_http_proxy_connect_upstream_t *VAR_5;

    VAR_5 = FUNC_0(VAR_3->pool, sizeof(ngx_http_proxy_connect_upstream_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->u = VAR_5;

    VAR_5->peer.log = VAR_3->connection->log;
    VAR_5->peer.log_error = VAR_1;

    VAR_5->request = VAR_3;

    return VAR_2;
}
