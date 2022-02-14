
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_10__ {TYPE_3__* next; } ;
struct TYPE_11__ {int pfree; TYPE_1__ free; TYPE_3__* pages; TYPE_3__* last; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
struct TYPE_12__ {int slab; uintptr_t prev; struct TYPE_12__* next; } ;
typedef TYPE_3__ ngx_slab_page_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(ngx_slab_pool_t *VAR_2, ngx_slab_page_t *VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_slab_page_t *VAR_5, *VAR_6;

    VAR_2->pfree += VAR_4;

    VAR_3->slab = VAR_4--;

    if (VAR_4) {
        FUNC_0(&VAR_3[1], VAR_4 * sizeof(ngx_slab_page_t));
    }

    if (VAR_3->next) {
        VAR_5 = FUNC_1(VAR_3);
        VAR_5->next = VAR_3->next;
        VAR_3->next->prev = VAR_3->prev;
    }

    VAR_6 = VAR_3 + VAR_3->slab;

    if (VAR_6 < VAR_2->last) {

        if (FUNC_2(VAR_6) == VAR_0) {

            if (VAR_6->next != ((void*)0)) {
                VAR_4 += VAR_6->slab;
                VAR_3->slab += VAR_6->slab;

                VAR_5 = FUNC_1(VAR_6);
                VAR_5->next = VAR_6->next;
                VAR_6->next->prev = VAR_6->prev;

                VAR_6->slab = VAR_1;
                VAR_6->next = ((void*)0);
                VAR_6->prev = VAR_0;
            }
        }
    }

    if (VAR_3 > VAR_2->pages) {
        VAR_6 = VAR_3 - 1;

        if (FUNC_2(VAR_6) == VAR_0) {

            if (VAR_6->slab == VAR_1) {
                VAR_6 = FUNC_1(VAR_6);
            }

            if (VAR_6->next != ((void*)0)) {
                VAR_4 += VAR_6->slab;
                VAR_6->slab += VAR_3->slab;

                VAR_5 = FUNC_1(VAR_6);
                VAR_5->next = VAR_6->next;
                VAR_6->next->prev = VAR_6->prev;

                VAR_3->slab = VAR_1;
                VAR_3->next = ((void*)0);
                VAR_3->prev = VAR_0;

                VAR_3 = VAR_6;
            }
        }
    }

    if (VAR_4) {
        VAR_3[VAR_4].prev = (uintptr_t) VAR_3;
    }

    VAR_3->prev = (uintptr_t) &VAR_2->free;
    VAR_3->next = VAR_2->free.next;

    VAR_3->next->prev = (uintptr_t) VAR_3;

    VAR_2->free.next = VAR_3;
}
