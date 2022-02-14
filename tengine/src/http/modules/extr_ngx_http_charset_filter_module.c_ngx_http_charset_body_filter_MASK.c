
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_22__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_23__ {int * table; TYPE_4__* free_bufs; TYPE_4__* free_buffers; TYPE_4__* busy; scalar_t__ to_utf8; scalar_t__ from_utf8; } ;
typedef TYPE_3__ ngx_http_charset_ctx_t ;
struct TYPE_24__ {TYPE_5__* buf; struct TYPE_24__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_25__ {scalar_t__ tag; scalar_t__ pos; TYPE_1__* shadow; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_21__ {int last; int pos; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_3 (int ,TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_4 (int ,TYPE_5__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_buf_t *VAR_5;
    ngx_chain_t *VAR_6, *VAR_7, **VAR_8;
    ngx_http_charset_ctx_t *VAR_9;

    VAR_9 = FUNC_5(VAR_2, VAR_1);

    if (VAR_9 == ((void*)0) || VAR_9->table == ((void*)0)) {
        return FUNC_6(VAR_2, VAR_3);
    }

    if ((VAR_9->to_utf8 || VAR_9->from_utf8) || VAR_9->busy) {

        VAR_7 = ((void*)0);
        VAR_8 = &VAR_7;

        for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next) {
            VAR_5 = VAR_6->buf;

            if (FUNC_1(VAR_5) == 0) {

                *VAR_8 = FUNC_0(VAR_2->pool);
                if (*VAR_8 == ((void*)0)) {
                    return VAR_0;
                }

                (*VAR_8)->buf = VAR_5;
                (*VAR_8)->next = ((void*)0);

                VAR_8 = &(*VAR_8)->next;

                continue;
            }

            if (VAR_9->to_utf8) {
                *VAR_8 = FUNC_4(VAR_2->pool, VAR_5, VAR_9);

            } else {
                *VAR_8 = FUNC_3(VAR_2->pool, VAR_5, VAR_9);
            }

            if (*VAR_8 == ((void*)0)) {
                return VAR_0;
            }

            while (*VAR_8) {
                VAR_8 = &(*VAR_8)->next;
            }
        }

        VAR_4 = FUNC_6(VAR_2, VAR_7);

        if (VAR_7) {
            if (VAR_9->busy == ((void*)0)) {
                VAR_9->busy = VAR_7;

            } else {
                for (VAR_6 = VAR_9->busy; VAR_6->next; VAR_6 = VAR_6->next) { }
                VAR_6->next = VAR_7;
            }
        }

        while (VAR_9->busy) {

            VAR_6 = VAR_9->busy;
            VAR_5 = VAR_6->buf;

            if (FUNC_1(VAR_5) != 0) {
                break;
            }

            VAR_9->busy = VAR_6->next;

            if (VAR_5->tag != (ngx_buf_tag_t) &VAR_1) {
                continue;
            }

            if (VAR_5->shadow) {
                VAR_5->shadow->pos = VAR_5->shadow->last;
            }

            if (VAR_5->pos) {
                VAR_6->next = VAR_9->free_buffers;
                VAR_9->free_buffers = VAR_6;
                continue;
            }

            VAR_6->next = VAR_9->free_bufs;
            VAR_9->free_bufs = VAR_6;
        }

        return VAR_4;
    }

    for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next) {
        (void) FUNC_2(VAR_6->buf, VAR_9->table);
    }

    return FUNC_6(VAR_2, VAR_3);
}
