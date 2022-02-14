
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_26__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {scalar_t__ content_length_n; scalar_t__ status; } ;
struct TYPE_27__ {TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_28__ {scalar_t__ deleted; } ;
typedef TYPE_4__ ngx_http_dyups_srv_conf_t ;
struct TYPE_29__ {int * next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_30__ {int last_buf; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_31__ {int nelts; TYPE_2__* elts; } ;
typedef TYPE_7__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_6__* FUNC_3 (TYPE_3__*) ;
 TYPE_6__* FUNC_4 (TYPE_3__*) ;
 TYPE_6__* FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_7, ngx_array_t *VAR_8)
{
    ngx_int_t VAR_9, VAR_10, VAR_11;
    ngx_buf_t *VAR_12;
    ngx_str_t *VAR_13;
    ngx_chain_t VAR_14;
    ngx_http_dyups_srv_conf_t *VAR_15;

    VAR_9 = FUNC_2(VAR_7);
    if (VAR_9 != VAR_6) {
        return VAR_9;
    }

    if (VAR_8->nelts == 0) {
        return VAR_3;
    }

    VAR_12 = ((void*)0);
    VAR_13 = VAR_8->elts;

    if (VAR_13[0].len == 4
        && FUNC_9(VAR_13[0].data, (u_char *) "list", 4) == 0)
    {
        VAR_12 = FUNC_4(VAR_7);
        if (VAR_12 == ((void*)0)) {
            VAR_10 = VAR_2;
            goto finish;
        }
    }

    if (VAR_13[0].len == 6
        && FUNC_9(VAR_13[0].data, (u_char *) "detail", 6) == 0)
    {
        VAR_12 = FUNC_3(VAR_7);
        if (VAR_12 == ((void*)0)) {
            VAR_10 = VAR_2;
            goto finish;
        }
    }

    if (VAR_13[0].len == 8
        && FUNC_9(VAR_13[0].data, (u_char *) "upstream", 8) == 0)
    {
        if (VAR_8->nelts != 2) {
            VAR_10 = VAR_3;
            goto finish;
        }

        VAR_15 = FUNC_1(&VAR_13[1], &VAR_11);
        if (VAR_15 == ((void*)0) || VAR_15->deleted) {
            VAR_10 = VAR_3;
            goto finish;
        }

        VAR_12 = FUNC_5(VAR_7, VAR_15);
        if (VAR_12 == ((void*)0)) {
            VAR_10 = VAR_2;
            goto finish;
        }
    }

    if (VAR_12 != ((void*)0) && FUNC_0(VAR_12) == 0) {
        VAR_10 = VAR_4;
    } else {
        VAR_10 = VAR_12 ? VAR_5 : VAR_3;
    }

finish:

    VAR_7->headers_out.status = VAR_10;

    if (VAR_10 != VAR_5) {
        VAR_7->headers_out.content_length_n = 0;
    } else {
        VAR_7->headers_out.content_length_n = FUNC_0(VAR_12);
    }

    VAR_9 = FUNC_7(VAR_7);
    if (VAR_9 == VAR_0 || VAR_9 > VAR_6) {
        return VAR_9;
    }

    if (VAR_10 != VAR_5) {
        return FUNC_8(VAR_7, VAR_1);
    }

    VAR_12->last_buf = 1;
    VAR_14.buf = VAR_12;
    VAR_14.next = ((void*)0);

    return FUNC_6(VAR_7, &VAR_14);
}
