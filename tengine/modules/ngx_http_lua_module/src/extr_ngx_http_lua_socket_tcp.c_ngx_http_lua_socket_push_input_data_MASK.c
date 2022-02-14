
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;
struct TYPE_10__ {TYPE_1__ buffer; TYPE_4__* buf_in; TYPE_4__* bufs_in; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_11__ {TYPE_4__* free_recv_bufs; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_12__ {TYPE_5__* buf; struct TYPE_12__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_13__ {size_t last; size_t pos; } ;
typedef TYPE_5__ ngx_buf_t ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_2__*,int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_1,
    ngx_http_lua_ctx_t *VAR_2, ngx_http_lua_socket_tcp_upstream_t *VAR_3,
    lua_State *VAR_4)
{
    ngx_chain_t *VAR_5;
    ngx_chain_t **VAR_6;



    size_t VAR_7;
    ngx_buf_t *VAR_8;
    size_t VAR_9;
    luaL_Buffer VAR_10;

    FUNC_0("bufs_in: %p, buf_in: %p", VAR_3->bufs_in, VAR_3->buf_in);

    VAR_9 = 0;
    VAR_6 = ((void*)0);

    FUNC_2(VAR_4, &VAR_10);

    for (VAR_5 = VAR_3->bufs_in; VAR_5; VAR_5 = VAR_5->next) {
        VAR_8 = VAR_5->buf;
        VAR_7 = VAR_8->last - VAR_8->pos;

        FUNC_0("copying input data chunk from %p: \"%.*s\"", VAR_5,
           (int) VAR_7, VAR_8->pos);

        FUNC_1(&VAR_10, (char *) VAR_8->pos, VAR_7);

        if (VAR_5->next) {
            VAR_6 = &VAR_5->next;
        }





        VAR_9++;
    }

    FUNC_3(&VAR_10);
    if (VAR_9 > 1 && VAR_6) {
        FUNC_0("recycle buffers: %d", (int) (VAR_9 - 1));

        *VAR_6 = VAR_2->free_recv_bufs;
        VAR_2->free_recv_bufs = VAR_3->bufs_in;
        VAR_3->bufs_in = VAR_3->buf_in;
    }

    if (VAR_3->buffer.pos == VAR_3->buffer.last) {
        FUNC_0("resetting u->buffer pos & last");
        VAR_3->buffer.pos = VAR_3->buffer.start;
        VAR_3->buffer.last = VAR_3->buffer.start;
    }

    if (VAR_3->bufs_in) {
        VAR_3->buf_in->buf->last = VAR_3->buffer.pos;
        VAR_3->buf_in->buf->pos = VAR_3->buffer.pos;
    }

    return VAR_0;
}
