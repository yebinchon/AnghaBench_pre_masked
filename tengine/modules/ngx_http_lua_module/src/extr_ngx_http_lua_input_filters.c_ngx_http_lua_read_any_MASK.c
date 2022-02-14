
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_8__ {int pos; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_6__ {int last; } ;


 int VAR_0 ;
 int VAR_1 ;

ngx_int_t
FUNC_0(ngx_buf_t *VAR_2, ngx_chain_t *VAR_3, size_t *VAR_4,
    ssize_t VAR_5, ngx_log_t *VAR_6)
{
    if (VAR_5 == 0) {
        return VAR_0;
    }

    if (VAR_5 >= (ssize_t) *VAR_4) {
        VAR_5 = (ssize_t) *VAR_4;
    }

    VAR_3->buf->last += VAR_5;
    VAR_2->pos += VAR_5;

    return VAR_1;
}
