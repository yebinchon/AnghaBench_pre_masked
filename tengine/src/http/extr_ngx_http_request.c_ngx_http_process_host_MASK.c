
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_15__ {TYPE_4__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_4__ server; TYPE_3__* host; } ;
struct TYPE_17__ {TYPE_2__ headers_in; TYPE_1__* connection; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_6, ngx_table_elt_t *VAR_7,
    ngx_uint_t VAR_8)
{
    ngx_int_t VAR_9;
    ngx_str_t VAR_10;

    if (VAR_6->headers_in.host == ((void*)0)) {
        VAR_6->headers_in.host = VAR_7;
    }

    VAR_10 = VAR_7->value;

    VAR_9 = FUNC_3(&VAR_10, VAR_6->pool, 0);

    if (VAR_9 == VAR_0) {
        FUNC_4(VAR_4, VAR_6->connection->log, 0,
                      "client sent invalid host header");
        FUNC_1(VAR_6, VAR_2);
        return VAR_1;
    }

    if (VAR_9 == VAR_1) {
        FUNC_0(VAR_6, VAR_3);
        return VAR_1;
    }

    if (VAR_6->headers_in.server.len) {
        return VAR_5;
    }

    if (FUNC_2(VAR_6, &VAR_10) == VAR_1) {
        return VAR_1;
    }

    VAR_6->headers_in.server = VAR_10;

    return VAR_5;
}
