
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_19__ {TYPE_2__ footer; } ;
typedef TYPE_4__ ngx_http_footer_ctx_t ;
struct TYPE_20__ {TYPE_6__* buf; struct TYPE_20__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_21__ {int last_buf; int memory; scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3, ngx_chain_t *VAR_4)
{
    ngx_buf_t *VAR_5;
    ngx_uint_t VAR_6;
    ngx_chain_t *VAR_7, *VAR_8;
    ngx_http_footer_ctx_t *VAR_9;

    FUNC_5(VAR_1, VAR_3->connection->log, 0,
                   "http footer body filter");

    VAR_9 = FUNC_3(VAR_3, VAR_2);
    if (VAR_9 == ((void*)0)) {
        return FUNC_4(VAR_3, VAR_4);
    }

    VAR_6 = 0;

    for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->next) {
         if (VAR_7->buf->last_buf) {
             VAR_6 = 1;
             break;
         }
    }

    if (!VAR_6) {
        return FUNC_4(VAR_3, VAR_4);
    }

    VAR_5 = FUNC_2(VAR_3->pool);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->pos = VAR_9->footer.data;
    VAR_5->last = VAR_5->pos + VAR_9->footer.len;
    VAR_5->start = VAR_5->pos;
    VAR_5->end = VAR_5->last;
    VAR_5->last_buf = 1;
    VAR_5->memory = 1;

    if (FUNC_1(VAR_7->buf) == 0) {
        VAR_7->buf = VAR_5;
    } else {
        VAR_8 = FUNC_0(VAR_3->pool);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->buf = VAR_5;
        VAR_8->next = ((void*)0);
        VAR_7->next = VAR_8;
        VAR_7->buf->last_buf = 0;
    }

    return FUNC_4(VAR_3, VAR_4);
}
