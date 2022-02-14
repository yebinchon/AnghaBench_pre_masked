
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_16__ {scalar_t__ buf; scalar_t__ in; TYPE_5__* free; TYPE_5__* busy; TYPE_5__* out; TYPE_5__** last_out; } ;
typedef TYPE_3__ ngx_http_sub_ctx_t ;
struct TYPE_17__ {int buffered; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_19__ {scalar_t__ in_file; TYPE_2__* shadow; int pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_15__ {int last; int pos; } ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_4, ngx_http_sub_ctx_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_chain_t *VAR_8;


    VAR_7 = ((void*)0);
    for (VAR_8 = VAR_5->out; VAR_8; VAR_8 = VAR_8->next) {
        FUNC_4(VAR_3, VAR_4->connection->log, 0,
                       "sub out: %p %p", VAR_8->buf, VAR_8->buf->pos);
        if (VAR_8->buf == VAR_7) {
            FUNC_5(VAR_2, VAR_4->connection->log, 0,
                          "the same buf was used in sub");
            FUNC_2();
            return VAR_0;
        }
        VAR_7 = VAR_8->buf;
    }


    VAR_6 = FUNC_3(VAR_4, VAR_5->out);

    if (VAR_5->busy == ((void*)0)) {
        VAR_5->busy = VAR_5->out;

    } else {
        for (VAR_8 = VAR_5->busy; VAR_8->next; VAR_8 = VAR_8->next) { }
        VAR_8->next = VAR_5->out;
    }

    VAR_5->out = ((void*)0);
    VAR_5->last_out = &VAR_5->out;

    while (VAR_5->busy) {

        VAR_8 = VAR_5->busy;
        VAR_7 = VAR_8->buf;

        if (FUNC_1(VAR_7) != 0) {
            break;
        }

        if (VAR_7->shadow) {
            VAR_7->shadow->pos = VAR_7->shadow->last;
        }

        VAR_5->busy = VAR_8->next;

        if (FUNC_0(VAR_7) || VAR_7->in_file) {


            VAR_8->next = VAR_5->free;
            VAR_5->free = VAR_8;
        }
    }

    if (VAR_5->in || VAR_5->buf) {
        VAR_4->buffered |= VAR_1;

    } else {
        VAR_4->buffered &= ~VAR_1;
    }

    return VAR_6;
}
