
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_11__ {scalar_t__ status_n; int content_length_n; int connection_close; scalar_t__ chunked; } ;
struct TYPE_12__ {int length; int keepalive; TYPE_3__ headers_in; TYPE_2__* pipe; int input_filter; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_13__ {TYPE_1__* connection; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ head; } ;
typedef TYPE_6__ ngx_http_proxy_ctx_t ;
struct TYPE_10__ {int length; int input_filter; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(void *VAR_8)
{
    ngx_http_request_t *VAR_9 = VAR_8;
    ngx_http_upstream_t *VAR_10;
    ngx_http_proxy_ctx_t *VAR_11;

    VAR_10 = VAR_9->upstream;
    VAR_11 = FUNC_0(VAR_9, VAR_6);

    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_3, VAR_9->connection->log, 0,
                   "http proxy filter init s:%ui h:%d c:%d l:%O",
                   VAR_10->headers_in.status_n, VAR_11->head, VAR_10->headers_in.chunked,
                   VAR_10->headers_in.content_length_n);



    if (VAR_10->headers_in.status_n == VAR_2
        || VAR_10->headers_in.status_n == VAR_1
        || VAR_11->head)
    {



        VAR_10->pipe->length = 0;
        VAR_10->length = 0;
        VAR_10->keepalive = !VAR_10->headers_in.connection_close;

    } else if (VAR_10->headers_in.chunked) {


        VAR_10->pipe->input_filter = VAR_5;
        VAR_10->pipe->length = 3;

        VAR_10->input_filter = VAR_7;
        VAR_10->length = 1;

    } else if (VAR_10->headers_in.content_length_n == 0) {


        VAR_10->pipe->length = 0;
        VAR_10->length = 0;
        VAR_10->keepalive = !VAR_10->headers_in.connection_close;

    } else {


        VAR_10->pipe->length = VAR_10->headers_in.content_length_n;
        VAR_10->length = VAR_10->headers_in.content_length_n;
    }

    return VAR_4;
}
