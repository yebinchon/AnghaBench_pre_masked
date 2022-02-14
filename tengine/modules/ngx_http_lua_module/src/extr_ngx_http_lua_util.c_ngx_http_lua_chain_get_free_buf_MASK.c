
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef size_t off_t ;
typedef int ngx_pool_t ;
typedef int ngx_log_t ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_2__* buf; } ;
typedef TYPE_1__ ngx_chain_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_13__ {int temporary; int tag; int * start; int * last; int * pos; int * end; } ;
typedef TYPE_2__ ngx_buf_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,size_t) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *,int ,char*,size_t,TYPE_1__*) ;
 int FUNC_6 (int ,int *,int ,char*,size_t,size_t,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int * FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,int *) ;

ngx_chain_t *
FUNC_10(ngx_log_t *VAR_2, ngx_pool_t *VAR_3,
    ngx_chain_t **VAR_4, size_t VAR_5)
{
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;
    u_char *VAR_8, *VAR_9;

    const ngx_buf_tag_t VAR_10 = (ngx_buf_tag_t) &VAR_1;

    if (*VAR_4) {
        VAR_7 = *VAR_4;
        *VAR_4 = VAR_7->next;
        VAR_7->next = ((void*)0);

        VAR_6 = VAR_7->buf;
        VAR_8 = VAR_6->start;
        VAR_9 = VAR_6->end;
        if (VAR_8 && (size_t) (VAR_9 - VAR_8) >= VAR_5) {
            FUNC_6(VAR_0, VAR_2, 0,
                           "lua reuse free buf memory %O >= %uz, cl:%p, p:%p",
                           (off_t) (VAR_9 - VAR_8), VAR_5, VAR_7, VAR_8);

            FUNC_7(VAR_6, sizeof(ngx_buf_t));

            VAR_6->start = VAR_8;
            VAR_6->pos = VAR_8;
            VAR_6->last = VAR_8;
            VAR_6->end = VAR_9;
            VAR_6->tag = VAR_10;

            if (VAR_5) {
                VAR_6->temporary = 1;
            }

            return VAR_7;
        }

        FUNC_6(VAR_0, VAR_2, 0,
                       "lua reuse free buf chain, but reallocate memory "
                       "because %uz >= %O, cl:%p, p:%p", VAR_5,
                       (off_t) (VAR_6->end - VAR_6->start), VAR_7, VAR_6->start);

        if (FUNC_2(VAR_6) && VAR_6->start) {
            FUNC_9(VAR_3, VAR_6->start);
        }

        FUNC_7(VAR_6, sizeof(ngx_buf_t));

        if (VAR_5 == 0) {
            return VAR_7;
        }

        VAR_6->start = FUNC_8(VAR_3, VAR_5);
        if (VAR_6->start == ((void*)0)) {
            return ((void*)0);
        }

        VAR_6->end = VAR_6->start + VAR_5;

        FUNC_0("buf start: %p", VAR_7->buf->start);

        VAR_6->pos = VAR_6->start;
        VAR_6->last = VAR_6->start;
        VAR_6->tag = VAR_10;
        VAR_6->temporary = 1;

        return VAR_7;
    }

    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_5(VAR_0, VAR_2, 0,
                   "lua allocate new chainlink and new buf of size %uz, cl:%p",
                   VAR_5, VAR_7);

    VAR_7->buf = VAR_5 ? FUNC_4(VAR_3, VAR_5) : FUNC_3(VAR_3);
    if (VAR_7->buf == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0("buf start: %p", VAR_7->buf->start);

    VAR_7->buf->tag = VAR_10;
    VAR_7->next = ((void*)0);

    return VAR_7;
}
