
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {TYPE_2__* content_length; scalar_t__ content_length_n; } ;
struct TYPE_13__ {TYPE_3__ headers_out; scalar_t__ header_only; TYPE_1__* connection; scalar_t__ header_sent; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_14__ {int header_sent; TYPE_6__* out; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_15__ {int buf; struct TYPE_15__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_11__ {scalar_t__ hash; } ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_http_lua_ctx_t *VAR_3)
{
    off_t VAR_4;
    ngx_chain_t *VAR_5;
    ngx_int_t VAR_6;

    if (VAR_2->header_sent || VAR_3->header_sent) {
        return VAR_1;
    }

    FUNC_2(VAR_0, VAR_2->connection->log, 0,
                   "lua sending HTTP 1.0 response headers");

    if (VAR_2->header_only) {
        goto send;
    }

    if (VAR_2->headers_out.content_length == ((void*)0)) {
        for (VAR_4 = 0, VAR_5 = VAR_3->out; VAR_5; VAR_5 = VAR_5->next) {
            VAR_4 += FUNC_0(VAR_5->buf);
        }

        VAR_2->headers_out.content_length_n = VAR_4;

        if (VAR_2->headers_out.content_length) {
            VAR_2->headers_out.content_length->hash = 0;
        }
    }

send:

    VAR_6 = FUNC_1(VAR_2);
    VAR_3->header_sent = 1;
    return VAR_6;
}
