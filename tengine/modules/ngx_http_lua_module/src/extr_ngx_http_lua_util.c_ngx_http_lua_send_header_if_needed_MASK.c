
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {scalar_t__ status; } ;
struct TYPE_12__ {TYPE_1__ headers_out; scalar_t__ header_sent; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {int header_sent; int buffering; int headers_set; int mime_set; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3,
    ngx_http_lua_ctx_t *VAR_4)
{
    ngx_int_t VAR_5;

    FUNC_0("send header if needed: %d", VAR_3->header_sent || VAR_4->header_sent);

    if (!VAR_3->header_sent && !VAR_4->header_sent) {
        if (VAR_3->headers_out.status == 0) {
            VAR_3->headers_out.status = VAR_1;
        }

        if (!VAR_4->mime_set
            && FUNC_3(VAR_3, VAR_4) != VAR_2)
        {
            return VAR_0;
        }

        if (!VAR_4->headers_set) {
            FUNC_2(VAR_3);
            FUNC_1(VAR_3);
        }

        if (!VAR_4->buffering) {
            FUNC_0("sending headers");
            VAR_5 = FUNC_4(VAR_3);
            VAR_4->header_sent = 1;
            return VAR_5;
        }
    }

    return VAR_2;
}
