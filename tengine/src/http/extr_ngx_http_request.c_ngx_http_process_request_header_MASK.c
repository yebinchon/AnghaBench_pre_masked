
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_21__ {scalar_t__ content_length_n; int chunked; scalar_t__ connection_type; TYPE_6__* keep_alive; int keep_alive_n; TYPE_4__* transfer_encoding; TYPE_2__* content_length; int * host; TYPE_11__ server; } ;
struct TYPE_23__ {scalar_t__ http_version; scalar_t__ method; TYPE_7__ headers_in; TYPE_3__* connection; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_22__ {int len; int data; } ;
struct TYPE_19__ {int len; int data; } ;
struct TYPE_20__ {TYPE_5__ value; } ;
struct TYPE_18__ {TYPE_8__ value; } ;
struct TYPE_17__ {int log; } ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_16__ {TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_11__*) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_5 (int ,int *,int) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_9)
{
    if (VAR_9->headers_in.server.len == 0
        && FUNC_3(VAR_9, &VAR_9->headers_in.server)
           == VAR_0)
    {
        return VAR_0;
    }

    if (VAR_9->headers_in.host == ((void*)0) && VAR_9->http_version > VAR_6) {
        FUNC_4(VAR_7, VAR_9->connection->log, 0,
                   "client sent HTTP/1.1 request without \"Host\" header");
        FUNC_2(VAR_9, VAR_1);
        return VAR_0;
    }

    if (VAR_9->headers_in.content_length) {
        VAR_9->headers_in.content_length_n =
                            FUNC_0(VAR_9->headers_in.content_length->value.data,
                                      VAR_9->headers_in.content_length->value.len);

        if (VAR_9->headers_in.content_length_n == VAR_0) {
            FUNC_4(VAR_7, VAR_9->connection->log, 0,
                          "client sent invalid \"Content-Length\" header");
            FUNC_2(VAR_9, VAR_1);
            return VAR_0;
        }
    }

    if (VAR_9->method == VAR_5) {
        FUNC_4(VAR_7, VAR_9->connection->log, 0,
                      "client sent TRACE method");
        FUNC_2(VAR_9, VAR_3);
        return VAR_0;
    }

    if (VAR_9->headers_in.transfer_encoding) {
        if (VAR_9->headers_in.transfer_encoding->value.len == 7
            && FUNC_5(VAR_9->headers_in.transfer_encoding->value.data,
                               (u_char *) "chunked", 7) == 0)
        {
            VAR_9->headers_in.content_length = ((void*)0);
            VAR_9->headers_in.content_length_n = -1;
            VAR_9->headers_in.chunked = 1;

        } else if (VAR_9->headers_in.transfer_encoding->value.len != 8
            || FUNC_5(VAR_9->headers_in.transfer_encoding->value.data,
                               (u_char *) "identity", 8) != 0)
        {
            FUNC_4(VAR_7, VAR_9->connection->log, 0,
                          "client sent unknown \"Transfer-Encoding\": \"%V\"",
                          &VAR_9->headers_in.transfer_encoding->value);
            FUNC_2(VAR_9, VAR_4);
            return VAR_0;
        }
    }

    if (VAR_9->headers_in.connection_type == VAR_2) {
        if (VAR_9->headers_in.keep_alive) {
            VAR_9->headers_in.keep_alive_n =
                            FUNC_1(VAR_9->headers_in.keep_alive->value.data,
                                      VAR_9->headers_in.keep_alive->value.len);
        }
    }

    return VAR_8;
}
