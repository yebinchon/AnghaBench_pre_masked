
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_16__ {int fails; int reqs; int used; int total; } ;
typedef TYPE_4__ ngx_slab_stat_t ;
struct TYPE_18__ {size_t slab; struct TYPE_18__* next; } ;
struct TYPE_17__ {int min_shift; size_t pfree; int mutex; TYPE_4__* stats; int end; int start; TYPE_6__ free; } ;
typedef TYPE_5__ ngx_slab_pool_t ;
typedef TYPE_6__ ngx_slab_page_t ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_15__ {int size; TYPE_2__ name; scalar_t__ addr; } ;
struct TYPE_19__ {TYPE_3__ shm; } ;
typedef TYPE_7__ ngx_shm_zone_t ;
typedef int ngx_pool_t ;
struct TYPE_20__ {size_t nelts; TYPE_7__* elts; struct TYPE_20__* next; } ;
typedef TYPE_8__ ngx_list_part_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {int memory; int last_buf; int * last; int * pos; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_13__ {TYPE_8__ part; } ;
struct TYPE_12__ {TYPE_1__ shared_memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_11__* VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,scalar_t__,int ,...) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_pool_t *VAR_12, ngx_buf_t *VAR_13)
{
    u_char *VAR_14;
    size_t VAR_15, VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;
    ngx_shm_zone_t *VAR_20;
    ngx_slab_pool_t *VAR_21;
    ngx_slab_page_t *VAR_22;
    ngx_slab_stat_t *VAR_23;
    volatile ngx_list_part_t *VAR_24;
    VAR_15 = 0;



    VAR_24 = &VAR_10->shared_memory.part;
    VAR_20 = VAR_24->elts;

    for (VAR_17 = 0; ; VAR_17++) {

        if (VAR_17 >= VAR_24->nelts) {
            if (VAR_24->next == ((void*)0)) {
                break;
            }
            VAR_24 = VAR_24->next;
            VAR_20 = VAR_24->elts;
            VAR_17 = 0;
        }

        VAR_15 += (sizeof("* shared memory: \n") - 1) + (size_t)VAR_20[VAR_17].shm.name.len;
        VAR_15 += (3 * 12 + sizeof("total:(KB) free:(KB) size:(KB)\n") - 1);

        VAR_21 = (ngx_slab_pool_t *) VAR_20[VAR_17].shm.addr;

        FUNC_1(&VAR_21->mutex);

        for (VAR_22 = VAR_21->free.next; VAR_22 != &VAR_21->free; VAR_22 = VAR_22->next) {
            VAR_15 += (12 + 2 * 16 + sizeof("pages:(KB) start: end:\n") - 1);
        }

        VAR_19 = VAR_11 - VAR_21->min_shift;

        FUNC_2(&VAR_21->mutex);

        for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
            VAR_15 += (12 * 5 + sizeof("slot:(Bytes) total: used: reqs: fails:\n") - 1);
        }

    }


    VAR_14 = FUNC_0(VAR_12, VAR_15 * 2);
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13->pos = VAR_14;

    VAR_16 = 1 << VAR_11;

    VAR_24 = &VAR_10->shared_memory.part;
    VAR_20 = VAR_24->elts;

    for (VAR_17 = 0; ; VAR_17++) {

        if (VAR_17 >= VAR_24->nelts) {
            if (VAR_24->next == ((void*)0)) {
                break;
            }
            VAR_24 = VAR_24->next;
            VAR_20 = VAR_24->elts;
            VAR_17 = 0;
        }

        VAR_21 = (ngx_slab_pool_t *) VAR_20[VAR_17].shm.addr;

        VAR_14 = FUNC_3(VAR_14, (sizeof("* shared memory: \n") - 1) + VAR_20[VAR_17].shm.name.len,
            "* shared memory: %V\n", &VAR_20[VAR_17].shm.name);

        FUNC_1(&VAR_21->mutex);

        VAR_14 = FUNC_3(VAR_14, (3 * 12 + sizeof("total:(KB) free:(KB) size:(KB)\n") - 1), "total:%12z(KB) free:%12z(KB) size:%12z(KB)\n",
            VAR_20[VAR_17].shm.size / 1024, VAR_21->pfree * VAR_16 / 1024,
            VAR_16 / 1024, VAR_21->pfree);

        for (VAR_22 = VAR_21->free.next; VAR_22 != &VAR_21->free; VAR_22 = VAR_22->next) {
            VAR_14 = FUNC_3(VAR_14, (12 + 2 * 16 + sizeof("pages:(KB) start: end:\n") - 1),
                "pages:%12z(KB) start:%p end:%p\n", VAR_22->slab * VAR_16 / 1024,
                VAR_21->start, VAR_21->end);
        }

        VAR_23 = VAR_21->stats;

        VAR_19 = VAR_11 - VAR_21->min_shift;

        for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
            VAR_14 = FUNC_3(VAR_14, (12 * 5 + sizeof("slot:(Bytes) total: used: reqs: fails:\n") - 1), "slot:%12z(Bytes) total:%12z used:%12z reqs:%12z fails:%12z\n",
                1 << (VAR_18 + VAR_21->min_shift),
                VAR_23[VAR_18].total, VAR_23[VAR_18].used, VAR_23[VAR_18].reqs, VAR_23[VAR_18].fails);
        }

        FUNC_2(&VAR_21->mutex);
    }

    VAR_13->last = VAR_14;
    VAR_13->memory = 1;
    VAR_13->last_buf = 1;

    return VAR_1;
}
