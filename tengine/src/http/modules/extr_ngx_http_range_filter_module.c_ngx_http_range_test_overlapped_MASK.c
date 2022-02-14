
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


typedef scalar_t__ off_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_4__ ngx_http_range_t ;
struct TYPE_12__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_16__ {scalar_t__ offset; TYPE_1__ ranges; } ;
typedef TYPE_5__ ngx_http_range_filter_ctx_t ;
struct TYPE_17__ {TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_18__ {int last_buf; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_range_filter_ctx_t *VAR_4, ngx_chain_t *VAR_5)
{
    off_t VAR_6, VAR_7;
    ngx_buf_t *VAR_8;
    ngx_uint_t VAR_9;
    ngx_http_range_t *VAR_10;

    if (VAR_4->offset) {
        goto overlapped;
    }

    VAR_8 = VAR_5->buf;

    if (!VAR_8->last_buf) {
        VAR_6 = VAR_4->offset;
        VAR_7 = VAR_4->offset + FUNC_0(VAR_8);

        VAR_10 = VAR_4->ranges.elts;
        for (VAR_9 = 0; VAR_9 < VAR_4->ranges.nelts; VAR_9++) {
            if (VAR_6 > VAR_10[VAR_9].start || VAR_7 < VAR_10[VAR_9].end) {
                goto overlapped;
            }
        }
    }

    VAR_4->offset = FUNC_0(VAR_8);

    return VAR_2;

overlapped:

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                  "range in overlapped buffers");

    return VAR_0;
}
