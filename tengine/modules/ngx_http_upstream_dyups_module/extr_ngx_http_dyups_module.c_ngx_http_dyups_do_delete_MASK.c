
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_19__ {int len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int content_length_n; scalar_t__ status; } ;
struct TYPE_20__ {int pool; TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_21__ {int * next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_22__ {scalar_t__ pos; scalar_t__ last; int last_buf; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_23__ {int nelts; TYPE_2__* elts; } ;
typedef TYPE_6__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_5, ngx_array_t *VAR_6)
{
    ngx_str_t *VAR_7, VAR_8, VAR_9;
    ngx_int_t VAR_10, VAR_11;
    ngx_buf_t *VAR_12;
    ngx_chain_t VAR_13;

    VAR_11 = FUNC_2(VAR_5);
    if (VAR_11 != VAR_4) {
        return VAR_11;
    }

    if (VAR_6->nelts != 2) {
        FUNC_6(&VAR_9, "not support this interface");
        VAR_10 = VAR_3;
        goto finish;
    }

    VAR_7 = VAR_6->elts;

    if (VAR_7[0].len != 8
        || FUNC_7(VAR_7[0].data, (u_char *) "upstream", 8) != 0)
    {
        FUNC_6(&VAR_9, "not support this api");
        VAR_10 = VAR_3;
        goto finish;
    }

    VAR_8 = VAR_7[1];

    VAR_10 = FUNC_1(&VAR_8, &VAR_9);

finish:

    VAR_5->headers_out.status = VAR_10;
    VAR_5->headers_out.content_length_n = VAR_9.len;

    VAR_11 = FUNC_4(VAR_5);
    if (VAR_11 == VAR_0 || VAR_11 > VAR_4) {
        return VAR_11;
    }

    if (VAR_9.len == 0) {
        return FUNC_5(VAR_5, VAR_1);
    }

    VAR_12 = FUNC_0(VAR_5->pool, VAR_9.len);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12->pos = VAR_9.data;
    VAR_12->last = VAR_9.data + VAR_9.len;
    VAR_12->last_buf = 1;

    VAR_13.buf = VAR_12;
    VAR_13.next = ((void*)0);

    return FUNC_3(VAR_5, &VAR_13);
}
