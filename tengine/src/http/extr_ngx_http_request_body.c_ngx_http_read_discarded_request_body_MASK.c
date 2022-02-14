
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {scalar_t__ content_length_n; } ;
struct TYPE_12__ {TYPE_5__* connection; TYPE_2__ headers_in; int read_event_handler; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_13__ {int temporary; int * last; int * pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_14__ {scalar_t__ (* recv ) (TYPE_5__*,int *,size_t) ;int error; TYPE_1__* read; int log; } ;
struct TYPE_10__ {int ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_6)
{
    size_t VAR_7;
    ssize_t VAR_8;
    ngx_int_t VAR_9;
    ngx_buf_t VAR_10;
    u_char VAR_11[VAR_2];

    FUNC_1(VAR_3, VAR_6->connection->log, 0,
                   "http read discarded body");

    FUNC_2(&VAR_10, sizeof(ngx_buf_t));

    VAR_10.temporary = 1;

    for ( ;; ) {
        if (VAR_6->headers_in.content_length_n == 0) {
            VAR_6->read_event_handler = VAR_5;
            return VAR_4;
        }

        if (!VAR_6->connection->read->ready) {
            return VAR_0;
        }

        VAR_7 = (size_t) FUNC_3(VAR_6->headers_in.content_length_n,
                                VAR_2);

        VAR_8 = VAR_6->connection->recv(VAR_6->connection, VAR_11, VAR_7);

        if (VAR_8 == VAR_1) {
            VAR_6->connection->error = 1;
            return VAR_4;
        }

        if (VAR_8 == VAR_0) {
            return VAR_0;
        }

        if (VAR_8 == 0) {
            return VAR_4;
        }

        VAR_10.pos = VAR_11;
        VAR_10.last = VAR_11 + VAR_8;

        VAR_9 = FUNC_0(VAR_6, &VAR_10);

        if (VAR_9 != VAR_4) {
            return VAR_9;
        }
    }
}
