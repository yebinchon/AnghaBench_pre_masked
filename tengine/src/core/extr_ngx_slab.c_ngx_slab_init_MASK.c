
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t slab; uintptr_t prev; struct TYPE_8__* next; } ;
typedef TYPE_1__ ngx_slab_stat_t ;
struct TYPE_9__ {size_t min_size; size_t min_shift; size_t pfree; int log_nomem; char* log_ctx; char zero; TYPE_1__* pages; TYPE_1__* last; int * start; int * end; TYPE_1__ free; TYPE_1__* stats; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
typedef TYPE_1__ ngx_slab_page_t ;
typedef size_t ngx_int_t ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *,size_t) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;

void
FUNC_4(ngx_slab_pool_t *VAR_2)
{
    u_char *VAR_3;
    size_t VAR_4;
    ngx_int_t VAR_5;
    ngx_uint_t VAR_6, VAR_7, VAR_8;
    ngx_slab_page_t *VAR_9, *VAR_10;

    VAR_2->min_size = (size_t) 1 << VAR_2->min_shift;

    VAR_9 = FUNC_3(VAR_2);

    VAR_3 = (u_char *) VAR_9;
    VAR_4 = VAR_2->end - VAR_3;

    FUNC_2(VAR_3, VAR_4);

    VAR_7 = VAR_1 - VAR_2->min_shift;

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {

        VAR_9[VAR_6].slab = 0;
        VAR_9[VAR_6].next = &VAR_9[VAR_6];
        VAR_9[VAR_6].prev = 0;
    }

    VAR_3 += VAR_7 * sizeof(ngx_slab_page_t);

    VAR_2->stats = (ngx_slab_stat_t *) VAR_3;
    FUNC_1(VAR_2->stats, VAR_7 * sizeof(ngx_slab_stat_t));

    VAR_3 += VAR_7 * sizeof(ngx_slab_stat_t);

    VAR_4 -= VAR_7 * (sizeof(ngx_slab_page_t) + sizeof(ngx_slab_stat_t));

    VAR_8 = (ngx_uint_t) (VAR_4 / (VAR_0 + sizeof(ngx_slab_page_t)));

    VAR_2->pages = (ngx_slab_page_t *) VAR_3;
    FUNC_1(VAR_2->pages, VAR_8 * sizeof(ngx_slab_page_t));

    VAR_10 = VAR_2->pages;


    VAR_2->free.slab = 0;
    VAR_2->free.next = VAR_10;
    VAR_2->free.prev = 0;

    VAR_10->slab = VAR_8;
    VAR_10->next = &VAR_2->free;
    VAR_10->prev = (uintptr_t) &VAR_2->free;

    VAR_2->start = FUNC_0(VAR_3 + VAR_8 * sizeof(ngx_slab_page_t),
                                VAR_0);

    VAR_5 = VAR_8 - (VAR_2->end - VAR_2->start) / VAR_0;
    if (VAR_5 > 0) {
        VAR_8 -= VAR_5;
        VAR_10->slab = VAR_8;
    }

    VAR_2->last = VAR_2->pages + VAR_8;
    VAR_2->pfree = VAR_8;

    VAR_2->log_nomem = 1;
    VAR_2->log_ctx = &VAR_2->zero;
    VAR_2->zero = '\0';
}
