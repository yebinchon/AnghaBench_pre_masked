
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_13__ {size_t content_length_n; } ;
struct TYPE_15__ {TYPE_2__ headers_in; TYPE_5__* request_body; scalar_t__ request_body_in_file_only; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_1__* buf; TYPE_6__* bufs; } ;
typedef TYPE_5__ ngx_http_request_body_t ;
struct TYPE_17__ {int * next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_18__ {int temporary; int * last; int * end; int * start; int * pos; } ;
typedef TYPE_7__ ngx_buf_t ;
typedef int lua_State ;
struct TYPE_12__ {scalar_t__ last; scalar_t__ end; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (size_t,int *,size_t) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    int VAR_3;
    ngx_http_request_body_t *VAR_4;
    ngx_str_t VAR_5;
    size_t VAR_6, VAR_7;
    size_t VAR_8 = 0;
    ngx_chain_t VAR_9;
    ngx_buf_t VAR_10;

    VAR_3 = FUNC_2(VAR_1);

    if (VAR_3 != 1) {
        return FUNC_1(VAR_1, "expecting 1 arguments but seen %d", VAR_3);
    }

    VAR_5.data = (u_char *) FUNC_0(VAR_1, 1, &VAR_5.len);

    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_1(VAR_1, "no request found");
    }

    FUNC_3(VAR_1, VAR_2);

    if (VAR_2->request_body == ((void*)0)
        || VAR_2->request_body->buf == ((void*)0)
        || VAR_2->request_body->bufs == ((void*)0))
    {
        return FUNC_1(VAR_1, "request_body not initialized");
    }

    if (VAR_2->request_body_in_file_only) {
        VAR_10.start = VAR_5.data;
        VAR_10.pos = VAR_10.start;
        VAR_10.last = VAR_10.start + VAR_5.len;
        VAR_10.end = VAR_10.last;
        VAR_10.temporary = 1;

        VAR_9.buf = &VAR_10;
        VAR_9.next = ((void*)0);

        if (FUNC_5(VAR_2, &VAR_9) != VAR_0) {
            return FUNC_1(VAR_1, "fail to write file");
        }

        VAR_2->headers_in.content_length_n += VAR_5.len;
        return 0;
    }

    VAR_4 = VAR_2->request_body;

    VAR_7 = VAR_5.len;

    while (VAR_7 > 0) {
        if (VAR_4->buf->last == VAR_4->buf->end) {
            if (FUNC_5(VAR_2, VAR_4->bufs) != VAR_0) {
                return FUNC_1(VAR_1, "fail to write file");
            }

            VAR_4->buf->last = VAR_4->buf->start;
        }

        VAR_6 = VAR_4->buf->end - VAR_4->buf->last;

        if (VAR_6 > VAR_7) {
            VAR_6 = VAR_7;
        }

        FUNC_6(VAR_4->buf->last, VAR_5.data + VAR_8, VAR_6);

        VAR_4->buf->last += VAR_6;
        VAR_7 -= VAR_6;
        VAR_8 += VAR_6;
        VAR_2->headers_in.content_length_n += VAR_6;
    }

    return 0;
}
