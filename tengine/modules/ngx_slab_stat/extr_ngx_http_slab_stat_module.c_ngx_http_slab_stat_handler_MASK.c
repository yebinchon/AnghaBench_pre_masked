
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {scalar_t__ content_length_n; int status; } ;
struct TYPE_13__ {scalar_t__ method; scalar_t__ header_only; TYPE_1__ headers_out; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {int * next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_15__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_4__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t VAR_9;

    if (VAR_6->method != VAR_1) {
        return VAR_3;
    }

    VAR_7 = FUNC_0(VAR_6);
    if (VAR_7 != VAR_5) {
        return VAR_7;
    }

    VAR_8 = FUNC_4(VAR_6->pool, sizeof(ngx_buf_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }

    if (FUNC_3(VAR_6->pool, VAR_8) == VAR_0) {
        return VAR_2;
    }

    VAR_6->headers_out.status = VAR_4;
    VAR_6->headers_out.content_length_n = VAR_8->last - VAR_8->pos;

    VAR_7 = FUNC_2(VAR_6);

    if (VAR_7 == VAR_0 || VAR_7 > VAR_5 || VAR_6->header_only) {
        return VAR_7;
    }

    VAR_9.buf = VAR_8;
    VAR_9.next = ((void*)0);

    return FUNC_1(VAR_6, &VAR_9);
}
