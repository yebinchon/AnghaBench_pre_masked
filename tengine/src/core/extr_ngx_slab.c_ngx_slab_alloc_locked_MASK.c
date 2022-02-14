
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {size_t min_size; size_t min_shift; TYPE_1__* stats; } ;
typedef TYPE_2__ ngx_slab_pool_t ;
struct TYPE_18__ {uintptr_t prev; uintptr_t slab; struct TYPE_18__* next; } ;
typedef TYPE_3__ ngx_slab_page_t ;
struct TYPE_16__ {int total; int fails; int used; int reqs; } ;
struct TYPE_15__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 uintptr_t VAR_4 ;
 uintptr_t VAR_5 ;
 uintptr_t VAR_6 ;
 uintptr_t VAR_7 ;
 TYPE_14__* VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,void*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t,size_t) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;

void *
FUNC_8(ngx_slab_pool_t *VAR_13, size_t VAR_14)
{
    size_t VAR_15;
    uintptr_t VAR_16, VAR_17, VAR_18, *VAR_19;
    ngx_uint_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    ngx_slab_page_t *VAR_25, *VAR_26, *VAR_27;

    if (VAR_14 > VAR_12) {

        FUNC_1(VAR_1, VAR_8->log, 0,
                       "slab alloc: %uz", VAR_14);

        VAR_25 = FUNC_3(VAR_13, (VAR_14 >> VAR_10)
                                          + ((VAR_14 % VAR_9) ? 1 : 0));
        if (VAR_25) {
            VAR_16 = FUNC_5(VAR_13, VAR_25);

        } else {
            VAR_16 = 0;
        }

        goto done;
    }

    if (VAR_14 > VAR_13->min_size) {
        VAR_23 = 1;
        for (VAR_15 = VAR_14 - 1; VAR_15 >>= 1; VAR_23++) { }
        VAR_22 = VAR_23 - VAR_13->min_shift;

    } else {
        VAR_23 = VAR_13->min_shift;
        VAR_22 = 0;
    }

    VAR_13->stats[VAR_22].reqs++;

    FUNC_2(VAR_1, VAR_8->log, 0,
                   "slab alloc: %uz slot: %ui", VAR_14, VAR_22);

    VAR_27 = FUNC_7(VAR_13);
    VAR_25 = VAR_27[VAR_22].next;

    if (VAR_25->next != VAR_25) {

        if (VAR_23 < VAR_11) {

            VAR_19 = (uintptr_t *) FUNC_5(VAR_13, VAR_25);

            VAR_24 = (VAR_9 >> VAR_23) / (8 * sizeof(uintptr_t));

            for (VAR_21 = 0; VAR_21 < VAR_24; VAR_21++) {

                if (VAR_19[VAR_21] != VAR_3) {

                    for (VAR_17 = 1, VAR_20 = 0; VAR_17; VAR_17 <<= 1, VAR_20++) {
                        if (VAR_19[VAR_21] & VAR_17) {
                            continue;
                        }

                        VAR_19[VAR_21] |= VAR_17;

                        VAR_20 = (VAR_21 * 8 * sizeof(uintptr_t) + VAR_20) << VAR_23;

                        VAR_16 = (uintptr_t) VAR_19 + VAR_20;

                        VAR_13->stats[VAR_22].used++;

                        if (VAR_19[VAR_21] == VAR_3) {
                            for (VAR_21 = VAR_21 + 1; VAR_21 < VAR_24; VAR_21++) {
                                if (VAR_19[VAR_21] != VAR_3) {
                                    goto done;
                                }
                            }

                            VAR_26 = FUNC_6(VAR_25);
                            VAR_26->next = VAR_25->next;
                            VAR_25->next->prev = VAR_25->prev;

                            VAR_25->next = ((void*)0);
                            VAR_25->prev = VAR_7;
                        }

                        goto done;
                    }
                }
            }

        } else if (VAR_23 == VAR_11) {

            for (VAR_17 = 1, VAR_20 = 0; VAR_17; VAR_17 <<= 1, VAR_20++) {
                if (VAR_25->slab & VAR_17) {
                    continue;
                }

                VAR_25->slab |= VAR_17;

                if (VAR_25->slab == VAR_3) {
                    VAR_26 = FUNC_6(VAR_25);
                    VAR_26->next = VAR_25->next;
                    VAR_25->next->prev = VAR_25->prev;

                    VAR_25->next = ((void*)0);
                    VAR_25->prev = VAR_4;
                }

                VAR_16 = FUNC_5(VAR_13, VAR_25) + (VAR_20 << VAR_23);

                VAR_13->stats[VAR_22].used++;

                goto done;
            }

        } else {

            VAR_18 = ((uintptr_t) 1 << (VAR_9 >> VAR_23)) - 1;
            VAR_18 <<= VAR_6;

            for (VAR_17 = (uintptr_t) 1 << VAR_6, VAR_20 = 0;
                 VAR_17 & VAR_18;
                 VAR_17 <<= 1, VAR_20++)
            {
                if (VAR_25->slab & VAR_17) {
                    continue;
                }

                VAR_25->slab |= VAR_17;

                if ((VAR_25->slab & VAR_5) == VAR_18) {
                    VAR_26 = FUNC_6(VAR_25);
                    VAR_26->next = VAR_25->next;
                    VAR_25->next->prev = VAR_25->prev;

                    VAR_25->next = ((void*)0);
                    VAR_25->prev = VAR_2;
                }

                VAR_16 = FUNC_5(VAR_13, VAR_25) + (VAR_20 << VAR_23);

                VAR_13->stats[VAR_22].used++;

                goto done;
            }
        }

        FUNC_4(VAR_13, VAR_0, "ngx_slab_alloc(): page is busy");
        FUNC_0();
    }

    VAR_25 = FUNC_3(VAR_13, 1);

    if (VAR_25) {
        if (VAR_23 < VAR_11) {
            VAR_19 = (uintptr_t *) FUNC_5(VAR_13, VAR_25);

            VAR_21 = (VAR_9 >> VAR_23) / ((1 << VAR_23) * 8);

            if (VAR_21 == 0) {
                VAR_21 = 1;
            }



            for (VAR_20 = 0; VAR_20 < (VAR_21 + 1) / (8 * sizeof(uintptr_t)); VAR_20++) {
                VAR_19[VAR_20] = VAR_3;
            }

            VAR_17 = ((uintptr_t) 1 << ((VAR_21 + 1) % (8 * sizeof(uintptr_t)))) - 1;
            VAR_19[VAR_20] = VAR_17;

            VAR_24 = (VAR_9 >> VAR_23) / (8 * sizeof(uintptr_t));

            for (VAR_20 = VAR_20 + 1; VAR_20 < VAR_24; VAR_20++) {
                VAR_19[VAR_20] = 0;
            }

            VAR_25->slab = VAR_23;
            VAR_25->next = &VAR_27[VAR_22];
            VAR_25->prev = (uintptr_t) &VAR_27[VAR_22] | VAR_7;

            VAR_27[VAR_22].next = VAR_25;

            VAR_13->stats[VAR_22].total += (VAR_9 >> VAR_23) - VAR_21;

            VAR_16 = FUNC_5(VAR_13, VAR_25) + (VAR_21 << VAR_23);

            VAR_13->stats[VAR_22].used++;

            goto done;

        } else if (VAR_23 == VAR_11) {

            VAR_25->slab = 1;
            VAR_25->next = &VAR_27[VAR_22];
            VAR_25->prev = (uintptr_t) &VAR_27[VAR_22] | VAR_4;

            VAR_27[VAR_22].next = VAR_25;

            VAR_13->stats[VAR_22].total += 8 * sizeof(uintptr_t);

            VAR_16 = FUNC_5(VAR_13, VAR_25);

            VAR_13->stats[VAR_22].used++;

            goto done;

        } else {

            VAR_25->slab = ((uintptr_t) 1 << VAR_6) | VAR_23;
            VAR_25->next = &VAR_27[VAR_22];
            VAR_25->prev = (uintptr_t) &VAR_27[VAR_22] | VAR_2;

            VAR_27[VAR_22].next = VAR_25;

            VAR_13->stats[VAR_22].total += VAR_9 >> VAR_23;

            VAR_16 = FUNC_5(VAR_13, VAR_25);

            VAR_13->stats[VAR_22].used++;

            goto done;
        }
    }

    VAR_16 = 0;

    VAR_13->stats[VAR_22].fails++;

done:

    FUNC_1(VAR_1, VAR_8->log, 0,
                   "slab alloc: %p", (void *) VAR_16);

    return (void *) VAR_16;
}
