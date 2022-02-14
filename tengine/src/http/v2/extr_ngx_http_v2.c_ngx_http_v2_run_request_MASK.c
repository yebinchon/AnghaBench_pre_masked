
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int content_length_n; int chunked; } ;
struct TYPE_14__ {TYPE_2__ headers_in; TYPE_1__* stream; TYPE_4__* connection; int http_state; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_12__ {int skip_data; scalar_t__ in_closed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_4)
{
    ngx_connection_t *VAR_5;

    VAR_5 = VAR_4->connection;

    if (FUNC_5(VAR_4) != VAR_3) {
        goto failed;
    }

    if (FUNC_4(VAR_4) != VAR_3) {
        goto failed;
    }

    VAR_4->http_state = VAR_1;

    if (FUNC_2(VAR_4) != VAR_3) {
        goto failed;
    }

    if (VAR_4->headers_in.content_length_n > 0 && VAR_4->stream->in_closed) {
        FUNC_6(VAR_2, VAR_4->connection->log, 0,
                      "client prematurely closed stream");

        VAR_4->stream->skip_data = 1;

        FUNC_0(VAR_4, VAR_0);
        goto failed;
    }

    if (VAR_4->headers_in.content_length_n == -1 && !VAR_4->stream->in_closed) {
        VAR_4->headers_in.chunked = 1;
    }

    FUNC_1(VAR_4);

failed:

    FUNC_3(VAR_5);
}
