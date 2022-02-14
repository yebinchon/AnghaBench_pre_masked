
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {int len; int data; scalar_t__ not_found; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_15__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {int index; } ;
typedef TYPE_4__ ngx_http_geo_ctx_t ;
struct TYPE_17__ {int socklen; int sockaddr; } ;
typedef TYPE_5__ ngx_addr_t ;
struct TYPE_13__ {int log; int socklen; int sockaddr; TYPE_2__ addr_text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_5__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_http_geo_ctx_t *VAR_4,
    ngx_addr_t *VAR_5)
{
    ngx_http_variable_value_t *VAR_6;

    if (VAR_4->index == -1) {
        FUNC_2(VAR_1, VAR_3->connection->log, 0,
                       "http geo started: %V", &VAR_3->connection->addr_text);

        VAR_5->sockaddr = VAR_3->connection->sockaddr;
        VAR_5->socklen = VAR_3->connection->socklen;


        return VAR_2;
    }

    VAR_6 = FUNC_0(VAR_3, VAR_4->index);

    if (VAR_6 == ((void*)0) || VAR_6->not_found) {
        FUNC_1(VAR_1, VAR_3->connection->log, 0,
                       "http geo not found");

        return VAR_0;
    }

    FUNC_2(VAR_1, VAR_3->connection->log, 0,
                   "http geo started: %v", VAR_6);

    if (FUNC_3(VAR_3->pool, VAR_5, VAR_6->data, VAR_6->len) == VAR_2) {
        return VAR_2;
    }

    return VAR_0;
}
