
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int ngx_table_elt_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_17__ {int keep_alive_n; scalar_t__ content_length_n; int headers; } ;
struct TYPE_15__ {int headers; } ;
struct TYPE_18__ {int count; int discard_body; int http_state; scalar_t__ subrequests; scalar_t__ uri_changes; TYPE_4__ headers_in; int method; struct TYPE_18__* main; int signature; TYPE_11__* http_connection; TYPE_6__* connection; int * variables; int pool; int * ctx; TYPE_2__ headers_out; int header_end; TYPE_1__* header_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int ngx_http_connection_t ;
typedef int ngx_http_cleanup_t ;
struct TYPE_19__ {TYPE_5__* data; TYPE_1__* buffer; int pool; int requests; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_16__ {int nelts; } ;
struct TYPE_20__ {TYPE_3__ variables; } ;
struct TYPE_14__ {int start; } ;
struct TYPE_13__ {TYPE_5__* request; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_9__* VAR_6 ;
 int FUNC_0 (char*,...) ;
 TYPE_11__* VAR_7 ;
 int VAR_8 ;
 TYPE_9__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int) ;
 void* FUNC_3 (int ,int) ;

ngx_http_request_t *
FUNC_4(ngx_connection_t *VAR_10)
{
    ngx_http_request_t *VAR_11;

    VAR_11 = FUNC_3(VAR_10->pool, sizeof(ngx_http_request_t));
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10->requests++;

    VAR_11->pool = VAR_10->pool;

    FUNC_0("r pool allocated: %d", (int) (sizeof(ngx_http_lua_ctx_t)
       + sizeof(void *) * VAR_9 + sizeof(ngx_http_cleanup_t)));
    VAR_11->ctx = FUNC_3(VAR_11->pool, sizeof(void *) * VAR_9);
    if (VAR_11->ctx == ((void*)0)) {
        return ((void*)0);
    }
    VAR_11->connection = VAR_10;

    VAR_11->headers_in.content_length_n = 0;
    VAR_10->data = VAR_11;




    VAR_11->signature = VAR_2;
    VAR_11->main = VAR_11;
    VAR_11->count = 1;

    VAR_11->method = VAR_4;

    VAR_11->headers_in.keep_alive_n = -1;
    VAR_11->uri_changes = VAR_1 + 1;
    VAR_11->subrequests = VAR_0 + 1;

    VAR_11->http_state = VAR_3;
    VAR_11->discard_body = 1;

    FUNC_0("created fake request %p", VAR_11);

    return VAR_11;
}
