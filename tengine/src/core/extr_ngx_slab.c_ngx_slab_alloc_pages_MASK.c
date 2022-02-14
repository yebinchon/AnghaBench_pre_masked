
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {size_t slab; uintptr_t prev; struct TYPE_7__* next; } ;
struct TYPE_6__ {size_t pfree; scalar_t__ log_nomem; TYPE_2__ free; } ;
typedef TYPE_1__ ngx_slab_pool_t ;
typedef TYPE_2__ ngx_slab_page_t ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static ngx_slab_page_t *
FUNC_1(ngx_slab_pool_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_slab_page_t *VAR_6, *VAR_7;

    for (VAR_6 = VAR_4->free.next; VAR_6 != &VAR_4->free; VAR_6 = VAR_6->next) {

        if (VAR_6->slab >= VAR_5) {

            if (VAR_6->slab > VAR_5) {
                VAR_6[VAR_6->slab - 1].prev = (uintptr_t) &VAR_6[VAR_5];

                VAR_6[VAR_5].slab = VAR_6->slab - VAR_5;
                VAR_6[VAR_5].next = VAR_6->next;
                VAR_6[VAR_5].prev = VAR_6->prev;

                VAR_7 = (ngx_slab_page_t *) VAR_6->prev;
                VAR_7->next = &VAR_6[VAR_5];
                VAR_6->next->prev = (uintptr_t) &VAR_6[VAR_5];

            } else {
                VAR_7 = (ngx_slab_page_t *) VAR_6->prev;
                VAR_7->next = VAR_6->next;
                VAR_6->next->prev = VAR_6->prev;
            }

            VAR_6->slab = VAR_5 | VAR_3;
            VAR_6->next = ((void*)0);
            VAR_6->prev = VAR_1;

            VAR_4->pfree -= VAR_5;

            if (--VAR_5 == 0) {
                return VAR_6;
            }

            for (VAR_7 = VAR_6 + 1; VAR_5; VAR_5--) {
                VAR_7->slab = VAR_2;
                VAR_7->next = ((void*)0);
                VAR_7->prev = VAR_1;
                VAR_7++;
            }

            return VAR_6;
        }
    }

    if (VAR_4->log_nomem) {
        FUNC_0(VAR_4, VAR_0,
                       "ngx_slab_alloc() failed: no memory");
    }

    return ((void*)0);
}
