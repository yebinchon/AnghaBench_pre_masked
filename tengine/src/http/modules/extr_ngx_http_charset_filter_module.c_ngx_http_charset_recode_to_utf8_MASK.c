
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t u_char ;
typedef int ngx_pool_t ;
struct TYPE_12__ {size_t* table; size_t length; } ;
typedef TYPE_1__ ngx_http_charset_ctx_t ;
struct TYPE_13__ {TYPE_3__* buf; struct TYPE_13__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_14__ {size_t* pos; size_t* last; size_t* end; struct TYPE_14__* shadow; int flush; int last_in_chain; int last_buf; int mmap; int memory; int temporary; } ;
typedef TYPE_3__ ngx_buf_t ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int *,TYPE_1__*,size_t) ;

__attribute__((used)) static ngx_chain_t *
FUNC_3(ngx_pool_t *VAR_1, ngx_buf_t *VAR_2,
    ngx_http_charset_ctx_t *VAR_3)
{
    size_t VAR_4, VAR_5;
    u_char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    ngx_buf_t *VAR_10;
    ngx_chain_t *VAR_11, *VAR_12, **VAR_13;

    VAR_9 = VAR_3->table;

    for (VAR_7 = VAR_2->pos; VAR_7 < VAR_2->last; VAR_7++) {
        if (VAR_9[*VAR_7 * VAR_0] == '\1') {
            continue;
        }

        goto recode;
    }

    VAR_11 = FUNC_0(VAR_1);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_11->buf = VAR_2;
    VAR_11->next = ((void*)0);

    return VAR_11;

recode:






    VAR_4 = VAR_7 - VAR_2->pos;

    if (VAR_4 > 512) {
        VAR_11 = FUNC_1(VAR_1, VAR_3);
        if (VAR_11 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_10 = VAR_11->buf;

        VAR_10->temporary = VAR_2->temporary;
        VAR_10->memory = VAR_2->memory;
        VAR_10->mmap = VAR_2->mmap;
        VAR_10->flush = VAR_2->flush;

        VAR_10->pos = VAR_2->pos;
        VAR_10->last = VAR_7;

        VAR_11->buf = VAR_10;
        VAR_11->next = ((void*)0);

        VAR_5 = VAR_2->last - VAR_7;
        VAR_5 = VAR_5 / 2 + VAR_5 / 2 * VAR_3->length;

    } else {
        VAR_11 = ((void*)0);

        VAR_5 = VAR_2->last - VAR_7;
        VAR_5 = VAR_4 + VAR_5 / 2 + VAR_5 / 2 * VAR_3->length;

        VAR_7 = VAR_2->pos;
    }

    VAR_12 = FUNC_2(VAR_1, VAR_3, VAR_5);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_11) {
        VAR_11->next = VAR_12;

    } else {
        VAR_11 = VAR_12;
    }

    VAR_13 = &VAR_12->next;

    VAR_10 = VAR_12->buf;
    VAR_8 = VAR_10->pos;

    while (VAR_7 < VAR_2->last) {

        VAR_6 = &VAR_9[*VAR_7++ * VAR_0];
        VAR_4 = *VAR_6++;

        if ((size_t) (VAR_10->end - VAR_8) < VAR_4) {
            VAR_10->last = VAR_8;

            VAR_5 = VAR_2->last - VAR_7;
            VAR_5 = VAR_4 + VAR_5 / 2 + VAR_5 / 2 * VAR_3->length;

            VAR_12 = FUNC_2(VAR_1, VAR_3, VAR_5);
            if (VAR_12 == ((void*)0)) {
                return ((void*)0);
            }

            *VAR_13 = VAR_12;
            VAR_13 = &VAR_12->next;

            VAR_10 = VAR_12->buf;
            VAR_8 = VAR_10->pos;
        }

        while (VAR_4) {
            *VAR_8++ = *VAR_6++;
            VAR_4--;
        }
    }

    VAR_10->last = VAR_8;

    VAR_10->last_buf = VAR_2->last_buf;
    VAR_10->last_in_chain = VAR_2->last_in_chain;
    VAR_10->flush = VAR_2->flush;

    VAR_10->shadow = VAR_2;

    return VAR_11;
}
