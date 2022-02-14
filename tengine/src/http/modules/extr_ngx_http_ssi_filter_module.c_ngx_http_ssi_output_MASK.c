
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


typedef int ngx_int_t ;
struct TYPE_18__ {TYPE_5__* free; TYPE_5__* busy; TYPE_5__* out; TYPE_5__** last_out; } ;
typedef TYPE_3__ ngx_http_ssi_ctx_t ;
struct TYPE_19__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_21__ {scalar_t__ in_file; TYPE_2__* shadow; int pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_17__ {int last; int pos; } ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_6__*,int ) ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_3, ngx_http_ssi_ctx_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;


    VAR_6 = ((void*)0);
    for (VAR_7 = VAR_4->out; VAR_7; VAR_7 = VAR_7->next) {
        FUNC_5(VAR_2, VAR_3->connection->log, 0,
                       "ssi out: %p %p", VAR_7->buf, VAR_7->buf->pos);
        if (VAR_7->buf == VAR_6) {
            FUNC_6(VAR_1, VAR_3->connection->log, 0,
                          "the same buf was used in ssi");
            FUNC_2();
            return VAR_0;
        }
        VAR_6 = VAR_7->buf;
    }


    VAR_5 = FUNC_3(VAR_3, VAR_4->out);

    if (VAR_4->busy == ((void*)0)) {
        VAR_4->busy = VAR_4->out;

    } else {
        for (VAR_7 = VAR_4->busy; VAR_7->next; VAR_7 = VAR_7->next) { }
        VAR_7->next = VAR_4->out;
    }

    VAR_4->out = ((void*)0);
    VAR_4->last_out = &VAR_4->out;

    while (VAR_4->busy) {

        VAR_7 = VAR_4->busy;
        VAR_6 = VAR_7->buf;

        if (FUNC_1(VAR_6) != 0) {
            break;
        }

        if (VAR_6->shadow) {
            VAR_6->shadow->pos = VAR_6->shadow->last;
        }

        VAR_4->busy = VAR_7->next;

        if (FUNC_0(VAR_6) || VAR_6->in_file) {


            VAR_7->next = VAR_4->free;
            VAR_4->free = VAR_7;
        }
    }

    FUNC_4(VAR_3, VAR_4);

    return VAR_5;
}
