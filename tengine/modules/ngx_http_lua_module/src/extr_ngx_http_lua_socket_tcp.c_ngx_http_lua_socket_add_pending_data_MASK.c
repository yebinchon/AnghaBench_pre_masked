
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_7__ {TYPE_1__* buf_in; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_8__ {int * last; int * pos; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_6__ {TYPE_3__* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_lua_socket_tcp_upstream_t *VAR_3, u_char *VAR_4, size_t VAR_5, u_char *VAR_6,
    int VAR_7, int VAR_8)
{
    u_char *VAR_9;
    ngx_buf_t *VAR_10;

    FUNC_0("resuming data: %d: [%.*s]", VAR_7, VAR_7, VAR_6);

    VAR_9 = &VAR_4[VAR_5];

    VAR_10 = VAR_3->buf_in->buf;

    if (VAR_9 - VAR_10->last == VAR_8) {
        VAR_10->last += VAR_7;
        return VAR_1;
    }

    FUNC_0("need more buffers because %d != %d", (int) (VAR_9 - VAR_10->last),
       (int) VAR_8);

    if (FUNC_1(VAR_2, VAR_3, VAR_6, VAR_7) != VAR_1) {
        return VAR_0;
    }

    VAR_10->pos = VAR_9;
    VAR_10->last = VAR_9;

    return VAR_1;
}
