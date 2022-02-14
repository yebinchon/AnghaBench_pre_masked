
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ content_length_n; scalar_t__ status; } ;
struct TYPE_16__ {int pool; TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {int * next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_18__ {scalar_t__ pos; scalar_t__ last; int last_buf; } ;
typedef TYPE_5__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4, ngx_int_t VAR_5,
    ngx_str_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t VAR_9;

    VAR_4->headers_out.status = VAR_5;
    VAR_4->headers_out.content_length_n = VAR_6->len;

    VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 == VAR_0 || VAR_7 > VAR_3) {
        FUNC_1(VAR_4, VAR_7);
        return;
    }

    if (VAR_6->len == 0) {
        FUNC_1(VAR_4, FUNC_4(VAR_4, VAR_1));
        return;
    }

    VAR_8 = FUNC_0(VAR_4->pool, VAR_6->len);
    if (VAR_8 == ((void*)0)) {
        FUNC_1(VAR_4, VAR_2);
        return;
    }

    VAR_8->pos = VAR_6->data;
    VAR_8->last = VAR_6->data + VAR_6->len;
    VAR_8->last_buf = 1;

    VAR_9.buf = VAR_8;
    VAR_9.next = ((void*)0);

    FUNC_1(VAR_4, FUNC_2(VAR_4, &VAR_9));
}
